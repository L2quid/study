package shop;

public class ShopLauncher {

	public static void main(String[] args) {
		// TODO �ڵ� ������ �޼ҵ� ����
		Ishop shop=new MyShop();
		shop.setTitle("MyShop");
		shop.genProduct();
		shop.genUser();
		shop.start();
	}

}
