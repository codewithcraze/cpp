#include <iostream>
using namespace std;

int helloWorld(int a){
    a = 234;
    return a;
}

int main(){
    int a = 23;
    cout << helloWorld(a) << endl;
    cout << a;
    return 0;
}

