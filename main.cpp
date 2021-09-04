#include <iostream>

void swap(int* pa, int* pb){
    int c;
  //  pc = nullptr;
    c = *pa;
    *pa = *pb;
    *pb = c;
}

int main() {
    int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
    std::cout << "Good Bye!";
    return 0;
}
