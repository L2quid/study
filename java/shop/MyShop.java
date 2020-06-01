package shop;

import java.util.ArrayList;
import java.util.Scanner;

public class MyShop implements Ishop {

	User[] Users = new User[2];
	product[] products = new product[4];
	
	ArrayList<product> cart= new ArrayList<product>();
	
	Scanner Scan = new Scanner(System.in);
	
	int selUser;
	String title;
	
	@Override
	public void setTitle(String title) {
		// TODO 자동 생성된 메소드 스텁

	}

	@Override
	public void genUser() {
		// TODO 자동 생성된 메소드 스텁
		User user= new User("홍길동",PayType.CARD);
		Users[0]=user;
		user= new User("블로거",PayType.CASH);
		Users[1]=user;
	}

	@Override
	public void genProduct() {
		// TODO 자동 생성된 메소드 스텁
		CellPhone cp=new CellPhone("갤럭시 S20",1000000,"SKT");
		products[0]=cp;
		cp=new CellPhone("아이폰XS",980000,"KT");
		products[1]=cp;
		SmartTV st = new SmartTV("삼성 3D Smart TV",5000000,"4K");
		products[2]=st;
		st = new SmartTV("LG Smart TV",2500000,"FULL HD");
		products[3]=st;
	}

	@Override
	public void start() {
		// TODO 자동 생성된 메소드 스텁
		System.out.println(title+ ": 메인화면 - 계정선택");
		System.out.println("===========================");
		int i =0;
		
		for(User u : Users) {
			System.out.printf("{%d}%s(%s)\n",i++,u.getUser(),u.getPaytype());
		}
		System.out.println("[x]종료");
		System.out.println("선택 : ");
		String sel = Scan.next();
		System.out.println("##" + sel + "선택 ##");
		switch(sel) {
		case "x": System.exit(0);break;
		default:
			selUser = Integer.parseInt(sel);
			productList();
		}
	}

	public void productList() {
		// TODO 자동 생성된 메소드 스텁
		System.out.println(title+ ": 산품 목록 - 상품 선택");
		System.out.println("===========================");
		int i =0;
		for(product p : products) {
			System.out.print("["+i+"]");
			p.printDetail();
			i++;
		}
		System.out.println("[h]메인화면");
		System.out.println("[c]체크아웃");
		System.out.print("선택 : ");
		String sel = Scan.next();
		System.out.println("##" + sel + "선택 ##");
		switch(sel) {
		case "h": start();break;
		case "c": checkOut();break;
		default:
			int psel = Integer.parseInt(sel);
			cart.add(products[psel]);
			productList();
		}
	}

	public void checkOut() {
		// TODO 자동 생성된 메소드 스텁
		System.out.println(title + ": 체크아웃");
		System.out.println("===========================");
		int i =0;
		int total = 0;
		
		for(product p : cart) {
			System.out.printf("[%d] %s (%s원)\n",i++,p.pname,p.price);
			total+=p.price;
		}
		System.out.println("===========================");
		System.out.println("결제방법: "+Users[selUser].getPaytype());
		
		System.out.println("합계"+total +"원 입니다.");
		System.out.println("[p]이전 , [q]결제 완료");
		System.out.print("선택 : ");
		String sel = Scan.next();
		switch(sel) {
		case "q": 
			System.out.println("#결제가 완료 되었습니다. 종료합니다. #");
			System.exit(0);break;
		case "p": productList();break;
		default:
			checkOut();
		}
		
	}
	
}
