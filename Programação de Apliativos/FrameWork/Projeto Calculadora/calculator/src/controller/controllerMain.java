package controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

public class controllerMain {
	
	String lcdValue = "";
	String slcdValue = ""; 
	char operacao = 'n';
	float pValue, sValue, result;
	
    @FXML
    private Button bt0;

    @FXML
    private Button bt1;

    @FXML
    private Button bt2;

    @FXML
    private Button bt3;

    @FXML
    private Button bt4;

    @FXML
    private Button bt5;

    @FXML
    private Button bt6;

    @FXML
    private Button bt7;

    @FXML
    private Button btDel;

    @FXML
    private Button bt8;

    @FXML
    private Button bt9;
    
    @FXML
    private Button btDivisao;

    @FXML
    private Button btMultiplicacao;

    @FXML
    private Button btSoma;

    @FXML
    private Button btSubtracao;
    
    
    @FXML
    private Button btResultado;

    @FXML
    private Label lcd;

    @FXML
    void act0(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "0");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "0");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act1(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "1");
    	
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "0");
    	}
    	lcd.setText(lcdValue);
    	

    }
    
    @FXML
    void act2(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "2");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "2");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act3(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "3");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "3");
    	}
    	lcd.setText(lcdValue);

    }

    @FXML
    void act4(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "4");

    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "4");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act5(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "5");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "5");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act6(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "6");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "6");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act7(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "7");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "7");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act8(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "8");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "8");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void act9(ActionEvent event) {
    	lcdValue = String.format("%s", lcdValue + "9");
    	
    	if(operacao != 'n') {
    		slcdValue = String.format("%s", slcdValue + "9");
    	}
    	lcd.setText(lcdValue);
    }

    @FXML
    void actDel(ActionEvent event) {
    	lcdValue = "";
    	slcdValue = "";
    	operacao = 'n';
    	lcd.setText(lcdValue);
    }
    @FXML
    void actDivisao(ActionEvent event) {
    	pValue = Float.parseFloat(lcdValue);
    	operacao = '/';
    	
    	lcdValue = String.format("%s", lcdValue + "÷");
    	
    	lcd.setText(lcdValue);
    }

    @FXML
    void actMultiplicacao(ActionEvent event) {
    	pValue = Float.parseFloat(lcdValue);
    	operacao = 'x';
    	
    	
    	lcdValue = String.format("%s", lcdValue + "x");
    	lcd.setText(lcdValue);
    }

    @FXML
    void actSoma(ActionEvent event) {
    	pValue = Float.parseFloat(lcdValue);
    	operacao = '+';
    	
    	
    	lcdValue = String.format("%s", lcdValue + "+");
    	lcd.setText(lcdValue);
    }

    @FXML
    void actSubtracao(ActionEvent event) {
    	pValue = Float.parseFloat(lcdValue);
    	operacao = '-';
    	
    	
    	lcdValue = String.format("%s", lcdValue + "-");
    	lcd.setText(lcdValue);
    }
    @FXML
    void actResultado(ActionEvent event) {
    	sValue = Float.parseFloat(slcdValue);
    	if(operacao == '+') {
    		result = pValue + sValue;
    	} else if(operacao == '/') {
    		result = pValue / sValue;
    	} else if(operacao == 'x') {
    		result = pValue * sValue;
    	} else if(operacao == '-') {
    		result = pValue - sValue;
    	}
    	float parteDecimal = result - (int) result;
    	
    	
    	if(parteDecimal > 0.0) {
    		lcdValue = String.format("%.02f", result);
    	} else {
    		int v = (int) result;
    		lcdValue = String.format("%d", v);
    	}
    	
    	lcd.setText(lcdValue);
    }


}
