#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string PrintResult(const string& msg) {
    string result;
    stringstream ss(msg);
    string word;
    
    while (ss >> word) {
        if (word.length() > 4) {
            result += string(word.length(), '*');
        } else {
            result += word;
        }
        result += ' '; // Add a space between words
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    string msg;
    getline(cin, msg); // Read the entire input line
    
    cout << PrintResult(msg) << endl;

    return 0;
}