#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>

#define MAX_QUESTOES 10

typedef struct {
    char pergunta[256];
    char opcoes[4][256];
    char resposta;
} Questao;

typedef struct {
    char nome[50];
    int pontuacao;
    double tempoTotal;
} Jogador;

void inicializarQuestoesGerais(Questao questoes[]) {
    strcpy(questoes[0].pergunta, "Qual � o pa�s mais populoso do mundo?");
    strcpy(questoes[0].opcoes[0], "A) �ndia");
    strcpy(questoes[0].opcoes[1], "B) Estados Unidos");
    strcpy(questoes[0].opcoes[2], "C) China");
    strcpy(questoes[0].opcoes[3], "D) Indon�sia");
    questoes[0].resposta = 'C';

    strcpy(questoes[1].pergunta, "Qual � o maior oceano do mundo?");
    strcpy(questoes[1].opcoes[0], "A) Atl�ntico");
    strcpy(questoes[1].opcoes[1], "B) Pac�fico");
    strcpy(questoes[1].opcoes[2], "C) �ndico");
    strcpy(questoes[1].opcoes[3], "D) �rtico");
    questoes[1].resposta = 'B';

    strcpy(questoes[2].pergunta, "Qual � o pa�s conhecido como a Terra do Sol Nascente?");
    strcpy(questoes[2].opcoes[0], "A) Jap�o");
    strcpy(questoes[2].opcoes[1], "B) China");
    strcpy(questoes[2].opcoes[2], "C) Coreia do Sul");
    strcpy(questoes[2].opcoes[3], "D) Tail�ndia");
    questoes[2].resposta = 'A';

    strcpy(questoes[3].pergunta, "Qual � o maior deserto do mundo?");
    strcpy(questoes[3].opcoes[0], "A) Deserto do Saara");
    strcpy(questoes[3].opcoes[1], "B) Deserto da Ant�rtida");
    strcpy(questoes[3].opcoes[2], "C) Deserto do Gobi");
    strcpy(questoes[3].opcoes[3], "D) Deserto da Ar�bia");
    questoes[3].resposta = 'B';

    strcpy(questoes[4].pergunta, "Qual � o rio mais longo do mundo?");
    strcpy(questoes[4].opcoes[0], "A) Rio Nilo");
    strcpy(questoes[4].opcoes[1], "B) Rio Amazonas");
    strcpy(questoes[4].opcoes[2], "C) Rio Yangtz�");
    strcpy(questoes[4].opcoes[3], "D) Rio Mississippi");
    questoes[4].resposta = 'A';

    strcpy(questoes[5].pergunta, "Qual � a capital da Austr�lia?");
    strcpy(questoes[5].opcoes[0], "A) Sydney");
    strcpy(questoes[5].opcoes[1], "B) Melbourne");
    strcpy(questoes[5].opcoes[2], "C) Canberra");
    strcpy(questoes[5].opcoes[3], "D) Perth");
    questoes[5].resposta = 'C';

    strcpy(questoes[6].pergunta, "Qual � a montanha mais alta do mundo?");
    strcpy(questoes[6].opcoes[0], "A) K2");
    strcpy(questoes[6].opcoes[1], "B) Kangchenjunga");
    strcpy(questoes[6].opcoes[2], "C) Lhotse");
    strcpy(questoes[6].opcoes[3], "D) Everest");
    questoes[6].resposta = 'D';

    strcpy(questoes[7].pergunta, "Qual � o maior pa�s em �rea territorial?");
    strcpy(questoes[7].opcoes[0], "A) Canad�");
    strcpy(questoes[7].opcoes[1], "B) Estados Unidos");
    strcpy(questoes[7].opcoes[2], "C) China");
    strcpy(questoes[7].opcoes[3], "D) R�ssia");
    questoes[7].resposta = 'D';

    strcpy(questoes[8].pergunta, "Qual � o idioma mais falado no mundo?");
    strcpy(questoes[8].opcoes[0], "A) Espanhol");
    strcpy(questoes[8].opcoes[1], "B) Ingl�s");
    strcpy(questoes[8].opcoes[2], "C) Mandarim");
    strcpy(questoes[8].opcoes[3], "D) Hindi");
    questoes[8].resposta = 'C';

    strcpy(questoes[9].pergunta, "Qual � a moeda oficial do Jap�o?");
    strcpy(questoes[9].opcoes[0], "A) Yuan");
    strcpy(questoes[9].opcoes[1], "B) Won");
    strcpy(questoes[9].opcoes[2], "C) Yen");
    strcpy(questoes[9].opcoes[3], "D) Ringgit");
    questoes[9].resposta = 'C';
}
void inicializarQuestoesPortugues(Questao questoes[]) {
    strcpy(questoes[0].pergunta, "A palavra 'latif�ndio' est� relacionada com:");
    strcpy(questoes[0].opcoes[0], "A) Produtos de derivados do leite");
    strcpy(questoes[0].opcoes[1], "B) Abrigo para c�es");
    strcpy(questoes[0].opcoes[2], "C) Grande �rea rural");
    strcpy(questoes[0].opcoes[3], "D) Coordenadas geogr�ficas de um local");
    questoes[0].resposta = 'C';

    strcpy(questoes[1].pergunta, "A pessoa que tem resili�ncia � aquela que...");
    strcpy(questoes[1].opcoes[0], "A) Consegue praticar esportes diariamente");
    strcpy(questoes[1].opcoes[1], "B) Reside em uma casa espa�osa");
    strcpy(questoes[1].opcoes[2], "C) N�o tem medo de On�a");
    strcpy(questoes[1].opcoes[3], "D) Consegue se adaptar � m� sorte ou mudan�a");
    questoes[1].resposta = 'D';

    strcpy(questoes[2].pergunta, "Concatenar � o mesmo que...");
    strcpy(questoes[2].opcoes[0], "A) Chorar");
    strcpy(questoes[2].opcoes[1], "B) Unir, ligar");
    strcpy(questoes[2].opcoes[2], "C) Vender Algo");
    strcpy(questoes[2].opcoes[3], "D) Ficar antenado");
    questoes[2].resposta = 'B';

    strcpy(questoes[3].pergunta, "Quantas vogais existem no analfabeto?");
    strcpy(questoes[3].opcoes[0], "A) 8 vogais");
    strcpy(questoes[3].opcoes[1], "B) 4 vogais");
    strcpy(questoes[3].opcoes[2], "C) 5 vogais");
    strcpy(questoes[3].opcoes[3], "D) 6 vogais");
    questoes[3].resposta = 'C';

    strcpy(questoes[4].pergunta, "Estadunidense � aquele que...");
    strcpy(questoes[4].opcoes[0], "A) Nasceu nos Estados Unidos");
    strcpy(questoes[4].opcoes[1], "B) Nasceu no Estado Norte do Brasil");
    strcpy(questoes[4].opcoes[2], "C) Estudou em um Col�gio Estadual");
    strcpy(questoes[4].opcoes[3], "D) Nasceu em Vit�ria (ES)");
    questoes[4].resposta = 'A';

    strcpy(questoes[5].pergunta, "Na frase 'Jo�o passou no concurso' o sujeito �:");
    strcpy(questoes[5].opcoes[0], "A) Concurso");
    strcpy(questoes[5].opcoes[1], "B) Passou");
    strcpy(questoes[5].opcoes[2], "C) Jo�o");
    strcpy(questoes[5].opcoes[3], "D) Estudou");
    questoes[5].resposta = 'C';

    strcpy(questoes[6].pergunta, "Qual o sin�nimo de Fugir:");
    strcpy(questoes[6].opcoes[0], "A) Ajudar");
    strcpy(questoes[6].opcoes[1], "B) Andar");
    strcpy(questoes[6].opcoes[2], "C) Mergulhar");
    strcpy(questoes[6].opcoes[3], "D) Escapar");
    questoes[6].resposta = 'D';

    strcpy(questoes[7].pergunta, "Quais das Palavras abaixo � um verbo:");
    strcpy(questoes[7].opcoes[0], "A) Computador");
    strcpy(questoes[7].opcoes[1], "B) Correr");
    strcpy(questoes[7].opcoes[2], "C) Casaco");
    strcpy(questoes[7].opcoes[3], "D) Tel�o");
    questoes[7].resposta = 'B';

    strcpy(questoes[8].pergunta, "O que � um Verbo?");
    strcpy(questoes[8].opcoes[0], "A) Verbo � um substantivo");
    strcpy(questoes[8].opcoes[1], "B) Verbo � um sin�nimo de Verbalizar");
    strcpy(questoes[8].opcoes[2], "C) Verbo � uma a��o e fen�meno da natureza");
    strcpy(questoes[8].opcoes[3], "D) Verbo � um pronome");
    questoes[8].resposta = 'C';

    strcpy(questoes[9].pergunta, "Qual a Fun��o do oposto na frase: 'Pedro, o professor, chegou cedo?'");
    strcpy(questoes[9].opcoes[0], "A) Especificar");
    strcpy(questoes[9].opcoes[1], "B) Explicar");
    strcpy(questoes[9].opcoes[2], "C) Generalizar");
    strcpy(questoes[9].opcoes[3], "D) Opor");
    questoes[9].resposta = 'A';
}
void inicializarQuestoesMatematica(Questao questoes[]) {
    strcpy(questoes[0].pergunta, "Quantas casas tem a tabuada?");
    strcpy(questoes[0].opcoes[0], "A) 8 Casas");
    strcpy(questoes[0].opcoes[1], "B) 10 Casas");
    strcpy(questoes[0].opcoes[2], "C) 11 Casas");
    strcpy(questoes[0].opcoes[3], "D) 15 Casas");
    questoes[0].resposta = 'B';

    strcpy(questoes[1].pergunta, "Qual o resultado de 7x8?");
    strcpy(questoes[1].opcoes[0], "A) 54");
    strcpy(questoes[1].opcoes[1], "B) 88");
    strcpy(questoes[1].opcoes[2], "C) 50");
    strcpy(questoes[1].opcoes[3], "D) 56");
    questoes[1].resposta = 'D';

    strcpy(questoes[2].pergunta, "Quantos graus tem a soma dos �ngulos internos de um tri�ngulo?");
    strcpy(questoes[2].opcoes[0], "A) 180� Graus");
    strcpy(questoes[2].opcoes[1], "B) 280� Graus");
    strcpy(questoes[2].opcoes[2], "C) 170� Graus");
    strcpy(questoes[2].opcoes[3], "D) 190� Graus");
    questoes[2].resposta = 'A';

    strcpy(questoes[3].pergunta, "Quem inventou o plano cartesiano?");
    strcpy(questoes[3].opcoes[0], "A) Bolsonaro");
    strcpy(questoes[3].opcoes[1], "B) S�crates");
    strcpy(questoes[3].opcoes[2], "C) Ren� Descartes");
    strcpy(questoes[3].opcoes[3], "D) John Cartes");
    questoes[3].resposta = 'C';

    strcpy(questoes[4].pergunta, "Qual � o nome da linha que divide um c�rculo em duas partes iguais?");
    strcpy(questoes[4].opcoes[0], "A) Diagonal");
    strcpy(questoes[4].opcoes[1], "B) Corda");
    strcpy(questoes[4].opcoes[2], "C) Raio");
    strcpy(questoes[4].opcoes[3], "D) Di�metro");
    questoes[4].resposta = 'D';

    strcpy(questoes[5].pergunta, "Qual � o nome da figura geom�trica que tem cinco lados?");
    strcpy(questoes[5].opcoes[0], "A) Quadrado");
    strcpy(questoes[5].opcoes[1], "B) Ret�ngulo");
    strcpy(questoes[5].opcoes[2], "C) Pent�gono");
    strcpy(questoes[5].opcoes[3], "D) Hex�gono");
    questoes[5].resposta = 'C';

    strcpy(questoes[6].pergunta, "Qual o resultado de 10-6x2?");
    strcpy(questoes[6].opcoes[0], "A) -5");
    strcpy(questoes[6].opcoes[1], "B) 12");
    strcpy(questoes[6].opcoes[2], "C) -2");
    strcpy(questoes[6].opcoes[3], "D) -12");
    questoes[6].resposta = 'C';

    strcpy(questoes[7].pergunta, "Qual o resultado de 25 porcento de 80?");
    strcpy(questoes[7].opcoes[0], "A) 30");
    strcpy(questoes[7].opcoes[1], "B) 20");
    strcpy(questoes[7].opcoes[2], "C) 23");
    strcpy(questoes[7].opcoes[3], "D) 20");
    questoes[7].resposta = 'B';

    strcpy(questoes[8].pergunta, "Qual o n�mero que est� faltando na sequ�ncia: 2,4,6,__,10?");
    strcpy(questoes[8].opcoes[0], "A) 5");
    strcpy(questoes[8].opcoes[1], "B) 8");
    strcpy(questoes[8].opcoes[2], "C) 10");
    strcpy(questoes[8].opcoes[3], "D) 12");
    questoes[8].resposta = 'B';

    strcpy(questoes[9].pergunta, "Qual o resultado da express�o (7-3)x2+5?");
    strcpy(questoes[9].opcoes[0], "A) 9");
    strcpy(questoes[9].opcoes[1], "B) 12");
    strcpy(questoes[9].opcoes[2], "C) 13");
    strcpy(questoes[9].opcoes[3], "D) 18");
    questoes[9].resposta = 'C';
}
void inicializarQuestoesGeografia(Questao questoes[]) {
    strcpy(questoes[0].pergunta, "Quantos Estados tem o Brasil?");
    strcpy(questoes[0].opcoes[0], "A) 21 Estados e 1 Distrito Federal");
    strcpy(questoes[0].opcoes[1], "B) 26 Estados e 1 Distrito Federal");
    strcpy(questoes[0].opcoes[2], "C) 24 Estados e 1 Distrito Federal");
    strcpy(questoes[0].opcoes[3], "D) 23 Estados e 1 Distrito Federal");
    questoes[0].resposta = 'B';

    strcpy(questoes[1].pergunta, "Qual o Maior Pa�s do Mundo?");
    strcpy(questoes[1].opcoes[0], "A) Coreia do Sul");
    strcpy(questoes[1].opcoes[1], "B) China");
    strcpy(questoes[1].opcoes[2], "C) Jap�o");
    strcpy(questoes[1].opcoes[3], "D) R�ssia");
    questoes[1].resposta = 'D';

    strcpy(questoes[2].pergunta, "Qual o Menor Pa�s do Mundo?");
    strcpy(questoes[2].opcoes[0], "A) Egito");
    strcpy(questoes[2].opcoes[1], "B) Guatemala");
    strcpy(questoes[2].opcoes[2], "C) Vaticano");
    strcpy(questoes[2].opcoes[3], "D) Bol�via");
    questoes[2].resposta = 'C';

    strcpy(questoes[3].pergunta, "Existem Quantos Continentes?");
    strcpy(questoes[3].opcoes[0], "A) 5");
    strcpy(questoes[3].opcoes[1], "B) 6");
    strcpy(questoes[3].opcoes[2], "C) 4");
    strcpy(questoes[3].opcoes[3], "D) 7");
    questoes[3].resposta = 'D';

    strcpy(questoes[4].pergunta, "Qual o Continente mais populoso?");
    strcpy(questoes[4].opcoes[0], "A) �frica");
    strcpy(questoes[4].opcoes[1], "B) �sia");
    strcpy(questoes[4].opcoes[2], "C) Ant�rtica");
    strcpy(questoes[4].opcoes[3], "D) Europa");
    questoes[4].resposta = 'B';

    strcpy(questoes[5].pergunta, "Qual o maior Rio do Brasil?");
    strcpy(questoes[5].opcoes[0], "A) S�o Francisco");
    strcpy(questoes[5].opcoes[1], "B) Tapaj�s");
    strcpy(questoes[5].opcoes[2], "C) Amazonas");
    strcpy(questoes[5].opcoes[3], "D) Araguaia");
    questoes[5].resposta = 'C';

    strcpy(questoes[6].pergunta, "Qual o Pa�s com maior quantidade de ilhas?");
    strcpy(questoes[6].opcoes[0], "A) Tail�ndia");
    strcpy(questoes[6].opcoes[1], "B) Indon�sia");
    strcpy(questoes[6].opcoes[2], "C) Jap�o");
    strcpy(questoes[6].opcoes[3], "D) Costa Rica");
    questoes[6].resposta = 'B';

    strcpy(questoes[7].pergunta, "Qual a montanha mais alta do mundo?");
    strcpy(questoes[7].opcoes[0], "A) K2");
    strcpy(questoes[7].opcoes[1], "B) Monte Kilimanjaro");
    strcpy(questoes[7].opcoes[2], "C) Monte Everest");
    strcpy(questoes[7].opcoes[3], "D) Mont Blanc");
    questoes[7].resposta = 'C';

    strcpy(questoes[8].pergunta, "Qual oceano fica entre a �frica e a Am�rica do Sul?");
    strcpy(questoes[8].opcoes[0], "A) Oceano Atl�ntico");
    strcpy(questoes[8].opcoes[1], "B) Oceano Pac�fico");
    strcpy(questoes[8].opcoes[2], "C) Oceano �rtico");
    strcpy(questoes[8].opcoes[3], "D) Oceano �ndico");
    questoes[8].resposta = 'A';

    strcpy(questoes[9].pergunta, "Qual rio � considerado o mais longo do mundo?");
    strcpy(questoes[9].opcoes[0], "A) Rio Araguaia");
    strcpy(questoes[9].opcoes[1], "B) Rio Nilo");
    strcpy(questoes[9].opcoes[2], "C) Rio Amazonas");
    strcpy(questoes[9].opcoes[3], "D) Rio Mississippi");
    questoes[9].resposta = 'B';
}
void inicializarQuestoesHistoria(Questao questoes[]) {
    strcpy(questoes[0].pergunta, "Em que ano ocorreu a proclama��o da Rep�blica do Brasil?");
    strcpy(questoes[0].opcoes[0], "A) 1889");
    strcpy(questoes[0].opcoes[1], "B) 1887");
    strcpy(questoes[0].opcoes[2], "C) 1890");
    strcpy(questoes[0].opcoes[3], "D) 1888");
    questoes[0].resposta = 'A';

    strcpy(questoes[1].pergunta, "Quem foi o primeiro imperador do Brasil?");
    strcpy(questoes[1].opcoes[0], "A) Pedro I");
    strcpy(questoes[1].opcoes[1], "B) Pedro II");
    strcpy(questoes[1].opcoes[2], "C) Get�lio Vargas");
    strcpy(questoes[1].opcoes[3], "D) Dom Jo�o VI");
    questoes[1].resposta = 'A';

    strcpy(questoes[2].pergunta, "Em que ano ocorreu a primeira guerra mundial?");
    strcpy(questoes[2].opcoes[0], "A) 1937");
    strcpy(questoes[2].opcoes[1], "B) 1940");
    strcpy(questoes[2].opcoes[2], "C) 1939");
    strcpy(questoes[2].opcoes[3], "D) 1935");
    questoes[2].resposta = 'C';

    strcpy(questoes[3].pergunta, "Em que ano ocorreu a guerra fria?");
    strcpy(questoes[3].opcoes[0], "A) 1940");
    strcpy(questoes[3].opcoes[1], "B) 1948");
    strcpy(questoes[3].opcoes[2], "C) 1950");
    strcpy(questoes[3].opcoes[3], "D) 1947");
    questoes[3].resposta = 'D';

    strcpy(questoes[4].pergunta, "Quem foi o respons�vel pela descoberta do Brasil em 1500?");
    strcpy(questoes[4].opcoes[0], "A) Crist�v�o Colombo");
    strcpy(questoes[4].opcoes[1], "B) Vasco da Gama");
    strcpy(questoes[4].opcoes[2], "C) Am�rico Vesp�cio");
    strcpy(questoes[4].opcoes[3], "D) Pedro �lvares Cabral");
    questoes[4].resposta = 'D';

    strcpy(questoes[5].pergunta, "Qual pa�s foi liderado por Adolf Hitler durante a segunda guerra mundial?");
    strcpy(questoes[5].opcoes[0], "A) It�lia");
    strcpy(questoes[5].opcoes[1], "B) Fran�a");
    strcpy(questoes[5].opcoes[2], "C) Alemanha");
    strcpy(questoes[5].opcoes[3], "D) Jap�o");
    questoes[5].resposta = 'C';

    strcpy(questoes[6].pergunta, "Qual pa�s teve uma revolu��o em 1789 que influenciou o mundo?");
    strcpy(questoes[6].opcoes[0], "A) R�ssia");
    strcpy(questoes[6].opcoes[1], "B) Estados Unidos");
    strcpy(questoes[6].opcoes[2], "C) Brasil");
    strcpy(questoes[6].opcoes[3], "D) Fran�a");
    questoes[6].resposta = 'D';

    strcpy(questoes[7].pergunta, "Quem foi o primeiro presidente do Brasil?");
    strcpy(questoes[7].opcoes[0], "A) Deodoro da Fonseca");
    strcpy(questoes[7].opcoes[1], "B) Marechal Floriano");
    strcpy(questoes[7].opcoes[2], "C) Juscelino Kubitschek");
    strcpy(questoes[7].opcoes[3], "D) Get�lio Vargas");
    questoes[7].resposta = 'A';

    strcpy(questoes[8].pergunta, "A guerra fria foi uma disputa entre quais pa�ses?");
    strcpy(questoes[8].opcoes[0], "A) Fran�a e Alemanha");
    strcpy(questoes[8].opcoes[1], "B) Estados Unidos e Uni�o Sovi�tica");
    strcpy(questoes[8].opcoes[2], "C) Inglaterra e Jap�o");
    strcpy(questoes[8].opcoes[3], "D) China e �ndia");
    questoes[8].resposta = 'B';

    strcpy(questoes[9].pergunta, "Em que ano aconteceu a Revolu��o Russa, que levou � cria��o da Uni�o Sovi�tica?");
    strcpy(questoes[9].opcoes[0], "A) 1917");
    strcpy(questoes[9].opcoes[1], "B) 1918");
    strcpy(questoes[9].opcoes[2], "C) 1945");
    strcpy(questoes[9].opcoes[3], "D) 1930");
    questoes[9].resposta = 'A';
}

void jogar(Questao questoes[], Jogador *jogador) {
    int pontuacao = 0;
    char resposta;
    double tempoTotal = 0;
    clock_t inicio, fim;

    for (int i = 0; i < MAX_QUESTOES; i++) {
        system("cls");
        printf("%s\n", questoes[i].pergunta);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", questoes[i].opcoes[j]);
        }
        printf("Sua resposta: ");

        inicio = clock();
        scanf(" %c", &resposta);
        fim = clock();

        double tempoResposta = (double)(fim - inicio) / CLOCKS_PER_SEC;
        tempoTotal += tempoResposta;

        if (tempoResposta <= 5) {
            if (resposta == questoes[i].resposta) {
                printf("Correto!\n");
                pontuacao++;
            } else {
                printf("Errado!\n", questoes[i].resposta);
            }
            printf("Tempo de resposta: %.2f segundos\n\n", tempoResposta);
        } else {
            printf("Anulada! Voc� demorou a responder! Tempo de resposta: %.2f segundos\n\n", tempoResposta);
        }
        printf("Pr�xima pergunta em 3 segundos\n\n");
        sleep(3);
    }

    jogador->pontuacao = pontuacao;
    jogador->tempoTotal = tempoTotal;
}

int compararJogadores(const void *a, const void *b) {
    Jogador *jogadorA = (Jogador *)a;
    Jogador *jogadorB = (Jogador *)b;

    if (jogadorA->pontuacao != jogadorB->pontuacao) {
        return jogadorB->pontuacao - jogadorA->pontuacao;
    } else {
        return (jogadorA->tempoTotal > jogadorB->tempoTotal) - (jogadorA->tempoTotal < jogadorB->tempoTotal);
    }
}

void mostrarRanking(Jogador jogadores[], int totalJogadores) {
    qsort(jogadores, totalJogadores, sizeof(Jogador), compararJogadores);
    printf("*******************************************************\n");
    printf("**                     Ranking                       **\n");
    printf("*******************************************************\n");
    for (int i = 0; i < totalJogadores; i++) {
        printf("%d� %s - %d pontos - Tempo total: %.2f segundos\n",
               i + 1, jogadores[i].nome, jogadores[i].pontuacao, jogadores[i].tempoTotal);
    }
}

int main() {
    setlocale(LC_ALL,"");
    Questao questoes[MAX_QUESTOES];
        

    Jogador jogadores[100];
    int totalJogadores = 0;
    char jogarNovamente;
    do{
        
        int opc =0;
        printf("--------------------------------------------------\n");
        printf("\tBem-vindo ao Jogo do Milh�o!\t\t\n");
        printf("--------------------------------------------------\n");
        printf("[1] - Iniciar\n");
        printf("[2] - Ranking\n");
        printf("[3] - Fechar Sistema\n");
        printf("Escolha uma op��o: \n");
        scanf("%d",&opc);
        system("cls");
        switch(opc){
            case 1:
                printf("Digite seu nome: ");
                scanf("%s", jogadores[totalJogadores].nome);
               
                printf("Escolha o tema que voc� deseja:\n");
                printf("[1] - Geral\n");
                printf("[2] - Portugu�s\n");
                printf("[3] - Matem�tica\n");
                printf("[4] - Geografia\n");
                printf("[5] - Hist�ria\n");
                printf("[6] - Voltar\n");
                printf("Escolha a op��o desejada: \n");
                scanf("%d",&opc);
                system("cls");
                switch (opc)
                {
                    case 1:
                        inicializarQuestoesGerais(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
       					totalJogadores++;
                        break;
                    case 2:
                        inicializarQuestoesPortugues(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
       					totalJogadores++;
                        break;
                    case 3:
                        inicializarQuestoesMatematica(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
       					totalJogadores++;
                        break;
                    case 4:
                        inicializarQuestoesGeografia(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
       					totalJogadores++;
                        break;
                    case 5:
                        inicializarQuestoesHistoria(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
       					totalJogadores++;
                        break;
                    default:
                        inicializarQuestoesGerais(questoes);
                        jogar(questoes, &jogadores[totalJogadores]);
        				totalJogadores++;
                        break;
                }
                system("cls");
                printf("*******************************************************\n");
                printf("**                    PONTUA��O                      **\n");
                printf("*******************************************************\n");
                printf("Nome: %s\nPontua��o: %d\nTempo: %.2f\n", jogadores[totalJogadores - 1].nome, jogadores[totalJogadores - 1].pontuacao, jogadores[totalJogadores - 1].tempoTotal);
                break;
            case 2:
            	mostrarRanking(jogadores, totalJogadores);
            	system("pause");
                break;
        }
       
        system("cls");
        printf("Reniciando Sistema... ");
        sleep(10);
        system("cls");
        jogarNovamente = 's';
    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    mostrarRanking(jogadores, totalJogadores);
    return 0;
}
