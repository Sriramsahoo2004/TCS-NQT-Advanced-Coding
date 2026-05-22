// Problem Statement –

// Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 
// So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

// Count the number of Sunday jack will get within n number of days.

//  Example 1:

// Input 
// mon-> input String denoting the start of the month.
// 13  -> input integer denoting the number of days from the start of the month.

// Output :
// 2    -> number of days within 13 days.

// The LeetCode Counterpart: LeetCode #1185 - Day of the Week

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // for isalpha and tolower

using namespace std;

int main() {
    string start_day;
    int n;

    cout << "Enter the starting day of the month (e.g., Mon, Tue, Wed, etc.):- ";
    cin >> start_day;

    cout << "Enter the number of days from the starting day you have :- ";
    cin >> n;

    // Convert the input day to lowercase for case-insensitive comparison
    for(char &c : start_day) {
        c = tolower(c);
    }

    // Map based on the EXACT logic provided in the TCS explanation.
    // Monday requires 6 days to hit the first Sunday, Tuesday requires 5, etc.
    unordered_map<string, int> days_to_first_sunday = {
        {"mon", 6}, 
        {"tue", 5}, 
        {"wed", 4}, 
        {"thu", 3}, 
        {"fri", 2}, 
        {"sat", 1}, 
        {"sun", 0}
    };

    // Get the offset for the starting day
    int offset = days_to_first_sunday[start_day];

    // Calculate based on their specific formula
    if (n < offset) {
        cout << 0 << endl;
    } else {
        // 1 (for the first Sunday) + (remaining days / 7)
        int result = 1 + (n - offset) / 7;
        cout << result << endl;
    }
    
    return 0;
}