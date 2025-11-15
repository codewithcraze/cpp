#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <vector>

using namespace std;

void checkPalidrome(){
    string s = "ramar";
    // reverse and check;
    string s2 = "";
    for(int i = s.size() - 1; i >= 0; i--){
        s2 += s[i];
    }
    if(s == s2){
        cout << "Palidrome";
    }else{
        cout << "Not Palidrome";
    }
}




void countVowelAndConsonants() {
    int vowel = 0;
    int consonant = 0;
    string s = "Deepak chaudhary";
    for (int i = 0; i < s.size(); i++) {
        char c = tolower(s[i]);
        
        if (c >= 'a' && c <= 'z') { 
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowel++;
            else
                consonant++;
        }
    }
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
}

void reverse_a_string(){
    string c = "deepak";
    for(int i = 0; i < c.size() / 2; i++){
         char character = c[i];
         c[i] = c[c.size() - 1 - i];
         c[c.size() - 1 - i] = character;
    }
    cout << c;
}


void check_two_string_anagram(){
    string s1 = "rama";
    string s2 = "maar"; 

    map<char, int> mp1;
    map<char, int> mp2;

    for(int i = 0; i < s1.size(); i++){
        if(mp1.find(s1[i]) != mp1.end()){
            mp1[s1[i]]++;
        }else{
            mp1.insert({s1[i], 1});
        }
    }

    for(int i = 0; i < s2.size(); i++){
        if(mp2.find(s2[i]) != mp2.end()){
            mp2[s2[i]]++;
        }else{
            mp2.insert({s2[i], 1});
        }
    }

    if(mp1 == mp2){
        cout << "Is an Anagram";
    }else{
        cout << "Not an Anagram";
    }

    // store values in map with count wise. and than compare count values
}

void duplicate_character(){
    int arr[26] = {0};
    string s = "deepak";

    for(int i = 0; i < s.size(); i++){
        arr[s[i] - 'a']++;
    }

    for(int i : arr){
        if(i > 1){
            cout << char(i + 'a');
        }
    }
}


void lower_to_uppercase(){
    string s = "dEePak";

    string result = "";
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            result += toupper(s[i]);
        }else{
            result += tolower(s[i]);
        }
    }
    cout << result;
}

void largest_common_substring(){
    vector<string> array = {"flower", "flow", "flowing"};
    string prefix = array[0];

    for(int i = 1; i < array.size(); i++){
        string word = array[i];
        string temp = "";
        for(int j = 0; j < min(prefix.size(), word.size()); j++){
            if(prefix[j] == word[j]){
                temp += prefix[j];
            }else{
                break;
            }
        }
        
        prefix = temp;
        if(prefix == ""){
            break;
        }
    }

    cout << prefix;

}


void remove_all_spaces_of_string(){
    string s = "This is Deepak Chaudhary";

    string result;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            result += s[i];
        }
    }

    cout << result;

}

/*
    Note: ""=> This represents string.
    ''=> This represents character value.
*/


void frequency_count(){
    string s = "Deepak Chaudhary";
    map<char, int> mp;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            continue;
        }
        if(mp.find(s[i]) != mp.end()){
            mp[s[i]]++;
        }else{
            mp.insert({s[i], 1});
        }
    }

    for(auto &it : mp){
        cout << it.first << "->" << it.second << endl;
    }
}

void replace_characters(){
    string s = "This is Deepak Chaudhary";
    string result = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            result += "@20";
        }else{
            result += s[i];
        }
    }

    cout << result;
}


int main(){
    checkPalidrome();
    cout << endl;
    countVowelAndConsonants();
    cout << endl;
    reverse_a_string();
    cout << endl;
    check_two_string_anagram();
    cout << endl;
    duplicate_character();
    cout << endl;
    lower_to_uppercase();
    cout << endl;
    largest_common_substring();
    cout << endl;
    remove_all_spaces_of_string();
    cout << endl;
    frequency_count();
    cout << endl;
    replace_characters();

    return 0;
}