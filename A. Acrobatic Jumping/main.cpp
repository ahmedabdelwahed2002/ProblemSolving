#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int t = n;
    int steps = 0;
    if(t%2 == 0)
    {
        int current = 1;
        int i = 1;
        while (current <= n/2)
        {
            i++;
            steps++;
            current = current + i;
        }
        while(current <= n-1)
        {
            if(current == n/2)
            {
                current = current + i;
                steps ++;
            }
            else{
                if(i-1 > 1)
                    i--;
                current = current + i;
                steps ++;
            }
        }
        cout << steps + 2;
    }
    else
    {
        int current = 1;
        int i = 1;
        while (current <= n/2)
        {
            i++;
            steps++;
            current = current + i;
        }
        while(current <= n-1)
        {
            if(current == n/2)
            {
                current = current + i;
                steps ++;
            }
            else{
                if(i-1 > 0)
                    i--;
                current = current + i;
                steps ++;
            }}
        cout << steps + 2;
    }

    return 0;
}
