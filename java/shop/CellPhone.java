package shop;

public class CellPhone extends product{
	String carrier;
	
	public CellPhone(String pname, int price, String carrier) {
		this.pname=pname;
		this.price=price;
		this.carrier=carrier;
	}
	@Override
	public void printExtra() {
		// TODO �ڵ� ������ �޼ҵ� ����
		System.out.println(", ��Ż� "+carrier);
	}

}
