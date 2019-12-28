/*
https://codeforces.com/contest/1265/problem/A
*/
#include "stdc++.h"
using namespace std;

int main(void) {

    int t;

    cin >> t; 

    while( t-- ) {
        string str;
        cin >> str;

        // O(N) check
        bool flag = false;
        for ( int i = 0 ;  i < str.size() - 1; ++i ) 
        {
            if ( str[i] == str[i + 1] and str[i] != '?') 
            {
                std::cout << "-1\n";
                flag = true;
                break; 
            }
        }

        for ( int i = 0; i < str.size() ; ++i ) 
        {
            if ( str[i] == '?' and str[i + 1] == '?' )
            {
                if ( i == 0 ) 
                {
                    if ( str[i + 1] == 'a')
                        str[i] = 'b';
                    else if ( str[i + 1] == 'b')
                        str[i] = 'a';
                    else if ( str[i + 1] == 'c')
                        str[i] = 'a';
                }
                else
                {
                    if ( str[i - 1] == 'a' )
                        str[i] = 'b';
                    else if ( str[i - 1] == 'b')
                        str[i] = 'a';
                    else if ( str[i - 1] == 'c')
                        str[i] = 'b';
                }
            }
            else if ( str[i - 1] != '?' and str[i] == '?' and str[i - 1] != '?' )
            {
                if (str[i - 1] == 'a' and str[i + 1] == 'a' || (str[i - 1] == 'c' and str[i + 1] == 'c'))
                {
                    str[i] = 'b';
                }
                else if (str[i - 1] == 'b' and str[i + 1] == 'b')
                {
                    str[i] = 'a';
                }
                else if (str[i - 1] == 'a' and str[i + 1] == 'b' || (str[i - 1] == 'b' and str[i + 1] == 'a'))
                {
                    str[i] = 'c';                
                }
                else if (str[i - 1] == 'a' and str[i + 1] == 'c' || (str[i - 1] == 'c' and str[i + 1] == 'a'))
                {
                    str[i] = 'b';
                }
                else if (str[i - 1] == 'b' and str[i + 1] == 'c' || (str[i - 1] == 'c' and str[i + 1] == 'b'))
                {

                    str[i] = 'a';
                }
            }
        }

        if ( flag ) continue;
        else std::cout << str << "\n";
    }

    return 0;
}