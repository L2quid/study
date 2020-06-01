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
		// TODO �ڵ� ������ �޼ҵ� ����

	}

	@Override
	public void genUser() {
		// TODO �ڵ� ������ �޼ҵ� ����
		User user= new User("ȫ�浿",PayType.CARD);
		Users[0]=user;
		user= new User("��ΰ�",PayType.CASH);
		Users[1]=user;
	}

	@Override
	public void genProduct() {
		// TODO �ڵ� ������ �޼ҵ� ����
		CellPhone cp=new CellPhone("������ S20",1000000,"SKT");
		products[0]=cp;
		cp=new CellPhone("������XS",980000,"KT");
		products[1]=cp;
		SmartTV st = new SmartTV("�Ｚ 3D Smart TV",5000000,"4K");
		products[2]=st;
		st = new SmartTV("LG Smart TV",2500000,"FULL HD");
		products[3]=st;
	}

	@Override
	public void start() {
		// TODO �ڵ� ������ �޼ҵ� ����
		System.out.println(title+ ": ����ȭ�� - ��������");
		System.out.println("===========================");
		int i =0;
		
		for(User u : Users) {
			System.out.printf("{%d}%s(%s)\n",i++,u.getUser(),u.getPaytype());
		}
		System.out.println("[x]����");
		System.out.println("���� : ");
		String sel = Scan.next();
		System.out.println("##" + sel + "���� ##");
		switch(sel) {
		case "x": System.exit(0);break;
		default:
			selUser = Integer.parseInt(sel);
			productList();
		}
	}

	public void productList() {
		// TODO �ڵ� ������ �޼ҵ� ����
		System.out.println(title+ ": ��ǰ ��� - ��ǰ ����");
		System.out.println("===========================");
		int i =0;
		for(product p : products) {
			System.out.print("["+i+"]");
			p.printDetail();
			i++;
		}
		System.out.println("[h]����ȭ��");
		System.out.println("[c]üũ�ƿ�");
		System.out.print("���� : ");
		String sel = Scan.next();
		System.out.println("##" + sel + "���� ##");
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
		// TODO �ڵ� ������ �޼ҵ� ����
		System.out.println(title + ": üũ�ƿ�");
		System.out.println("===========================");
		int i =0;
		int total = 0;
		
		for(product p : cart) {
			System.out.printf("[%d] %s (%s��)\n",i++,p.pname,p.price);
			total+=p.price;
		}
		System.out.println("===========================");
		System.out.println("�������: "+Users[selUser].getPaytype());
		
		System.out.println("�հ�"+total +"�� �Դϴ�.");
		System.out.println("[p]���� , [q]���� �Ϸ�");
		System.out.print("���� : ");
		String sel = Scan.next();
		switch(sel) {
		case "q": 
			System.out.println("#������ �Ϸ� �Ǿ����ϴ�. �����մϴ�. #");
			System.exit(0);break;
		case "p": productList();break;
		default:
			checkOut();
		}
		
	}
	
}
