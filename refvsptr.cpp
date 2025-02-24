// &x == &refvar. no new address is allocated for p1
// &p2 is different and new address is allocated to it.
// ref. var will not get new mem. block of its owm. It has the addr. of the mem block it is referring to.
// Ptr var will get its own mem block which will be of 4 bytes and it will contain mem. addr of the mem. block it is pointing to.

#include<iostream>

using namespace std;

int main(){

    int x = 100;
    int &p1 = x;
    int *p2 = &x;

    cout<<"&p1 = "<<&p1<<" &i = "<<&x<<" *p2 = "<<&p2;

    return 0;
}