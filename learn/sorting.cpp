#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binary_search(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 7;
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target){
            cout << mid;
            break;
        }
        if(arr[mid] > target){
            right = mid - 1;
        }else if(arr[mid] < target){
            left = mid + 1;
        }
    }
}


void sort_an_array(){
    int arr[] = {1,24,1,42,53,2,34,22,2};
    // Size of Array 
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sorting using inbuilt function.
    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


void merge_two_sorted_array(){
    vector<int> a1 = {1,3,5,7,9};
    vector<int> a2 = {0,2,4,6,8};
    vector<int> merged;

    int i = 0; int j = 0;

    while(i < a1.size() && j < a2.size()){
        if(a1[i] > a2[j]){
            merged.push_back(a2[j]);
            j++;
        }else{
            merged.push_back(a1[i]);
            i++;
        }
    }

    while(i < a1.size()){
        merged.push_back(a1[i]);
        i++;
    }

    while(j < a2.size()){
        merged.push_back(a2[j]);
        j++;
    }

    for(int c : merged){
        cout << c << " ";
    }

}


void bubble_sort(){
    // Compare adjacent elements and swap if they are in wrong order.
    vector<int> arr = {5,1,4,2,8};

    for(int i = 0; i < arr.size() - 1; i++){
        bool isSwaped = false;
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1 ]);
                isSwaped = true;
            }
        }
        if(!isSwaped){
            break;
        }
    }


    for(int i : arr){
        cout << i << " ";
    }

}   


int main(){

    binary_search();
    cout << endl;
    sort_an_array();
    cout << endl;
    merge_two_sorted_array();
    cout << endl;
    bubble_sort();
    cout << endl;
    // selection_sort();
    // cout << endl;
    // insertion_sort();
    // cout << endl;
    // max_min();
    // cout << endl;
    // dutch_national_flag_algorithm();
    // cout << endl;
    // find_kth_smallest_element();
    // cout << endl;
    // count_sort();
    // cout << endl;

    return 0;
}
/*

   Algorithm	   Best Case	Average	      Worst	       Stable	   Easy to Implement	Notes
🫧 Bubble Sort	   O(n)	         O(n²)	      O(n²)	      ✅ Yes	     ✅ Compares adjacent elements; slow but simple
💨 Insertion Sort  O(n)	         O(n²)	      O(n²)	      ✅ Yes	     ✅ Good for small or nearly sorted arrays
🔁 Selection Sort  O(n²)	     O(n²)	      O(n²)	      ❌ No	     ✅ Simple but inefficient
⚡ Merge Sort	  O(n log n)	O(n log n)	 O(n log n)	 ✅ Yes	    ⚙️ Medium	Uses divide and conquer
⚔️ Quick Sort	   O(n log n)	 O(n log n)	  O(n²)	      ❌ No	     ⚙️ Medium	Very fast in practice
🏗️ Heap Sort	    O(n log n)	  O(n log n)   O(n log n)  ❌ No       ⚙️ Medium	Uses binary heap structure

*/