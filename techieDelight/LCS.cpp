#include "../bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;

// Writes to output all the common sub-sequence strings of the two strings entered

int main(void)
{

    string str1 = "", str2 = "";
    vector<string> v1, v2;
    cin >> str1 >> str2;

    for ( int i = 0; i < ( 1 << str1.size() ) ; ++i )
    {
        string temp = "";

        for ( int j = 0 ; j < str1.size() ; ++j )
        {
            if ( ( i & ( 1 << j)) > 0 ) 
            {
                int t = 0, s = (i & (1 << j));

                while ( s > 1 )
                {
                    s >>= 1;
                    t++;
                }

                temp = temp + str1[t];
            }
        }
        v1.push_back(temp);
    }

    for (int i = 0; i < (1 << str2.size()); ++i)
    {
        string temp = "";

        for (int j = 0; j < str2.size(); ++j)
        {
            if ((i & (1 << j)) > 0)
            {
                int t = 0, s = (i & (1 << j));

                while (s > 1)
                {
                    s >>= 1;
                    t++;
                }

                temp = temp + str2[t];
            }
        }
        v2.push_back(temp);
    }

    set<string> s;
    ull maxx = 0;

    for ( int i = 0 ; i < v1.size() ; ++i )
    {
        for ( int j = 0 ; j < v2.size() ; ++j )
        {
            if ( v1[i] == v2[j] and s.find(v1[i]) == s.end() )
            {
                s.insert(v1[i]);
                if ( maxx < v1[i].size() )
                    maxx = v1[i].size();
            }
        }
    }

    for ( const auto & value : s ) 
        if ( value.size()  == maxx )
            cout << value << " ";
    cout << "\n";

    return 0;
}