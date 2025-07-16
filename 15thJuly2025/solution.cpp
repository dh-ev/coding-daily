#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSumUsingHash(vector<int> arr, int target){
    unordered_map<int, int> numMap;
    for (int i=0;i<arr.size();i++){
        if (numMap.count(target - arr[i])) return {numMap[target-arr[i]], i};
        numMap[arr[i]] = i;
    }
    return {};
}

int main()
{
    cout<<"----- Day 4 Challenge: Two Sum – Using Hashing -----" << endl << endl;
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
    cout << endl << "Enter the target sum: ";
    cin >> target;
    
    cout << endl << endl << "Two Sum – Using Hashing: " << twoSumUsingHash(arr, target).first << " " << twoSumUsingHash(arr, target).second;

    return 0;
}
