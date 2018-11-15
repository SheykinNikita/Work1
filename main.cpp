#include <iostream>

int main() {
    int a = 8456;
    int a1 = a/1000; //8
    int a2 = a%10; //6
    int a3 = a%100/10; //5
    int a4 = a%1000/100; //4
    std::cout << a2 << a3 << a4 << a1 << std::endl;
    return 0;
}