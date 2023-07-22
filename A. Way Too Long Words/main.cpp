#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        string temp2;
        if(temp.length() > 10)
        {
            int sz = temp.length() - 2;
            temp2 = temp[0] + to_string(sz) + temp[temp.length() - 1];
            cout<<temp2<<endl;
            continue;
        }
        cout<<temp<<endl;

    }
    return 0;
}
