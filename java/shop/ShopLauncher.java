package shop;

public class ShopLauncher {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		Ishop shop=new MyShop();
		shop.setTitle("MyShop");
		shop.genProduct();
		shop.genUser();
		shop.start();
	}

}
