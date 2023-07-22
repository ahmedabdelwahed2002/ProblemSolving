#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n,x;
    cin >> n >> x;
    long long dist = 0;
    for(long long i = 0; i < n; i++)
    {
        char ip;
        cin >> ip;
        long long value;
        cin >> value;
        if(ip == '+')
        {
            x = x + value;
        }
        else
        {
            if( x < value)
                dist ++;
            else
            {
                x = x - value;
            }
        }

    }
    cout << x << " " << dist;
    return 0;
}
