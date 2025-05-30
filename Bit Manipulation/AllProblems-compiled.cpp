#include<bits/stdc++.h>
using namespace std;

// Check if an integer is even or odd
void odd_or_even(int n){

    cout<<((n&1)==1?"odd":"even")<<endl;
}

// Detect if two integer has opposite sign or not.
void check_signs_of_two_num_1(int a, int b){

    int x = 1<<31; // set last bit to 1
    int z = a ^ b; // if a and b's MSB is diffent than z will 1 as MSB

    if((x&z) == x) cout<<"different sign"; // if z's MSB is 1 than its & with x will also give x meaning they have diff sign
    else cout<<"same sign";
}

// Detect if two integer has opposite sign or not.
void check_signs_of_two_num_2(int a, int b){

    if((a^b)<0) cout<<"different sign"; // if last bit in any of a or b is different than one of them will be a negative number.
    else cout<<"same sign";

}

// swap 2 numbers without third variable
// This is pass by pointer
void swap_num(int *a, int *b){    

    cout<<"*a = "<<a<<"*b ="<<b<<endl;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

    cout<<"*a = "<<a<<"*b ="<<b<<endl;
}

// turn "OFF" Kth bit in a number
void turn_of_kth_bit(int a, int k){

    k = k-1; // do k - 1 because our bits are starting from 0.  
    int x = 1<<k; // bring 1 to kth location
    x = ~x; // make that location 0 execpt other by ~x. eg: 111101111
    cout<<(x&a); 

}

// turn "ON" kth bit in a number
void turn_on_kth_bit(int a, int k){
    k = k-1;
    int x = 1<<k;
    cout<<(a|x);
}

// check if Kth bit is set for a number
void check_kth_bit(int a, int k){
    k = k-1;

    if((a&(1<<k))==(1<<k)){
        cout<<"set";
    }else{
        cout<<"Not Set";
    }
}

// check if Kth bit is set for a number
void check_kth_bit_2(int a, int k){
    k = k-1;

    if((a&(1<<k))!=0){
        cout<<"set";
    }else{
        cout<<"Not Set";
    }
}


// toggle the kth bit
void toggle_kth_bit(int a, int k){
    k = k-1;
    int x = 1<<k;
    if((x&a)!=0){ // if num is non-zero means bit is set.
        a = a & ~x; // a & 111101111
        cout<<a;
    }else{ // if num is zero than set it
        a = a | x; 
        cout<<a;
    }
}

// toggle the kth bit
void toggle_kth_bit_2(int a, int k){

    k = k-1;
    int x = 1<<k;

    cout<<(a^x); // if bit in a is '0' than doing xor with 1 will make it 1 but if it is 1 than xor with 1 will make it 1. 

}

// How to unset the rightmost set bit of a number?
// // Obs: when we sub 1 from a num, the rightmost set bit will be unset and all the bits before it will be set.
// | number (dec) | number (bin) | number-1 (bin) | number & (number-1) (bin) | result (dec) | Explanation                       |
// | ------------ | ------------ | -------------- | ------------------------- | ------------ | --------------------------------- |
// | 12           | 1100         | 1011           | 1000                      | 8            | cleared rightmost set bit         |
// | 10           | 1010         | 1001           | 1000                      | 8            | rightmost set bit at position 1   |
// | 7            | 0111         | 0110           | 0110                      | 6            | cleared rightmost set bit (pos 0) |
// | 16           | 10000        | 01111          | 00000                     | 0            | only one set bit, cleared it      |

void unset_rightmost_set_bit_2(int a){
    cout<<(a & (a-1));
}

void unset_rightmost_set_bit(int a){
    int cnt = 0;
    int n = a;
    while(!(n&1)){
        n = n>>1;
        cnt++;
    }

    int x = 1<<cnt;
    cout<<(a&(~x));
}

// Check if a positive integer is a power of 2 without using any branching or loop.
void check_power_of_2(int a){
    if((a & (a-1))==0) cout<<"True";
    else cout<<"False";
}

// check if it a power of k
void check_power_of_k(int a, int k){
    bool flag = true;
    while(a>1){
        if((a%k) != 0){
            cout<<"False";
            flag =  false;
            break;
        }
        a = a /  k;
    }

    cout<<((flag==true)?"True":"");
}

// Find the position of the rightmost set bit
void find_position_of_rightmost_set_bit(int a){
    int cnt = 0;
    while(!(a&1)){
        cnt++;
        a>>=1;
    }

    cout<<cnt+1;
}

// Given a number n, compute its parity. The parity is related to the total number of 1's in the binary number. 
// The odd parity (encoded as 1) means an odd number of 1's and even parity (encoded as 0) means an even number of 1's.

void compute_parity(int n){

    int cnt = 0;
    while(n){
        if((n&1)==1){
            cnt++;
        }
        n = n>>1;
    }

    if(cnt%2==0) cout<<"Even";
    else cout<<"Odd";
}


// ‘A’ — 01000001 ‘a’ — 01100001
// ‘B’   01000010 ‘b’ — 01100010
// ‘C’ — 01000011 ‘c’ — 01100011
// ‘D’ — 01000100 ‘d’ — 01100100
// ‘E’ — 01000101 ‘e’ — 01100101

// ' ' ascii code - 00100000
// Convert smaller case to upper in string
void convert_smaller_case_to_upper(string s){
    string s2="";
    for(int i=0;i<s.size();i++){
        s2 += (s[i] ^ ' ');
    }
    cout<<s2;
}

// Find the total number of bits needed to be flipped
void count_flip_bits(int a, int b){

    int x = a^b;
    int cnt = 0;
    while(x){
        if((x&1)==1) cnt++;

        x = x>>1;
    }

    cout<<cnt;
}

// Reverse bits of a number
void reverse_bits(int a){
    int result = 0;
    for(int i=0;i<32;i++){        
        if((a>>i) & 1 == 1)
            result = result | 1 << (31 - i);
    }

    cout<<result;
}

//swap two bits at a given position in an integer
void swap_bits_at_pos(int n, int p, int q){

    p = p-1;
    q = q-1;

    if(((n>>p)&1)!=((n>>q)&1)){
        n = n ^ (1<<p);
        n = n ^ (1<<q);
    }

    cout<<n;

}

// print binary representation of a num
void print_binary_repr(int num){
    string s="";
    while(num){
        (num%2==0)?s = s+'0':s = s+'1';
        num /=2;
    }

    reverse(s.begin(), s.end());
    cout<<s;
}

// swap adjacent bits
void swap_adjacent_bits(int n){

    int even_mask = 0xaaaaaaaa;
    int odd_mask = 0x55555555;

    int even_num = even_mask & n;
    int odd_num = odd_mask & n;

    even_mask = even_num >> 1;
    odd_mask = odd_num << 1;

    int ans = even_mask | odd_mask;

    cout<<ans;
}

// Do circular right shift
void circular_right_shift(int a, int k){
    k = k%32; // This is very imp, when we have k larger than 32.
    int k_bits = a<<(32-k); // shifting first k bits to the last
    int without_k_bits = a>>k; // doing reg. right shift by k times.

    cout<<(k_bits|without_k_bits);
    
}

// Do circular left shift
void circular_left_shift(int a, int k){

    int k_bits = a>>(32-k);
    int without_k_bits = a<<k;

    cout<<(k_bits|without_k_bits);
    
}

// find missing number in array
void find_missing_number_in_array(int a[], int n){

    int x = 0;
    for(int i=0;i<n;i++){
        x = x ^ a[i];
    }

    for(int i=1;i<=n+1;i++){
        x = x ^ i;
    }

    cout<<x;
}


// Find the odd occurring element in an array in a single traversal

void find_odd_occuring_el(int a[], int n){
    int x = 0;
    for(int i=0;i<n;i++){
        x = x ^ a[i];
    }

    cout<<x;

}

// Find the duplicate element in a limited range array

void find_duplicate_el(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=a[i];
    }

    int actual_sum = (n * (n-1))/2;
    cout<<(sum - actual_sum);
}

void find_duplicate_el_2(int a[], int n){

    int x = 0;
    for(int i=0;i<n;i++){
        x = x ^ a[i];
    }

    for(int i=1;i<=n-1;i++){
        x = x ^ i;
    }

    cout<<x;
}
// cnt no of bit flips to convert to a particular number. n1->n2
int cnt_bit_flips(int n1, int n2){
    
    int res = n1 ^ n2;
    int cnt = 0;
    while(res != 0){
        if((res&1) == 1){
            cnt++;
        }
        res >>=1;
    }
    
    return cnt;
}

int main(){

//    int n = 10;

//    odd_or_even(n);

//    int x = -9;
//    int y = 0;
//    check_signs_of_two_num_2(x,y);

//    swap_num(1,2);

//    turn_on_kth_bit(20,3);

//   check_kth_bit(20,3);
//   check_kth_bit_2(20,3);

// toggle_kth_bit_2(20,3);

// unset_rightmost_set_bit(12);
// check_power_of_2(4);

// check_power_of_k(24, 4);

// find_position_of_rightmost_set_bit(20);

// compute_parity(127);

// convert_smaller_case_to_upper("aayUsh");

// count_flip_bits(65,80);

    // reverse_bits(-100);

    // swap_bits_at_pos(31,3,7);

    // print_binary_repr(6);

    // swap_adjacent_bits(6);

    // circular_left_shift(127,3);

    // int a[] = {1,2,3,4,5,7,8,9,10};

    // int n = sizeof(a)/sizeof(a[0]);

    // find_missing_number_in_array(a,n);


    // int a[] = {4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3};

    // int n = sizeof(a) / sizeof(a[0]);

    // find_odd_occuring_el(a,n);

    int a[] = {1,2,3,4,4};

    int n = sizeof(a) / sizeof(a[0]);

    find_duplicate_el_2(a, n);

    return 0;

}
