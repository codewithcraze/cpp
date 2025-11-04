#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

void maxMin()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max;
        cout << endl;
}

void reverse() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    for(int i = 0; i < n/2; i++){
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
    }
        cout << endl;
}


bool isShorted(){
    int array[] = {1,2,3,20,4,5,6};

    for(int i = 0; i < 5; i++){
        if(array[i + 1] > array[i]){
            continue;
        }else{
            return false;
        }
    }

        cout << endl;
    return true;
}

pair<int, int> secondLargest(){
    int array[] = {1,2,3,4,5,7};

    int largest = array[0];
    int secondLargest = array[0];

    for(int i = 0; i < 6; i++){
        if(array[i] > largest){
            secondLargest = largest;
            largest = array[i];
        }else if(secondLargest > array[i] && array[i] < largest){
            secondLargest = array[i];
        }
    }

        cout << endl;
    return {largest, secondLargest};
}


void moveAllZerosToEnd(){
    int array[] = {0, 1, 0, 1, 0, 1 , 1};
    vector<int> v;
    for(int i = 0; i < 7; i++){
        if(array[i] != 0){
            v.push_back(array[i]);
        }
    }
    for(int i = 0; i < 7 - v.size(); i++){
        v.push_back(0);
    }
    for(int i = 0; i < 7; i++){
        cout << v[i];
    }

        cout << endl;
}


void removeDuplicatesFromTheSortedArray(){
    set<int> s;
    int array[] = {1,2,3,4,5,5,6,6,7};

    for(int i = 0; i < 9; i++){
        s.insert(array[i]);
    }

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it;
    }

    cout << endl;


    int index  = 0;

    for(int i = 0; i < 9; i++){
        if(array[i] != array[i - 1]){
            array[index] = array[i];
            index++;
        }
    }

}

void missingNumber(){
    int array[] = {1,2,3,4,5,6,8};
    int arrayLength = 7;
    int actualLength = arrayLength + 1;
    int correctSum = (actualLength * (actualLength + 1))/2;
    for(int i = 0; i < 7; i++){
        correctSum -= array[i];
    }
    cout << correctSum;
}


void countFrequency(){
    vector<int> array = {1,2,2,3,4,5,6,6,6,7,3,3};
    map<int, int> s;
    
    for(int i = 0; i < array.size(); i++){
        if(s.find(array[i]) != s.end()){
            s[array[i]]++;
        }else{
            // Add value.
            s.insert({array[i], 1});
        }
    }

    for(auto &v : s){
        cout << v.first << " " << v.second << endl;
    }

}
void twoSum(){
    vector<int> array = {1,2,3,4,5,6,7};
    int sum = 9;
    unordered_map<int, int> mp;
    // Find two Sum.
    for(int i = 0; i < array.size(); i++){

    }


}

void rotateAnArray(){
    vector<int> array = {1,2,3,4,5,6};
    int times = 2 % array.size();
    int n = array.size();
    // // to prevent max value.
    // // Reverse all array.
    // reverse(array.begin(), array.end());
    // // Reverse first k elment.
    // reverse(array.begin(), array.begin() + times);
    // // Reverse n - k rest elements.
    // reverse(array.begin() + times, array.end());
    // another approach using extra array.
    vector <int> newArr;
    for(int i = n - times; i < n; i++){
        newArr.push_back(array[i]);
    }
    for(int i = 0; i < n - times; i++){
        newArr.push_back(array[i]);
    }
    for(auto &c : newArr){
        cout << c;
    }
}


pair<int, int> majorityElement(){
    vector<int> array = {1,2,3,4,2,5,2,2,2,52,52,52};
    int n = array.size();
    map<int, int> mp;

    pair<int, int> answer = {0, 0};
    
    for(int i = 0; i < n; i++){
        if(mp.find(array[i]) != mp.end()){
            // Exits.
            mp[array[i]]++;
        }else{
            mp.insert({array[i], 1});
        }
    }

    for(auto &it : mp){
        if(it.second > answer.second){
            answer.second = it.second;
            answer.first = it.first;
        }
    }

    return answer;

}

int kandaneAlgo(){
    vector<int> arr = {4, -1, 2, 1, -10, 5, 15};
    int currentSum = arr[0];
    int maxSum = arr[0];
    for(int i = 0; i < arr.size(); i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}


void element_appears_onces(){
    vector<int> arr = {1,2,3,4,5,5,1,3,5,1,3,5,7};

    map<int, int> mp;

    for(int i = 0; i < arr.size(); i++){
        if(mp.find(arr[i]) != mp.end()){
            mp[arr[i]]++;
        }else{
            mp.insert({arr[i], 1});
        }
    }
    // Cout that appears onces.
    for(auto &it : mp){
        if(it.second == 1){
            cout << it.first << endl;
        }
    }
}

void xor_pair_approach(){
    vector<int> array = {1,2,2,1,4,4,5};
    int x = 0;
    for(int it : array){
        x ^= it;
    }
    cout << x;
}

void merge_two_sortedArray(){
    vector<int> a1 = {1,4,6,8,10};
    vector<int> a2 = {0,3,5,7,9};
    vector<int> merge;

    int i = 0; int j = 0;

    while(i < a1.size() && j < a2.size()){
        if(a1[i] < a2[j]){
            merge.push_back(a1[i]);
            i++;
        }else{
            merge.push_back(a2[j]);
            j++;
        }
    }
    // Add remaining elements.
    while(i < a1.size()){
        merge.push_back(a1[i]);
        i++;
    }

    while(j < a2.size()){
        merge.push_back(a2[j]);
        j++;
    }

    // Print.
    for(int num : merge){
        cout << num << endl;
    }
}

int equilibrium_index(){
    vector<int> arr = {1, 3, 5, 2, 2 };

    int total = 0;
    for(int i = 0; i < arr.size(); i++){
        total += arr[i];
    }

    cout << total << endl;

    int leftSum = 0;

    for(int i = 0; i < arr.size(); i++){
        int rightSum = total - leftSum - arr[i];
        if(leftSum == rightSum){
            return arr[i];
        }
        leftSum += arr[i];
    }

    return -1;

}



int main()
{
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // maxMin();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // reverse();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // cout << isShorted();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // cout <<  secondLargest().first << " " << secondLargest().second;
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // moveAllZerosToEnd();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // removeDuplicatesFromTheSortedArray();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // missingNumber();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // countFrequency();
    // cout << "++++++++++++++++++++++++++++++++" << endl;
    // twoSum();
    cout << "++++++++++++++++++++++++++++++++" << endl;
    rotateAnArray();
    cout << endl;
    cout << "++++++++++++++++++++++++++++++++" << endl;
    cout << majorityElement().first << "->" << majorityElement().second << endl;    
    cout << "++++++++++++++++++++++++++++++++" << endl;
    // Kandane Algorithm.
    cout << "Kandance Algo Answer" << kandaneAlgo() << endl;
    cout << "Find element that apprears onces while other twice." << endl;
    element_appears_onces();

    cout << "Xor pair approach" << endl;
    xor_pair_approach();

    cout << "Merge two sorted array" << endl;
    merge_two_sortedArray();

    cout << "Equilibrium index(sum of element on left == sum of element on right)" <<endl;
    cout << equilibrium_index();


    return 0;
}




/*
    XOR. (^)
    A ^ A => 0
    0 ^ A => A
    
    // Pair Element cancel each other.
    // Rest the number we got our answer.
*/