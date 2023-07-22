#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long NOfDays, SellOut;
    cin >> NOfDays >> SellOut;
    vector <pair<long long, long long>> v(NOfDays);
    long long sum = 0;
    for(long long i = 0 ; i < NOfDays; i++)
    {
        cin>>v[i].first>>v[i].second;
        sum += min(v[i].first, v[i].second);
    }
    priority_queue<long long> pq;
    for(long long i = 0; i < NOfDays; i++)
    {
        pq.push(min(2 * v[i].first, v[i].second) - min(v[i].first, v[i].second));
    }
    while(SellOut --)
    {
        sum += pq.top();
        pq.pop();
    }
    cout << sum;
    return 0;
}
