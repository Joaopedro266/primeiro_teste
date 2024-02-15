#include <iostream>
#include <cassert>
using namespace std;

int somaAteN(int b, int a);
void teste();

int main() {
    teste();
    int a,b;
}

int somaAteN(int b, int a) {
    return a+b;
}
void teste(){
    assert(somaAteN(2,3)==5);
    assert(somaAteN(4,4)==9);
}
