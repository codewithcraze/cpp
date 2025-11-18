// Branching algorithm.algorithm
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void printNumbers(int n, set <int> & print){
    if(n <= 0){
        return;
    }
    if(!print.count(n)){
        cout << n << endl;
        print.insert(n);
    }
    // Two recursive calls.
    printNumbers(n - 1, print);
    printNumbers(n - 2, print);

}


int numberofWays(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return numberofWays(n - 1) + numberofWays(n - 2);
}

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);
}


void generateTotalSubsets(vector<int> arr, int index, vector<int>& current){
    if(index == arr.size()){
        return;
    }
    // Print subsets.
    cout << "{";
    for(auto num : current){ cout << num;}
    cout << "}" << endl;
    // Inclusion.
    current.push_back(arr[index]);
    generateTotalSubsets(arr, index + 1, current);
    // Backtracking.
    current.pop_back();
    generateTotalSubsets(arr, index + 1, current);
}


void printBinaryString(int n, string current){
    if(n == current.size()){
        for(int i = 0; i < current.size(); i++){
           cout << current[i];
        }
        cout << endl;
        return;
    }
    printBinaryString(n, current + "0");
    printBinaryString(n , current + "1");
}

int count(int r, int c){
    if( r >= 4 || c >= 4){
        return 0;
    };

    if( r == 3  && c == 3){
        return 1;
    }
    return count(r + 1, c) + count(r, c + 1);
}

int main(){
    set <int> print;
    vector <int> arr = {1, 2, 3, 4, 5, 6};
    vector <int> curr;
    printNumbers(10, print);
    cout << numberofWays(4);
    cout << "Fibonacci series.";
    fib(10);
    cout << "generate total subset of an array";
    generateTotalSubsets(arr, 0, curr);
    cout << "Print all binary strings of length n" << endl;
    printBinaryString(3, "");
    cout << "Total number of ways or paths to reach from top-left to bottom-right(only move right or down is allowed)";
    cout << count(0, 0);

    return 0;
}

