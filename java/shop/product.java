package shop;

public abstract class product {
	String pname;
	int price;
	public void printDetail() {
		System.out.print("��ǰ�� "+pname+", ");
		System.out.print("���� "+price);
		printExtra();
	}
	public abstract void printExtra();
}