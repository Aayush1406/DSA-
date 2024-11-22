#include <iostream>
using namespace std;
#include<string>


int main() {
        
    int num = 9;
    int target = 2;
    num = num | ((1<< target));
    
    cout<<num;
}
