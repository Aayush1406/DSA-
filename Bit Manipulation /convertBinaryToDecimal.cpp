#include<iostream>
#include<string>
using namespace std;

int convertBinaryToDecimal(string n){
    
    int p2 = 1;
    int sum = 0;
    
    for(int i = n.length()-1;i>=0;i--){
        
        if(n[i]=='1'){
            sum += p2;
            
        }
        
        p2 = p2 * 2;
    }
    
    return sum;
}

int main(){
    
    string num = "111";
    
    int ans = convertBinaryToDecimal(num);
    
    cout<<ans;
    
}
