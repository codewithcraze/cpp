#include <iostream>
#include <string>

using namespace std;


void printToss(int n, string & result){
    if(result.size() == n){
        cout << result << endl;
        return;
    }

    result.push_back('T');
    // Try both the coices.
    printToss(n, result);
    result.pop_back();
    result.push_back('H');
    printToss(n, result);
    result.pop_back();
}


int main(){
    string result = "";
    printToss(3, result);

    return 0;
}