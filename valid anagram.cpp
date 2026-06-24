#include<iostream>
using namespace std;
bool isanagram( string s, string t){
    if(s.length()!=t.length()){
        return false; // If lengths are different, they cannot be anagrams
    }
    int freq[25] = {0}; // Initialize frequency array to 0
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++; // Increment frequency for characters in s
        freq[t[i]-'a']--; // Decrement frequency for characters in t
    }
    for(int i=0;i<25;i++){
        if(freq[i]!=0){ // If any frequency is not zero, they are not anagrams
            return false;
        }
    }
    return true; // All frequencies are zero, they are anagrams
    }

int main(){
    string s1,s2;
    cout << "Enter first string: ";
    getline(cin, s1); // Read first string
    cout << "Enter second string: ";
    getline(cin, s2); // Read second string
    if(isanagram(s1,s2)){
        cout << "The strings are anagrams." << endl;
    } 
    else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}