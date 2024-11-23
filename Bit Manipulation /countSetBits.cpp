// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<string>


int main() {
    
    int num = 13;
    int cnt = 0;
    while(num!=1){
    
        // if(num%2==1){
        //     cnt+=1
        // }
        
        // num = num / 2;
        
        cnt+= num&1;
        num = num >> 1;
        
    }
    
    cnt+=1;
    
    cout<<cnt;
    
}
