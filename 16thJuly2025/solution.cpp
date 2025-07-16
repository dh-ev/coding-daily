#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}
int main()
{
    cout<<"----- Day 5 Challenge: Binary Search – Find Element -----" << endl << endl;
    int n, target;
    vector<int> arr;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i=0;i<n;i++){
        cout << "Enter the number in index " << i << ": ";
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << endl << "Enter the target: ";
    cin >> target;
    
    cout << endl << endl << "Binary Search: " << binarySearch(arr, target, 0, arr.size()-1);

    return 0;
}
