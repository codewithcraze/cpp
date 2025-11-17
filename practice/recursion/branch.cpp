#include <iostream>
#include <map>
#include <vector>

using namespace std;
/*
solve("ab",0,"")
|
|-- solve("ab",1,"a")
|   |
|   |-- solve("ab",2,"ab")   <-- base case → print "ab"
|   |
|   |-- solve("ab",2,"a")    <-- base case → print "a"
|
|-- solve("ab",1,"")
    |
    |-- solve("ab",2,"b")    <-- base case → print "b"
    |
    |-- solve("ab",2,"")     <-- base case → print ""
*/

void solve(string s, int i, string current){
    if(i == s.size()){
        cout << current << endl;
        return;
    }
    solve(s, i+1, current + s[i]);
    solve(s, i+1, current);
}

void generateAllSubsetsOfArray(vector<int> arr, int index, vector<int> current){
    if(index == arr.size()){
         cout << "{";
         for(int num : current){
            cout << " " <<  num << " ";
         };
         cout << "}";
         cout << endl;
        return;
    }
    // Inclusions.
    current.push_back(arr[index]);
    generateAllSubsetsOfArray(arr, index + 1, current);
    // Backtracking.
    current.pop_back();
    generateAllSubsetsOfArray(arr, index + 1, current);
}




int main(){
      // Generate all the Subsets of the string.
      vector<int> arr = {1,2,3,4,5};
      vector<int> current;
     solve("deepak", 0, "");
     cout << "Generate all the subsets of an Array" << endl;
     generateAllSubsetsOfArray(arr, 0, current);

    return 0;
}

