#include <bits/stdc++.h>
using namespace std;

int maximumSumSubArray(vector<int> arr, int size){
    int maxSum = 0;
    for (int i=0;i<size;i++){
        maxSum += arr[i];
    }
    int windowSum = maxSum;
    for (int i=size;i<arr.size();i++){
        windowSum += arr[i] - arr[i-size];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main()
{
    cout << "-----Day 2 Challenge: Sliding Window – Maximum Sum Subarray-----" << endl << endl;
    int n, size;
    vector<int> arr;
    cout << "Enter size of integer array: ";
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cout << "Enter number in " << i << " index: ";
        cin >> num;
        arr.push_back(num);
    }
    
    cout << endl << "Enter target size: ";
    cin >> size;
    
    cout << endl << "Maximum Sum Subarray size is: " << maximumSumSubArray(arr, size);
    
    return 0;
}
