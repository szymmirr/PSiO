#include <iostream>
using namespace std; int foo(int a, int b); // Deklaracja funkcji
int main() { int a; cin >> a; int b = foo(a, 5); cout << b << endl; return 0; } int foo(int a, int b) { return a+b; }
