#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int multi (int a , int b){
    return a*b;
}
int main() {
    cout << "Welcome to Team Calculator!" << endl;
    cout << "Result: " << add(5, 3) << endl;
    return 0;
}
