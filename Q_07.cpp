#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int L;

    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter the length of the set:- ";
    cin >> L;

    int n = s.length();
    int max_a_count = 0;
    for(int i = 0; i < n; i+= L){

        int current_a_count = 0;
        int chunk_end = min(i + L, n);
        for(int j = i; j < chunk_end; j++){
            if(s[j] == 'a'){
                current_a_count++;
            }
        }

        if(current_a_count > max_a_count){
            max_a_count = current_a_count;
        }
    }

    cout << "Maximum count of 'a' in any chunk: " << max_a_count << endl;
}
