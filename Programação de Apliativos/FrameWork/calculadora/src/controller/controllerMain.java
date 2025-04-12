package controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.text.Text;

public class controllerMain {

	double n = 0, nn = 0, r = 0;
	
	
    @FXML
    private Button btndiv;

    @FXML
    private Button btnmut;

    @FXML
    private Button btnsoma;

    @FXML
    private Button btnsub;

    @FXML
    private TextField inputN1;

    @FXML
    private TextField inputN2;
    
    @FXML
    private Text lebal1;

    
    @FXML
    void btdiv(ActionEvent event) {
    	n = Double.parseDouble(inputN1.getText());
    	nn = Double.parseDouble(inputN2.getText());
    	r = n / nn;
    	String rr = Double.toString(r);

    	lebal1.setVisible(true);
    	lebal1.setText(rr);
    }

    @FXML
    void btmut(ActionEvent event) {
    	n = Double.parseDouble(inputN1.getText());
    	nn = Double.parseDouble(inputN2.getText());
    	r = n * nn;
    	String rr = Double.toString(r);

    	lebal1.setVisible(true);
    	lebal1.setText(rr);
    }

    @FXML
    void btsoma(ActionEvent event) {
    	n = Double.parseDouble(inputN1.getText());
    	nn = Double.parseDouble(inputN2.getText());
    	r = n + nn;
    	String rr = Double.toString(r);

    	lebal1.setVisible(true);
    	lebal1.setText(rr);
    	
    }

    @FXML
    void btsub(ActionEvent event) {
    	n = Double.parseDouble(inputN1.getText());
    	nn = Double.parseDouble(inputN2.getText());
    	r = n - nn;
    	
    	
    	String rr = Double.toString(r);
 
    	lebal1.setVisible(true);
    	lebal1.setText(rr);
    }
    
    

}
