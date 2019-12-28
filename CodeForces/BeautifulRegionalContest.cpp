#include "stdc++.h"
using namespace std;

int main(void)
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n < 6)
        {
            int temp;
            for (int i = 0; i < n; ++i)
                cin >> temp;
            std::cout << "0 0 0\n";
            continue;
        }

        int a[n], g = (n / 4) - 2, s = (n / 4) - 1, b = (n / 4);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        while (g + s + b != n / 2)
        {
            g--;
            if ((g + s + b) == n / 2)
            break;

            s--;
            if ((g + s + b) == n / 2)
                break;

            b--;
            if ((g + s + b) == n / 2)
                break;
        }

        while ( a[g] == a[g + 1] )
        {
            g--;
            s++;
        }

        while ( a[g + s + b] == a[g + s + b + 1])
        {    
            b--;
        }

        std::cout << g << " " << s << " " << b << "\n";
    }

    return 0;
}