#include <iostream>


using namespace std;



void change(int *b){
    cout << b;
}

int main(){
    int a = 23;
    int* b = &a; 
    *b = 24;
    change(b);
    return 0;
}