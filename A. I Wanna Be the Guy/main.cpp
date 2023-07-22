#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int> New_set;
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        New_set.insert(temp);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        New_set.insert(temp);
    }
    if(New_set.size() == n)
        cout << "I become the guy.";
    else cout <<"Oh, my keyboard!";

    return 0;
}
