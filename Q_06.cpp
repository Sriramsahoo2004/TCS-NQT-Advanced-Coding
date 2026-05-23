// Problem Statemant :- 
// A supermarket maintains a pricing format for all its products. A value N is printed on each product. When the scanner reads the value N on the item, the product of all the digits in the value N is the price of the item. The task here is to design the software such that given the code of any item N the product (multiplication) of all the digits of value should be computed(price).

// Example 1:

// Input :
// 5244 -> Value of N

// Output :
// 160 -> Price 

// Explanation:
// From the input above 
// Product of the digits 5,2,4,4
// 5*2*4*4= 160
// Hence, output is 160.

// The LeetCode Counterpart: LeetCode #1281 - Subtract the Product and Sum of Digits of an Integer. (This TCS question is exactly the first half of that LeetCode problem).
#include <iostream>
#include <string>

using namespace std;

int main(){
    string barcode;

    // Read as a string to completely avoid input integer overflow 
    cout << "Enter the code:- ";
    cin >> barcode;

    // Use long long for the product to prevent output overflow
    long long price = 1;

    for(int i = 0; i < barcode.size(); i++){
        // Convert ASCII character to actual integer ('5' - '0' = 5)
        int current_digit = barcode[i] - '0';

        price *= current_digit;

        if(price == 0) break;
    }

    cout << "The Price of the item is:- " << price;
    return 0;
}