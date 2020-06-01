package gui;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.script.*;


public class calc extends JFrame {
	JFrame frame = new JFrame("calculater-1624044");
	Container contentPane = frame.getContentPane();
	GridLayout layout = new GridLayout(4,4);
	JPanel panel = new JPanel();
	JLabel label = new JLabel(" ",SwingConstants.RIGHT); //������ ����
	//��ư ����
	JButton div = new JButton("/");
	JButton mul = new JButton("*");
	JButton sub = new JButton("-");
	JButton add = new JButton("+");
	JButton AC = new JButton("AC");
	JButton b0 = new JButton("0");
	JButton b1 = new JButton("1");
	JButton b2 = new JButton("2");
	JButton b3 = new JButton("3");
	JButton b4 = new JButton("4");
	JButton b5 = new JButton("5");
	JButton b6 = new JButton("6");
	JButton b7 = new JButton("7");
	JButton b8 = new JButton("8");
	JButton b9 = new JButton("9");
	JButton equal = new JButton("=");
	//������ 
		public calc() {
			
			frame.setPreferredSize(new Dimension(300,400));
			label.setFont(new Font("San-Serif", Font.BOLD, 40));
			contentPane.add(panel);
			panel.setLayout(layout);
			contentPane.add(label, BorderLayout.NORTH);
			JButton fnlist[]= {add,sub,mul,AC,equal,div};
			JButton numlist[]= {b7,b8,b9,b4,b5,b6,b1,b2,b3,b0};
			JButton list[] = {b7,b8,b9,add,b4,b5,b6,sub,b1,b2,b3,mul,b0,AC,equal,div};
			for (JButton c: list) {
				click(c); // Ŭ�� �̺�Ʈ ���
				panel.add(c); //��ο� ��ư �߰�
				c.setFont(new Font("San-Serif", Font.BOLD, 20));
			}
			//��ɹ�ư �� ����
			for (JButton c: fnlist) {
				c.setBackground(Color.GRAY);
			}
			//���ڹ�ư �� ����
			for (JButton c: numlist) {
				c.setBackground(Color.WHITE);
			}
		
			
			contentPane.add(panel,BorderLayout.CENTER);
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.pack();
			frame.setVisible(true);
		}
		//�̺�Ʈ ������ ��� �޼���
		private void click(JButton c) {
			c.addActionListener(new ActionListener() {
		        public void actionPerformed(ActionEvent e) {
		        	// Ŭ���� ��ư�� ' = '�ϰ�� ��� 
		        	if(c.getText().contentEquals("=")) {
		        		ScriptEngineManager manager = new ScriptEngineManager();
		        	    ScriptEngine engine = manager.getEngineByName("JavaScript");
		        	    String result = label.getText();
		        	    try {
		        	    	//���ڿ� ������ ������ִ� �޼���
		        	    	result=String.valueOf(engine.eval(result));
		        	    	//���� ���� ���ڿ��� label�� ����
							label.setText(result);
						} catch (ScriptException e1) {
							e1.printStackTrace();
						}
		        	}
		        	// Ŭ���� ��ư�� ' AC '�ϰ�� �ʱ�ȭ 
		        	else if(c.getText().contentEquals("AC")) {
		        		label.setText(" ");
		        	}
		        	// Ŭ���� ��ư�� String�� label���� �߰� 
		        	else {
		        	String value = label.getText();
		        	value+=c.getText();
		        	label.setText(value);
		        	}
		        }
		    });
		}
		
		public static void main(String[] args) {
			calc app = new calc();
		}
	}
