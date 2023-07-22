#include <iostream>

using namespace std;

int main()
{
    int price;
    cin>> price;
    int cost = price;
    int burel;
    cin>>burel;
    int ModPrice = price%10;
    int n = 1;
    while(ModPrice != burel&&ModPrice!=0)
    {
        price += cost;
        n++;
        ModPrice = price%10;
    }
    cout<<n;

    return 0;
}
