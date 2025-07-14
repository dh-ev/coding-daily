#include <bits/stdc++.h>
using namespace std;

int firstNonRepeatingElement(vector<int> arr){
    map<int, int> freq;
    for (int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for (int i=0;i<arr.size();i++){
        if (freq[arr[i]] == 1) return arr[i];
    }
    return -1;
}

int main()
{
    cout<<"----- Day 3 Challenge: First Non-Repeating Element -----" << endl << endl;
    int n;
    vector<int> arr;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i=0;i<n;i++){
        cout << "Enter the number in index " << i << ": ";
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    cout << endl << endl << "First Non-Repeating Element: " << firstNonRepeatingElement(arr);

    return 0;
}
