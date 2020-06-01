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
	JLabel label = new JLabel(" ",SwingConstants.RIGHT); //오른쪽 정렬
	//버튼 생성
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
	//생성자 
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
				click(c); // 클릭 이벤트 등록
				panel.add(c); //페널에 버튼 추가
				c.setFont(new Font("San-Serif", Font.BOLD, 20));
			}
			//기능버튼 색 설정
			for (JButton c: fnlist) {
				c.setBackground(Color.GRAY);
			}
			//숫자버튼 색 설정
			for (JButton c: numlist) {
				c.setBackground(Color.WHITE);
			}
		
			
			contentPane.add(panel,BorderLayout.CENTER);
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.pack();
			frame.setVisible(true);
		}
		//이벤트 리스너 등록 메서드
		private void click(JButton c) {
			c.addActionListener(new ActionListener() {
		        public void actionPerformed(ActionEvent e) {
		        	// 클릭한 버튼이 ' = '일경우 계산 
		        	if(c.getText().contentEquals("=")) {
		        		ScriptEngineManager manager = new ScriptEngineManager();
		        	    ScriptEngine engine = manager.getEngineByName("JavaScript");
		        	    String result = label.getText();
		        	    try {
		        	    	//문자열 수식을 계산해주는 메서드
		        	    	result=String.valueOf(engine.eval(result));
		        	    	//계산된 값을 문자열로 label에 설정
							label.setText(result);
						} catch (ScriptException e1) {
							e1.printStackTrace();
						}
		        	}
		        	// 클릭한 버튼이 ' AC '일경우 초기화 
		        	else if(c.getText().contentEquals("AC")) {
		        		label.setText(" ");
		        	}
		        	// 클릭한 버튼의 String을 label끝에 추가 
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
