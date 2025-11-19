#include <iostream>
#include <vector>

using namespace std;

void two_sum(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 9;
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        int current_sum = arr[left] + arr[right];
        if(current_sum == target){
            cout << left << " " << right;
            return;
        }
        if(current_sum > target){
            right--;
        }else{
            left++;
        }
    }
}

void continuous_sub_array(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 12;
    int current_sum = arr[0];
    int j = 0;
    for(int i = 1; i < arr.size(); i++){
        current_sum += arr[i];
        while(current_sum > target){
            current_sum -= arr[j];
            j++;
        }
        if(current_sum == target){
            cout << j << " " << i;
            return;
        }
    }

    cout << endl;
}

void maximum_sub_array_sum(){
    cout << endl;
    vector<int> arr = {1,2,-3,4,5,6,-7,9};
    int current_sum = 0;
    int max_sum = 0;
    for(int i = 0; i < arr.size(); i++){
        current_sum = max(current_sum, current_sum + arr[i]);
        max_sum = max(current_sum, max_sum);
    }
    cout << max_sum << endl;
}

void longest_consecutive_sequence(){
    cout << endl;
    vector<string> arr = {"123", "1234", "12345"};
     string prefix = arr[0];
     for(int i = 1; i < arr.size(); i++){
        int j = 0;
        while(j < prefix.size() && j < arr[i].size() && prefix[j] == arr[i][j]){
            j++;
        }
        prefix = prefix.substr(0, j);
        if(prefix.empty()){
            return;
        }
     }
    cout << prefix << endl;
}


void longest_subarray_with_equal_to_0_and_one(){
    vector<int> arr = {};
    vector<pair<int, int>> pairs;
    int i = 0;
    int j = 0;
    for(int i= 0; i < arr.size(); i++){

    }

}


int main(){

     // Two pointers technique.
    two_sum();
    continuous_sub_array();
    // Maximum Subarray using kandane algorithm.
    maximum_sub_array_sum();
    longest_consecutive_sequence();
    longest_subarray_with_equal_to_0_and_one();


    return 0;
}
