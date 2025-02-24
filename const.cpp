// 1. int *const p = &x (x can be const / non const) (const ptr) -> reassign not allowed. can modify of non const type
// 2. const int* p (ptr to const) -> reassign is allowed but only of const type. ptr cannot modify the value as it is pointing const type.
// 3. const int* const p = &x (const ptr pointing to const) -> reassign is not possible. Assignment of only const allowed. ptr cannot modify the value it is pointing to as it is of const type. 
#include<iostream>

using namespace std;
void f1(){
    const int x = 10; // read only variable
    // x = 10; // This is not allowed as when declaring when not assigning any value it takes any garbage value.    
}

void f2(){

    const int x = 10; // read only variable
    //The val of x is suppose to be const but by making ptr pointing to x mem. loc we can change it so it is a loop hole.
    // cout<<x; //10
    // int *p = &x; // Due to the loop hole later C++ version restricted this opn.
    // ++(*p);
    // cout<<x;    //11
}

void f3(){
    const int x = 10;
    const int y = 100;
    const int *p; // pointer to the const. pointer can point to any value of const type but cannot modify them. 
    p = &y; // It cannot point to non const type.
    p = &x;//It can be reassigner
    cout<<x;
    // ++(*p); //This is not allowed bcoz ptr is pointing to the const. value.
    cout<<x;
}

void f4(){
    const int x = 10;
    int y = 100;
    int *const p = &y; //(const pointer) pointer of type const. Pointer can point to const / non const type.
    // p = &x; // reassign is not possible. Should be done at the time of declaration. 
    ++(*p); // It can change value
    cout<<y;
}
void f5(){
    const int x = 10;
    int y = 100;
    const int *const p = &y; //(const pointer pointer of type const. Pointer will point to only const type.
    // p = &x; // reassign is not possible. Should be done at the time of declaration. 
    // ++(*p); // It cannot change value as it is pointing to the const type.
    cout<<y;
}

int main(){
    
}