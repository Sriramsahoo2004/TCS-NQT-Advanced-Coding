// Problem Statement –

// A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array  of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).

// Example 1:
// Input:

// N=8 and arr = [4,5,0,1,9,0,5,0].
// There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

// Output:
// 4 5 1 9 5 0 0 0

// Example 2:
// Input:

// N=6 and arr = [6,0,1,8,0,2]

// Output:
// 6 1 8 2 0 0

// The LeetCode Counterpart: LeetCode #283 - Move Zeroes
#include <iostream>
#include <vector>

using namespace std;    

int main(){
    int n;

    cout << " Enter the size of array you want to create :- ";
    cin >> n;
    vector<int> arr(n);

    cout << " Enter array elemnts :- ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int insertPosition = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[insertPosition] = arr[i];
            insertPosition++;
        }
    }

    while(insertPosition < n){
        arr[insertPosition] = 0;
        insertPosition++;
    }
    
    cout << " Solved array :- ";
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}