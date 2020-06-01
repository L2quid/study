package shop;

public abstract class product {
	String pname;
	int price;
	public void printDetail() {
		System.out.print("상품명 "+pname+", ");
		System.out.print("가격 "+price);
		printExtra();
	}
	public abstract void printExtra();
}