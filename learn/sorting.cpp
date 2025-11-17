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
        for(int j = 0; j < arr.size() - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                isSwaped = true;
            }
        }
        if(!isSwaped){
            break;
        }
    }
    for(int c : arr){
        cout << c << " ";
    }
}   


void selection_sort(){
    vector<int> arr = {5,1,4,2,8};

    for(int i = 0; i < arr.size(); i++){
        int smallestIndex = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        // Swap
        swap(arr[i], arr[smallestIndex]);

    }
    for(int i : arr){
        cout << i;
    }
}


/*
    Algo.
    Key = arr[1];
    j is one less than this like i - 1;
    j >= 0 && arr[j] > key;
    arr[j + 1] = arr[j];
    j--;

    arr[j] = key;

    */

void insertion_sort(){
    vector<int> arr = {5,1,4,2,8};
    for(int i = 1; i < arr.size(); i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = key;
    }
    for(int i : arr){
        cout << i << " ";
    }
}

void nth_largest_from_the_last(){
    vector<int> arr = {1,2,3,4,5,5,6,6};
    int nth = 3;
    int n = arr.size();

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] > arr[i - 1]){
            nth--;
        }
        if(nth == 0){
            cout << arr[i];
            break;
        }
    }
}

void dutch_national_flag_algorithm(){
    vector<int> arr = {2, 0, 0, 1, 2, 0, 0, 2, 1,0, 0,};
    int low = 0; // Before it everything is 0.
    int mid = 0; // Point for current element.
    int high = arr.size() - 1; // Point for after that 2 only.

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int c : arr){
        cout << c;
    }

}

void merge(vector <int> &arr, int left, int mid, int right){
    
    int i = left;
    int j = mid + 1;
        
    

}

void merge_sort(vector <int> & arr, int left, int right){
    if(left >= right){
        return;
    }

    int mid = left + (right - left) / 2;
    merge_sort(arr, left , mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}


int main(){

    vector<int> arr = {8, 3, 5, 4, 7, 6, 1, 2};
    binary_search();
    cout << endl;
    sort_an_array();
    cout << endl;
    merge_two_sorted_array();
    cout << endl;
    bubble_sort();
    cout << endl;
    selection_sort();
    cout << endl;
    insertion_sort();
    cout << endl;
    nth_largest_from_the_last();
    cout << endl;
    dutch_national_flag_algorithm();
    cout << endl;
    merge_sort(arr, 0, arr.size() - 1);


    return 0;
}
/*


   Algorithm	    Best Case	 Average	   Worst	    Stable	    Easy to Implement Notes
✅ Bubble Sort	   O(n)	         O(n²)	      O(n²)	      ✅ Yes	     ✅ Compares adjacent elements; slow but simple
✅ Insertion Sort   O(n)	         O(n²)	      O(n²)	      ✅ Yes	     ✅ Good for small or nearly sorted arrays
✅ Selection Sort   O(n²)	     O(n²)	      O(n²)	      ❌ No	     ✅ Simple but inefficient



⚡ Merge Sort	  O(n log n)	O(n log n)	 O(n log n)	 ✅ Yes	    ⚙️ Medium	Uses divide and conquer
⚔️ Quick Sort	   O(n log n)	 O(n log n)	  O(n²)	      ❌ No	     ⚙️ Medium	Very fast in practice
🏗️ Heap Sort	    O(n log n)	  O(n log n)   O(n log n)  ❌ No       ⚙️ Medium	Uses binary heap structure

*/