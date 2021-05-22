void main(List<String> args) {
  Test a = new Test('이름1', '그룹1', 1);
  Test2 b = new Test2('이름2','그룹2',1);
  b.sayName();
  a.sayName();

  new Test('이름3','그룹3',3)
  ..sayName()
  ..sayGroup();
}

class Test {
  final name;
  final group;
  int _id;

  Test(
    String a,
    String b,
    dynamic c,
  )   : this.name = a,
        this.group = b,
        this._id = c;

  void sayName() {
    print('안녕하세요 ${name} 입니다.');
  }
  void sayGroup() {
    print('안녕하세요 ${group}입니다.');
  }

  int get id {
    return this._id;
  }

  set id(int id) {
    this._id = id;
  }
}

class Test2 extends Test {
  Test2(String name, String group, int _id) : super(name, group, _id);

  @override
  void sayName() {
    print('테스트 출력입니다.');
  }
}
