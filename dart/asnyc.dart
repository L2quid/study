
main() async {
  //await을 만나기전에는 동기적으로 실행
  countSeconds(4);
  await createOrderMessage();
}
void countSeconds(s) {
  for( var i = 1 ; i <= s; i++ ) { 
      Future.delayed(Duration(seconds: i), () => print(i));
  }
}

Future<void> createOrderMessage() async {
  print('Awaiting user order...');
  var order = await getUserOrder();
  print('Your order is: $order');
}


Future<String> getUserOrder() {
  return Future.delayed(Duration(seconds: 4), () => 'Large Latte');
}
