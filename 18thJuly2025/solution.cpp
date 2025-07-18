#include <bits/stdc++.h>
using namespace std;

void isValidParantheses(string s){
    stack<char> st;
    st.push('#');
    for (char i : s){
        if (i == '{' || i == '[' || i == '(') st.push(i);
        else{
            if (i == '}'){
                char j = st.top();
                st.pop();
                if (j != '{'){
                    cout << "Invalid parantheses set.";
                    return;
                }
            }
            if (i == ']'){
                char j = st.top();
                st.pop();
                if (j != '['){
                    cout << "Invalid parantheses set.";
                    return;
                }
            }
            if (i == ')'){
                char j = st.top();
                st.pop();
                if (j != '('){
                    cout << "Invalid parantheses set.";
                    return;
                }
            }
        }
    }
    if (st.top() == '#'){
        cout << "Valid parantheses set";
        return;
    }
    else{
        cout << "Invalid parantheses set";
        return;
    }
}

int main()
{
    string s;
    cout << "----- Day 7 Challenge: Valid Parentheses – Stack Based -----" << endl << endl;
    cout << "Enter parantheses set: ";
    cin >> s;
    cout << endl;
    isValidParantheses(s);
    return 0;
}
