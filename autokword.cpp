//What is auto keyword in c++ ?
//It is used for type deduction.
#include<iostream>

using namespace std;

class Base{};


int main(){
    auto x = 10; //i
    auto y = 10000000000000000000.0; //d
    auto b = Base();//4Base
    auto c = new Base();//p4Base
    auto z = new int(); //pi

    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(z).name()<<endl;
}