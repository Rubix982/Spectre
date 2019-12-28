#include "../stdc++.h"
using namespace std;

int main(void)
{
    int t;

    cin >> t;

    while ( t-- )
    {
        int n, m;
        cin >> n >> m;

        vector<int> stackn, stackm;
        for ( int i = 0 ; i < n ; ++i )
        {
            int temp;
            cin >> temp;
            stackn.push_back(temp);
        }

        for ( int i = 0 ; i < m ; ++i )
        {
            int temp;
            cin >> temp;
            stackm.push_back(temp);
        }

        int cntr = 0;
        bool flag = false;
        for ( int i = 0 ; i < m ; ++i )
        {
            for ( int j = 0 ; j < n ; ++j, cntr++ )
            {
                stack<int> temp; 
                while ( i < m and j < n and stackn[j] != stackm[i] )
                {
                    if ( !flag )
                    {
                        cout << "Here " << j << " " << i << "\n";
                        flag = true;
                        cntr = cntr + 2 * stackn[j] + 1;
                    }
                    else cntr++;
                    temp.push(stackn[stackn.size() - 1]);
                    stackn.pop_back();
                }

                stackn.pop_back();
                stackm.pop_back();
                n--, m--;

                std::cout << "Here2\n";
                
                while ( !temp.empty() )
                {
                    stackn.push_back(temp.top());
                    temp.pop();
                }
            }
        }

        std::cout << cntr << "\n";
    }

    return 0;
}