#include <iostream>

int main() {
    int a = 8456;
    int a1 = a/1000; //8
    int a2 = a%10; //6
    int a3 = a%100/10; //5
    int a4 = a%1000/100; //4
    std::cout << a2 << a3 << a4 << a1 << std::endl;
    a1 +=5;
    a2 +=5;
    a3 +=5;
    a4 +=5;
    std::cout << a1 << a4 << a3 << a2 << std::endl;
    a1 -= 1;
    a2 -= 4;
    a3 -= 3;
    a4 -= 2;
    std::cout << a1 << a4 << a3 << a2 << std::endl;
    int b;
    std::cout << "b=" << a1 << a4 << a3 << a2 << std::endl;
    return 0;
}