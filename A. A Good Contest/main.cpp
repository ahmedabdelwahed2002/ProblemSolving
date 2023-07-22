#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    string arr[n];
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        string temp2;
        cin >> temp2;
        string temp3;
        cin >> temp3;
        int value = stoi(temp2);
        int value2 = stoi(temp3);
        if (value >= 2400 && value2 > value)
            {flag = 1;
            //break;
            }
    }
    if (flag == 1)
        cout << "YES";
    else cout << "No";

    return 0;
}
