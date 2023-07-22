#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    set<char>New_set;
    int counter = 0;
    //cout << input.length();
    for(int i = 0; i < input.length(); i++)
    {
        //cout << input[i] << endl;
        if(isalpha(input[i])){
            New_set.insert(input[i]);
            counter++;
            }
    }
    //cout <<"ccc : " <<counter<<endl;
    cout <<New_set.size();
    return 0;
}
