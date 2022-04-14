#include<iostream>


struct Person {
  const char* name{};
  int age{};

  Person(const char* str, int num) {
    name = str;
    age = num;
  }

  void greet() {
    std::cout << "I'm " << name
              << " and I am " << age << " years old" << std::endl;
  }

  void set_name(const char* str) {
    name = str;
  }
};

class Meeting {
  int number;

  public: 

  void cumpriment(Person& p1, Person& p2) {
    std::cout << p1.name << " says hello to " << p2.name << std::endl;
  }
};

int main() {
  Person p1{"Vitor", 18};
  Person p2{"Luiz", 17};
  Meeting casual;

  p1.greet();

  casual.cumpriment(p1, p2);

  p1.greet();

}
