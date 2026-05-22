// Problem Statement –

// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

// Constrains-
// 1<=N<=100

// Example 1:

// Input :
// 10  -> Integer

// Output :
// 5    -> result- Integer

// The LeetCode Counterpart: LeetCode #476 - Number Complement

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter a number between 1 and 100 :- ";
    cin >> n;

    if(n < 1 || n > 100){
        cout << " Invalid input. Please enter a number between 1 and 100." << endl;
        return 0;
    }
    
    // Step 1: Count the bits mathematically
    int num_bits = floor(log2(n)) + 1;
    
    // Step 2: Generate the mask (e.g., if bits=4, 1 << 4 is 16. 16 - 1 = 15)
    int mask = (1 << num_bits) - 1;
    
    // Step 3: XOR with the mask (or just subtract: mask - N)
    cout << "The answer is :- ";
    cout << (mask ^ n) << endl;
}