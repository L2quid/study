package server;
import java.io.*;
import java.net.*;

public class server {

	public static void main(String[] args) {
		try {
			ServerSocket sc = new ServerSocket(5000);
			System.out.println("## ���� ���� ");
			while(true) {
				Socket s = sc.accept();
				// �޽��� �Է� �ޱ�
				BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
				String msg =br.readLine();
				//���� key���� 1�϶� ���� ���� �޽��� ���
				String key=br.readLine();
				if (key.equals("1")) {System.out.println("## Ŭ���̾�Ʈ �����");}
				System.out.println(msg);	
				br.close();
				s.close();
			}
			
			}
		catch(Exception e) {
			e.printStackTrace();
		}
	}

}
