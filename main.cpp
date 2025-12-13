#include <iostream>
using namespace std;

int calculate(int a, int b,int c) {
    return a / b;   // original version
}

int main() {
    cout << "Result: " << calculate(5, 3) << endl;
    return 0;
}
