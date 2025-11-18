#include <iostream>
#include <vector>

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

void print_even(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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

    return 0;
}