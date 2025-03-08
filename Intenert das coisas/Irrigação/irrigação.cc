#include <a_samp>
#include <zcmd> // Inclui a biblioteca ZCMD

// Definições
#define MAX_RADIUS 100.0 // Raio máximo para ouvir o som
#define MAX_VOLUME 100   // Volume máximo
#define UPDATE_INTERVAL 1000 // Intervalo de atualização do som (1 segundo)

// Variáveis
new bool:VehicleHasSound[MAX_VEHICLES]; // Verifica se o veículo tem som
new VehicleSoundURL[MAX_VEHICLES][128]; // URL do som do veículo
new Float:VehicleSoundVolume[MAX_VEHICLES]; // Volume do som do veículo
new bool:PlayerIsListening[MAX_PLAYERS]; // Verifica se o jogador já está ouvindo o som

// Função para obter o motorista de um veículo
GetVehicleDriver(vehicleid)
{
    for (new i = 0; i < MAX_PLAYERS; i++)
    {
        if (IsPlayerConnected(i) && GetPlayerVehicleID(i) == vehicleid && GetPlayerState(i) == PLAYER_STATE_DRIVER)
        {
            return i; // Retorna o ID do motorista
        }
    }
    return INVALID_PLAYER_ID; // Retorna INVALID_PLAYER_ID se não houver motorista
}

// Função para tocar o som no veículo
PlayVehicleSound(vehicleid, url[], Float:volume = 50.0)
{
    VehicleHasSound[vehicleid] = true;
    format(VehicleSoundURL[vehicleid], 128, "%s", url);
    VehicleSoundVolume[vehicleid] = volume;

    // Toca o som para o motorista (se houver)
    new driverid = GetVehicleDriver(vehicleid);
    if (driverid != INVALID_PLAYER_ID)
    {
        PlayAudioStreamForPlayer(driverid, url);
        PlayerIsListening[driverid] = true; // Marca que o motorista está ouvindo o som
    }

    // Toca o som para os passageiros
    for (new i = 0; i < MAX_PLAYERS; i++)
    {
        if (IsPlayerInVehicle(i, vehicleid) && i != driverid)
        {
            PlayAudioStreamForPlayer(i, url);
            PlayerIsListening[i] = true; // Marca que o passageiro está ouvindo o som
        }
    }
}

// Função para atualizar o som para jogadores próximos
UpdateVehicleSound(vehicleid)
{
    if (!VehicleHasSound[vehicleid]) return;

    new Float:vehiclePos[3];
    GetVehiclePos(vehicleid, vehiclePos[0], vehiclePos[1], vehiclePos[2]);

    for (new i = 0; i < MAX_PLAYERS; i++)
    {
        if (IsPlayerConnected(i) && !IsPlayerInVehicle(i, vehicleid))
        {
            new Float:playerPos[3];
            GetPlayerPos(i, playerPos[0], playerPos[1], playerPos[2]);

            // Calcula a distância entre o jogador e o veículo
            new Float:distance = GetPlayerDistanceFromPoint(i, vehiclePos[0], vehiclePos[1], vehiclePos[2]);

            if (distance <= MAX_RADIUS)
            {
                // Calcula o volume com base na distância
                new Float:volume = VehicleSoundVolume[vehicleid] * (1.0 - (distance / MAX_RADIUS));
                if (volume < 0.0) volume = 0.0;

                // Verifica se o jogador já está ouvindo o som
                if (!PlayerIsListening[i])
                {
                    // Toca o som com o volume ajustado
                    PlayAudioStreamForPlayer(i, VehicleSoundURL[vehicleid], vehiclePos[0], vehiclePos[1], vehiclePos[2], MAX_RADIUS, volume);
                    PlayerIsListening[i] = true; // Marca que o jogador está ouvindo o som
                }
                else
                {
                    // Atualiza a posição do som para o jogador
                    StopAudioStreamForPlayer(i); // Para o som atual
                    PlayAudioStreamForPlayer(i, VehicleSoundURL[vehicleid], vehiclePos[0], vehiclePos[1], vehiclePos[2], MAX_RADIUS, volume); // Toca o som novamente na nova posição
                }
            }
            else
            {
                // Para o som se o jogador estiver fora do raio
                if (PlayerIsListening[i])
                {
                    StopAudioStreamForPlayer(i);
                    PlayerIsListening[i] = false; // Marca que o jogador não está mais ouvindo o som
                }
            }
        }
    }
}

// Função para parar o som do veículo
StopVehicleSound(vehicleid)
{
    if (!VehicleHasSound[vehicleid]) return;

    VehicleHasSound[vehicleid] = false;
    VehicleSoundURL[vehicleid][0] = EOS;
    VehicleSoundVolume[vehicleid] = 0.0;

    // Para o som para todos os jogadores
    for (new i = 0; i < MAX_PLAYERS; i++)
    {
        if (IsPlayerConnected(i) && PlayerIsListening[i])
        {
            StopAudioStreamForPlayer(i);
            PlayerIsListening[i] = false; // Marca que o jogador não está mais ouvindo o som
        }
    }
}

// Timer para atualizar o som dos veículos periodicamente
forward UpdateVehicleSounds();
public UpdateVehicleSounds()
{
    for (new i = 0; i < MAX_VEHICLES; i++)
    {
        if (VehicleHasSound[i])
        {
            UpdateVehicleSound(i);
        }
    }
    return 1;
}

// Comando para iniciar o som
CMD:som(playerid, params[])
{
    // Abre um diálogo para inserir o link da música
    ShowPlayerDialog(playerid, 1, DIALOG_STYLE_INPUT, "Iniciar Música", "Digite o link da música:", "Tocar", "Cancelar");
    return 1;
}

// Comando para parar o som
CMD:pararsom(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    if (vehicleid != INVALID_VEHICLE_ID && VehicleHasSound[vehicleid])
    {
        StopVehicleSound(vehicleid);
        SendClientMessage(playerid, 0x00FF00FF, "Música parada com sucesso!");
    }
    else
    {
        SendClientMessage(playerid, 0xFF0000FF, "Você não está em um veículo com som ativo.");
    }
    return 1;
}

// Callback para processar o diálogo
public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    if (dialogid == 1) // Diálogo do comando /som
    {
        if (response) // Se o jogador clicou em "Tocar"
        {
            if (strlen(inputtext) > 0) // Verifica se o jogador digitou algo
            {
                new vehicleid = GetPlayerVehicleID(playerid);
                if (vehicleid != INVALID_VEHICLE_ID)
                {
                    // Inicia o som no veículo
                    PlayVehicleSound(vehicleid, inputtext, 50.0);
                    SendClientMessage(playerid, 0x00FF00FF, "Música iniciada com sucesso!");
                }
                else
                {
                    SendClientMessage(playerid, 0xFF0000FF, "Você não está em um veículo.");
                }
            }
            else
            {
                SendClientMessage(playerid, 0xFF0000FF, "Digite um link válido.");
            }
        }
    }
    return 1;
}

// Callbacks
public OnPlayerStateChange(playerid, newstate, oldstate)
{
    if (newstate == PLAYER_STATE_DRIVER || newstate == PLAYER_STATE_PASSENGER)
    {
        new vehicleid = GetPlayerVehicleID(playerid);
        if (!VehicleHasSound[vehicleid])
        {
            // Inicia o som do veículo (substitua o URL pelo link da música)
            PlayVehicleSound(vehicleid, "https://www.example.com/musica.mp3", 50.0);
        }
    }
    else if (oldstate == PLAYER_STATE_DRIVER || oldstate == PLAYER_STATE_PASSENGER)
    {
        new vehicleid = GetPlayerVehicleID(playerid);
        if (VehicleHasSound[vehicleid])
        {
            // Para o som do veículo
            StopVehicleSound(vehicleid);
        }
    }
    return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
    // Para o som se o jogador desconectar
    if (PlayerIsListening[playerid])
    {
        StopAudioStreamForPlayer(playerid);
        PlayerIsListening[playerid] = false; // Marca que o jogador não está mais ouvindo o som
    }
    return 1;
}

public OnGameModeInit()
{
    // Exemplo: Adiciona um veículo com som automático
    AddStaticVehicle(562, 0.0, 0.0, 5.0, 0.0, 0, 0); // Veículo de exemplo

    // Inicia o timer para atualizar os sons dos veículos
    SetTimer("UpdateVehicleSounds", UPDATE_INTERVAL, true);
    return 1;
}

public OnGameModeExit()
{
    // Para todos os sons ao sair do modo de jogo
    for (new i = 0; i < MAX_VEHICLES; i++)
    {
        StopVehicleSound(i);
    }
    return 1;
}