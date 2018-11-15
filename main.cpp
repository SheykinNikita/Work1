#include <iostream>

int main() {
    int a = 348;
    int a1 = a/100;
    int a2 = a%10;
    int a3 = a%100/10;
    int b = a1+a2+a3;
    std::cout << b << std::endl;
    std::cout << ((b%2 == 0) ? "четное" : "нечетное");
    return 0;
}