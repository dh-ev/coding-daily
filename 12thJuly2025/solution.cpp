#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "--------Day 1 Challenge: Prefix Sum Basics--------" << endl << endl;
    
    vector<int> arr;
    vector<vector<int>> queries;
    int n, q;
    
    //taking inputs - arr and queries
    cout << "Enter the number of integers in array: ";
    cin >> n;
    for (int i=0;i<n;i++){
        cout << "Enter integer in index " << i << ": ";
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << endl << "Enter number of queries: ";
    cin >> q;
    
    for (int i=0;i<q;i++){
        cout << "Enter query " << i+1 << ": ";
        int l, r;
        cin >> l;
        cin >> r;
        queries.push_back({l, r});
    }
    
    //calculating the cumulative sum of every index
    vector<int> cumulative_sum = {0};
    for (int i=0;i<n;i++){
        cumulative_sum.push_back(cumulative_sum[i] + arr[i]);
    }
    
    vector<int> answer;
    for (int i=0;i<q;i++){
        answer.push_back(cumulative_sum[queries[i][1]+1] - cumulative_sum[queries[i][0]]);
    }
    
    cout << endl << "Prefix sums: ";
    for (int i=0;i<q;i++){
        cout << answer[i] << " ";
    }
    

    return 0;
}
