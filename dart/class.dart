void main(List<String> args) {
  Test a = new Test('이름1', '그룹1', 1);
  Test b = new Test.init({
    'name': '이름2',
    'group': '그룹2',
    'id': 2,
  });
  a.sayName();
  b.sayName();

  print(a.id);
  a.id = 3;
  print(a.id);
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

  Test.init(
    Map values,
  )   : this.name = values['name'],
        this.group = values['group'],
        this._id = values['id'];

  void sayName() {
    print('안녕하세요 ${name} ${group}입니다.');
  }

  int get id {
    return this._id;
  }

  set id(int id) {
    this._id = id;
  }
}
