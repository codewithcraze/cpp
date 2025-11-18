#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        int next;
    
    void show(){
        cout << data << " " << next;        
    }
};

int main(){
    Node n1;
    
    n1.data = 1234;
    n1.next = 2342;
    n1.show();


    return 0;
}