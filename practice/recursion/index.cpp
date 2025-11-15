#include <iostream>

using namespace std;

void print_toN(int n){
   if(n == 0){ // Base.
       return;
   }
    print_toN(n - 1);
    cout << n << " ";
}

int main() {
    cout << "Recursion Practice File" << endl;
    int n = 23;
    print_toN(n);    
    return 0;
}