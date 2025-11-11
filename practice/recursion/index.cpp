#include <iostream>
#include <vector>


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


int maxElementInArray(vector<int> arr){
    
};

int main(){
    /*
        Recursion
            Ans: Recursion is when a function call itself to solve a problem.
            1. Base Case (Stop here),
            2. Recursive Case (Repeat with smaller problem.).
    */ 
   vector<int> arr = {10,1,2,4,54,578,411};
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
    cout << maxElementInArray(arr);



    return 0;
}