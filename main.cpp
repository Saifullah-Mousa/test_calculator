#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int multi (int a , int b){
    return a*b;
}
int sub(int a, int b) {
    return a - b+2;
}

int main() {
    cout << "Welcome to Team Calculator!" << endl;
    cout << "Result: " << add(5, 3) << endl<<sub(5,3);
    return 0;
}
