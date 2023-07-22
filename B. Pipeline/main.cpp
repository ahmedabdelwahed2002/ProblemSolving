#include <iostream>

using namespace std;
long long sum (long long k)
{
    return(k*(k+1) / 2);
}
int main()
{
    long long n,k;
    cin >> n >> k;
    if (n == 1)
        cout << 0;
    else if(n < k)
        cout << 1;
    else {
        k--;
        n--;
        if (sum(k) < n)
        {
            cout << -1;
            return 0;
        }
        else {

        }
    }

    return 0;
}
