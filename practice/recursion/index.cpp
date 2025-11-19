#include <iostream>
#include <vector>
#include <map>


using namespace std;


int factorial(int n){
    if(n == 1){
        return 1;
    } else{
        return n * factorial(n - 1);
    }
}

int fibonacci(int n ){
    if(n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void printNumber(int n){
    if(n == 0) return;
    cout << n << endl;
    return printNumber(n - 1);
}

int sumOfN(int n){
    if(n == 0) return 0;
    return n + sumOfN(n - 1);
}

int countDigits(int n){
    if(n == 0) return 0;
    return 1 + countDigits(n / 10);
}

void printDigitInReverse(int n){
    if (n == 0) return;
    cout << n % 10 << endl;
    return printDigitInReverse(n / 10);

}

int maxElementInArray(vector<int> arr, int start, int currentMax){
    if(start == arr.size()){ return currentMax;}
    currentMax = max(currentMax, arr[start]);
    return maxElementInArray(arr, start + 1, currentMax);
};

int minElementInArray(vector <int> arr, int start, int currentSmall){
    if(start == arr.size()) return currentSmall;
    currentSmall = min(currentSmall, arr[start]);
    return minElementInArray(arr, start + 1, currentSmall);
}


vector<int> reverseAnArray(vector<int> arr, int start, int end){
    if(start >= end) return arr;
    swap(arr[start], arr[end]);
    return reverseAnArray(arr, start + 1, end - 1);
}

int checkStringIsPalindrome(string s, int start, int end){
    if(start >= end) return 1;
    if(s[start] != s[end]) return - 1;
    return checkStringIsPalindrome(s, start + 1, end - 1);
}


int sumOfDigit(int digit, int sum){
    if(digit == 0) return sum;
    sum += digit % 10;
    return sumOfDigit(digit / 10, sum);
}

int productOfDigits(int digit, int multiply) {
    if (digit == 0) return multiply;
    multiply *= digit % 10;
    return productOfDigits(digit / 10, multiply);
}

map<char, int> countOccurrence(const string& str, int start, map<char, int>& freq) {

    if (start == str.size())
        return freq;
    // Check if current character is space
    if (str[start] == ' ') {
        cout << "Empty Space" << endl;
        return countOccurrence(str, start + 1, freq);  // Continue recursion
    }
    // Update frequency
    if (freq.find(str[start]) != freq.end()) {
        freq[str[start]]++;
    } else {
        freq[str[start]] = 1;
    }
    return countOccurrence(str, start + 1, freq);
}

int linearSearch(vector<int> arr, int target, int start){
    if(start == arr.size()) return -1;
    if(arr[start] == target){
        return start;
    }
    return linearSearch(arr, target, start + 1);
}

int binarySearch(vector <int> arr, int start, int end, int target){
    if(start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarySearch(arr, start, mid - 1, target);
    }else{
        return binarySearch(arr, mid + 1, end, target);
    }
}

void printAllTheIndices(vector<int> arr, int start ,int target){
    if(start == arr.size()) return;
    if(arr[start] == target){
        cout << start << endl;
    }
    return printAllTheIndices(arr, start + 1, target);
}




int main(){
    /*
        Recursion
            Ans: Recursion is when a function call itself to solve a problem.
            1. Base Case (Stop here).
            2. Recursive Case (Repeat with smaller problem).
    */ 
    vector<int> arr = {10,54, 1,2,4,54,578,411, 54};
    string s = "mmamm";
    cout << factorial(5);
    cout << endl;
    cout << fibonacci(5);
    cout << endl;
    printNumber(10);
    cout << "================ PRINT TO N NUMBERS ====================" << endl;
    cout << sumOfN(10) << endl;
    cout << "++++++++++++++++ COUNT TO DIGIT ++++++++++++++++++++" << endl;
    cout << countDigits(12313) << endl;
    cout << "================ Digit IN REVERSE ==================" << endl;
    printDigitInReverse(123456);
    cout << "================ MAX ELEMENT IN ARRAY ==============" << endl;
    cout << maxElementInArray(arr, 0, arr[0]);
    cout << "================ MIN ELEMENT IN ARRAY ==============" << endl;
    cout << minElementInArray(arr, 0, arr[0]) << endl;
    cout << "Reverse an Array using recursion" << endl;
    vector<int> newArr = reverseAnArray(arr, 0, arr.size() - 1);
    for(auto it : newArr){
        cout << it << endl;
    }
    cout << "============================== CHECK STRING IS PALINDROME USING RECURSION =============" << endl;
    cout << checkStringIsPalindrome(s, 0, s.size() - 1) << endl;
    cout << "================== Sum of Digits ================" << endl;
    cout << sumOfDigit(123456, 0) << endl;
    cout << "================== Product of Digits ===========" << endl;
    cout << productOfDigits(123456, 1) << endl;
    cout << "================== Count occurrence of characters in String ====" << endl;

    map<char, int> freq;
    map<char, int> mp = countOccurrence("Hello Deepak Chaudhary", 0,  freq);
    for(auto it : mp){
        cout << it.first << "  " << it.second << endl;
    }
    cout << "Linear Search using recursion" << endl;
    cout << linearSearch(arr, 54, 0) << endl;
    cout << "Binary Search Using Recursion" << endl;
    cout << binarySearch(arr, 0, arr.size() - 1, 54) << endl;
    cout << "Print all the Indices of the target in an array" << endl;
    printAllTheIndices(arr, 0,  54);

    return 0;
}