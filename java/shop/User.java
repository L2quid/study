package shop;

public class User {
	private String name;
	private PayType paytype;
	public User(String name,PayType paytype) {
		this.name=name;
		this.paytype=paytype;
	}
	public String getUser() {
		return name;
	}
	public void setUser(String name) {
		this.name = name;
	}
	public PayType getPaytype() {
		return paytype;
	}
	public void setPaytype(PayType paytype) {
		this.paytype = paytype;
	}
}
