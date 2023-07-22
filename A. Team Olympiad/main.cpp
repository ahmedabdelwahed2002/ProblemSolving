/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> prog1;
    vector <int> math2;
    vector <int> PE3;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)
            prog1.push_back(i+1);
        if(temp == 2)
            prog1.push_back(i+1);
        if(temp == 3)
            prog1.push_back(i+1);
    }
    cout << prog1.size()<<endl;
    cout << min(prog1.size(),math2.size());
    //cout << m;
    //m = min(m,(int) PE3.size());
    //cout << m;

    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prog1;
    vector<int> math2;
    vector<int> PE3;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 1)
            prog1.push_back(i + 1);
        else if (temp == 2)  // Changed to 'else if' for separate vectors
            math2.push_back(i + 1);
        else if (temp == 3)  // Changed to 'else if' for separate vectors
            PE3.push_back(i + 1);
    }
    int m = min(prog1.size(),math2.size());
    m = min(m ,(int) PE3.size());
    cout << m<<endl;
    for(int i = 0; i < m; i++)
    {
        cout << prog1[i] << " ";
        cout << math2[i] << " " ;
        cout << PE3[i]<<endl;;
    }
    return 0;
}

