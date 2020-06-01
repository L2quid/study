package server;
import java.io.*;
import java.net.*;

public class server {

	public static void main(String[] args) {
		try {
			ServerSocket sc = new ServerSocket(5000);
			System.out.println("## 서버 실행 ");
			while(true) {
				Socket s = sc.accept();
				// 메시지 입력 받기
				BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
				String msg =br.readLine();
				//받은 key값이 1일때 최초 연결 메시지 출력
				String key=br.readLine();
				if (key.equals("1")) {System.out.println("## 클라이언트 연결됨");}
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
