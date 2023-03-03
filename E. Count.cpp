/*Given a string S. Print the summation of its digits.
    i/p: 1234
    o/p: 10 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; int sum=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        sum+=((int)(s[i]-'0'));
    }
    cout<<sum<<endl;
    return 0;
}
