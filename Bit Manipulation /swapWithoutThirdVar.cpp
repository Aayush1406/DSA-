// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a=5, b =6;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout<<"a = "<<a<<" b = "<<b;

    return 0;
}
