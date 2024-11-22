// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<string>


int main() {
    
    int num = 13;
    
    int target = 1;
    
    /*if (num & (1<<target)  !=0){
        cout<<"True";
    }else{
        cout<<"False";
    }
*/ // using left shift operator

    
    if(((num >> target) & 1) != 0){
        cout<<"True";
    }else{
        cout<<"False";
    } // using right shift operator
}
