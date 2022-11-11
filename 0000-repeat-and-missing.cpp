// Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive.
// Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating
// and missing numbers A and B where A repeats twice and B is missing.
//Input Format:  array[] = {3,1,2,5,3}
// Result: {3,4)
// Explanation: A = 3 , B = 4 
// Since 3 is appearing twice and 4 is missing

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,7,5};
    int x = 0; // missing num
    int y = 0; // repeated num
    int xor1 = arr[0];
    // Get the xor of all array elements
    for (int i = 1; i < 8; i++)
        xor1 = xor1 ^ arr[i];

    //XOR the previous result with numbers from 1 to n
    for (int i = 1; i <= 8; i++)
        xor1 = xor1 ^ i;
    // first find the right most set bit mask then divide elements into two sets by comparing a rightmost set bit
    // of resulted XOR with the bit at the same position in each element.
    int rsb = xor1 & -xor1;
    for(int i:arr){
        if((i & rsb )== 0){
            //first set
            x=x^i;
        }
        else {
            //another set
            y=y^i;
        }
    }
    //do the same for number in range [1,n]
    for(int i=1;i<=8;i++){
        if((i & rsb )== 0){
            //first set
            x=x^i;
        }
        else {
            //another set
            y=y^i;
        }
    }
    for(int v:arr) {
        if(x==v) {
            cout<<"missing no is "<< y<<" and duplicate no is "<<x;
            break;
        }
        else if(y==v){
            cout<<"missing no is "<< x<<" and duplicate no is "<<y;
            break;
        }
    }
}
//Solution using BIT manipulation
//to extract out the two numbers from the array one missing and one duplicate number from the array and to cancel out
//rest of the elements perform the XOR operation of all the numbers with the numbers from range [1,n] , after performing
//the above operation the only two numbers that will left out will be our required missing and duplicate number then we just
//have to find those number since we will be having the XOR of numbers not the two numbers individually and we can do that
//by using right most set bit masking 