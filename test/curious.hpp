class B;  // 전방 선언

class A {
 public:
  A();

 private:
  B* b;  // 포인터 사용은 전방 선언으로 가능
};
