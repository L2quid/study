package shop;

public class SmartTV extends product{
	String resolutuion;
	public SmartTV(String pname, int price, String resolutuion) {
		this.pname=pname;
		this.price=price;
		this.resolutuion=resolutuion;
	}
	@Override
	public void printExtra() {
		// TODO �ڵ� ������ �޼ҵ� ����
		System.out.println(", �ػ� "+resolutuion);
	}
 
}
