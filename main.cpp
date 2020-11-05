#include <iostream>

using namespace std;

class Number1 {
public:
    int one = 15;
private:
    void Number2(int one) {
        int two = one;
    }
};

class Class1 {
public:
    int a;
    int b;
    int c;
};

class PrivateClass: public Class1 {
private:
    PrivateClass(){
        a = 10;
        b = 15;
        c = 20;
    }
};

int main() {
    //пример 1
    Number1 number1;
    cout << number1.one;    //открытый
    Number1 number2;
    cout << number2.two;    //закрытый
    number2.Number2(10);    //закрытый
    //пример 2
    PrivateClass privateClass; //закрыт
}