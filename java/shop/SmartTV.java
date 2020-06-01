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
		// TODO 자동 생성된 메소드 스텁
		System.out.println(", 해상도 "+resolutuion);
	}
 
}
