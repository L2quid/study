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
		// TODO 자동 생성된 메소드 스텁
		System.out.println(", 통신사 "+carrier);
	}

}
