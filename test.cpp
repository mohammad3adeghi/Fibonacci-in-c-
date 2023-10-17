#include <iostream>

int main ()
{
    int n,c;

    std::cin >> n;

    int a = 0;
    int b = 1;

    std::cout << a;
    std::cout << 1;

    for (int i = 0; i < n; ++i) {
        c = a+b;
        std::cout << c;
        a = b;
        b = c;
    }
}