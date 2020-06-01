package gui;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class CtoF extends JFrame{
		Label l1 = new Label("¼·¾¾ (¨¬C)");
		Label l2 = new Label("È­¾¾ (¨¬F)");
		TextField t1 = new TextField();
		TextField t2 = new TextField();
		JButton button1 = new JButton("¼·¾¾ -> È­¾¾");
		JButton button2 = new JButton("È­¾¾ -> ¼·¾¾");
		Panel p1= new Panel();
		public void Grid() {
			p1.setLayout(new GridLayout(3,2));
			p1.add(l1);
			p1.add(l2);
			p1.add(t1);
			p1.add(t2);
			button1.addActionListener(new ActionListener() {
		        public void actionPerformed(ActionEvent e) {
		        	double a = Double.parseDouble(t1.getText());
		        	a=a*1.8+32;
		        	String s=String.valueOf(a);
		        	t2.setText(s);
		        }
		    });
			button2.addActionListener(new ActionListener() {
		        public void actionPerformed(ActionEvent e) {
		        	double a = Double.parseDouble(t2.getText());
		        	a=(a-32)*5/9;
		        	String s=String.valueOf(a);
		        	t1.setText(s);
		        }
		    });
			p1.add(button1);
			p1.add(button2);
		}
		public CtoF() {
			super("C to F // F to C");
			getContentPane().add(p1);
			Grid();
			setDefaultCloseOperation(EXIT_ON_CLOSE);
			setSize(300,200);
			setVisible(true);
		}

	
	public static void main(String[] args) {
		CtoF app = new CtoF();
	}
}
