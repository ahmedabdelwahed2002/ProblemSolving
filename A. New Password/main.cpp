#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    string pass = "";
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k && flag == 0; j++)
        {
            if(j == k-1)
                flag = 1;
            char temp = ('a'+j%26);
            //cout << "temp : " << temp<<endl;
            pass = pass +  temp;
            i++;
        }
        if(i >= n)
            break;
        char temp = ('a'+i%26);
        pass = pass + temp;
    }
    cout << pass;

    return 0;
}
