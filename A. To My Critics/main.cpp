#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if(arr[0] + arr[1] >= 10 || arr[0] + arr[2] >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        if(arr[1] + arr[2] >= 10)
        {
            cout << "YES"<<endl;
            continue;
        }
        cout << "NO" << endl;


    }
    return 0;
}
