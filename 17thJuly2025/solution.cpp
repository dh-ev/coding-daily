#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "----- Day 6 Challenge: Count Even Numbers in an Array -----" << endl << endl;
    cout << "Enter size of array: ";
    cin >> n;
    int count = 0;
    for (int i=0;i<n;i++){
        int num;
        cout << "Enter integer in index " << i << ": ";
        cin >> num;
        if (num%2 == 0) count++;
    }
    cout << endl << endl << "Count Even Numbers in an Array: " << count;

    return 0;
}
