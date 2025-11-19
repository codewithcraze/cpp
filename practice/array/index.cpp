#include <iostream>
#include <vector>
#include <climits>
#include <map>
#include <utility>

using namespace std;

void find_max()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Element in an array is " << max << endl;
}

void find_min()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Element in an array is " << min << endl;
}

void sum_all()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all the elements is " << sum << endl;
}

void average()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    int average = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    average = sum / arr.size();
    cout << "Average of all the elements " << average << endl;
}

void count_given_number_frequency()
{
    vector<int> arr = {1, 2, 1, 1, 5, 6, 1, 1, 9, 10};
    int freq = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            freq++;
        }
    }

    cout << "The frequency of 1 is " << freq << endl;
}

void is_sorted()
{
    vector<int> arr = {1, 10, 3, 4, 5, 6};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            continue;
        }
        else
        {
            cout << "Not an sorted array" << endl;
            break;
        }
    }
}

void reverse_an_array()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[arr.size() - 1 - i]);
    }
    for (int num : arr)
    {
        cout << num << " " << endl;
    }
}

void find_index()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Index is: " << i << endl;
            break;
        }
    }
}

bool is_arrays_equal(vector<int> arr1, vector<int> arr2, int i)
{
    if (arr1.size() != arr2.size())
        return false;
    if (i == arr1.size())
        return true;
    if (arr1[i] != arr2[i])
        return false;
    return is_arrays_equal(arr1, arr2, i + 1);
}

void print_even()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void print_odd()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void count_even_odd()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd = 0;
    int even = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Odd Count " << odd << " Even Count " << even << endl;
}

void second_largest()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int first_largest = arr[0];
    int second_largest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first_largest)
        {
            second_largest = first_largest;
            first_largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < first_largest)
        {
            second_largest = arr[i];
        }
    }
    cout << "Second Largest is " << second_largest << endl;
}

void second_smallest()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int first_smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < first_smallest)
        {
            second_smallest = first_smallest;
            first_smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] > first_smallest)
        {
            second_smallest = arr[i];
        }
    }
    cout << "Second Smallest is " << second_smallest << endl;
}

void largest_and_smallest_one_scan()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Largest " << largest << " Smallest " << smallest << endl;
}

void remove_duplicate()
{
    vector<int> arr = {1, 2, 2, 4, 4, 6, 7, 8, 9, 10};
    int idx = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[idx - 1]){
            arr[idx] = arr[i];
            idx++;
        }
    }

    // Print unique elements
    for (int i = 0; i < idx; i++){
        cout << arr[i] << " ";
    }
}

void remove_duplicate_from_unsorted_order(){
    map<int, int> mp;
    vector<int> arr = {1,2,2,0,0,4,5,2,2,5,3,6,7,6,9};
    vector<int> result;
    for(int i = 0; i < arr.size(); i++){
        if(mp.find(arr[i]) != mp.end()){
            result.push_back(arr[i]);
            mp[arr[i]] = 1;
        }
    }
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;

}

void move_all_zeros_to_end(){
    vector<int> arr = {1,1,1,0,1,2,0,2,20,0,23};
    int j = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < arr.size()){
        arr[j] = 0;
        j++;
    }
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}


void count_frequency(){
    vector<int> arr = {1,2,3,4,5,6,6,2,3,25,6,3,2,1};
    map<int, int> mp;
    cout << "Frequency count" << endl;
    for(int i = 0; i < arr.size(); i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = 1;
        }else{
            mp[arr[i]]++;
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
}

void missing_number(){
    vector<int> arr = {1,2,3,4,6,7,8,9,10};
    int missing;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    missing = ((arr.size() + 1) * (arr.size() + 2))/ 2 - sum;
    cout << "Missing Number is ";
    cout << missing << endl;
}   



void rotate_array_by_one(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int key = arr[0];
    for(int i = 0; i < arr.size(); i++){
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = key;
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

void rotate_array_by_K(int k){
    vector<int> arr = {1,2,3,4,5,6,7};
    cout << "Rotate an array by k" << endl;
    k = k % arr.size();
    for(int i = 0; i < k; i++){
        int key = arr[0];
        for(int j = 0; j < arr.size(); j++){
            arr[j] = arr[j + 1];
        }
        arr[arr.size() - 1] = key;
    }

    for(int num : arr){
        cout << num << " ";
    }

}


void find_longest_prefix_of_identical_number(){
     vector<string> arr = {"123", "1234", "12345"};
     string prefix = arr[0];
     for (int i = 1; i < arr.size(); i++) {
         int j = 0;
         while (j < prefix.size() && j < arr[i].size() && prefix[j] == arr[i][j]) {
               j++;
         }
         prefix = prefix.substr(0, j);
         if (prefix.empty()) break;
     }
     cout << "Longest identical prefix: " << prefix << endl;
}



void merge_two_sorted_array(){
    vector<int> a1 = {2,4,6,8,10};
    vector<int> a2 = {1,3,5,7,9};
    vector<int> newArr;

    int i = 0;
    int j = 0;

    while(i < a1.size() && j < a2.size()){
        if(a1[i] < a2[j]){
            newArr.push_back(a1[i]);
            i++;
        }else{
            newArr.push_back(a2[j]);
            j++;
        }
    }

    while(i < a1.size()){
        newArr.push_back(a1[i]);
        i++;
    }

    while(j < a2.size()){
        newArr.push_back(a2[j]);
        j++;
    }

    for(int num : newArr){
        cout << num << " ";
    }
}

void separate_even_and_odd_number(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout << endl;
    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }

    cout << "Odd Numbers." << endl;
    for(int num : odd){
        cout << num << " ";
    }
    cout << endl;
    cout << "Even Numbers" << endl;
    for(int num : even){
        cout << num << " ";
    }
    cout << endl;
}


void find_pairs_to_target(int target){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    vector<pair<int, int>> pairs;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                pairs.push_back({arr[i], arr[j]});
            }
        }
    }
    for(auto & it : pairs){
        cout << it.first << " " << it.second << endl;
    }
}


void count_number_greater_than_target(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 2;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
         if(arr[i] > target){
            count++;
         }
    }

    cout << "Count of greater number " << count << endl;

}

int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1, 2, 4};
    find_max();
    find_min();
    sum_all();
    average();
    count_given_number_frequency();
    is_sorted();
    reverse_an_array();
    find_index();
    if (is_arrays_equal(arr1, arr2, 0))
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
    print_even();
    print_odd();
    count_even_odd();
    second_largest();
    second_smallest();
    largest_and_smallest_one_scan();
    remove_duplicate();
    remove_duplicate_from_unsorted_order();
    move_all_zeros_to_end();
    count_frequency();
    missing_number();
    rotate_array_by_one();
    rotate_array_by_K(3);
    find_longest_prefix_of_identical_number();

    merge_two_sorted_array();
    separate_even_and_odd_number();

    // Brute force approach.
    find_pairs_to_target(9);


    count_number_greater_than_target();

    return 0;
}