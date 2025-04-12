package controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class controllerMain {
	int tent = 3;
    @FXML
    private Button btnteste;
    

    @FXML
    private TextField input;
    
    int random = (int) (Math.random()*10) +1;
    
    @FXML
    
    void Actionbtn(ActionEvent event) {
    	
    	
    	int palpite = Integer.parseInt(input.getText());
    	Alert mensagem = new Alert(AlertType.INFORMATION);
    	tent --;
    	if(tent == 0) {
    		mensagem.setTitle("Ação do botão");
        	mensagem.setHeaderText("Fim de jogo");
        	mensagem.setContentText("");
        	mensagem.show();
    	}else if(palpite == random) {
    		mensagem.setTitle("Ação do botão");
        	mensagem.setHeaderText("Parabéns");
        	mensagem.setContentText("");
        	mensagem.show();
    	} else {
    		mensagem.setTitle("Ação do botão");
        	mensagem.setHeaderText("Que pana");
        	mensagem.setContentText("");
        	mensagem.show();
    	}
    	
    	
    
    	
    }

}
