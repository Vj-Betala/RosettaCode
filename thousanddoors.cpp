//https://rosettacode.org/wiki/100_doors
#include <stdc++.h>

using namespace std;

vector<int> isOpen(vector<int> doors, int jump)
{
    for(int i = 0; i < doors.size(); i += jump)
    {
        if(doors[i])
        {
            doors[i] = 0;
        }
        else
        {
            doors[i] = 1;
        }
        
    }
    return doors;
}

int main()
{
    vector<int> doors;
    for(int i = 0; i < 1000; i++)
    {
        doors.push_back(0);
    }
    int n = 3;
    //cin >> n;
    for(int i = 1; i <= n; i++)
    {
        doors = isOpen(doors, i);
        for (int i = 0; i < doors.size(); i++)
        {
            cout << doors[i];
        }
        cout << endl << endl;
    }
    return 0;
}   