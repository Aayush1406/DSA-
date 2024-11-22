// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string convertToBinary(int n){
    
    string res = "";
    while (n!=1){
        
        if(n%2==0){
            res = res+"0";
        }else{
            res = res+"1";
        }
        n = n/2;
    }
    res = res+"1";
    return res;
}

string revString(string ans){
    int start = 0;
    int end = ans.length()-1;
    
    while(start<end){
        char temp = ans.at(start);
        ans.at(start) = ans.at(end);
        ans.at(end) = temp;
        
        start +=1;
        end-=1;
    }
    
    return ans;
}
        
    
int main() {
    int n = 7;
    string ans = convertToBinary(n) ;
    string rev_ans = revString(ans);
    cout<<rev_ans;
    return 0;
}
