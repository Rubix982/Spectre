#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void) {

    uint_fast64_t b, p;
    double start = 2;

    // first input 'b' is the base, second input 'p' is the precision
    cin >> b >> p;
    std::cout << "\n<------------- START ------------->\n";

    for (int i = 0; i <= 10; ++i) {

        double n = start, temp = start;
        string str = "";
        uint_fast64_t tempP = p;
        while ( tempP-- ) {
            uint64_t t = 0;
            while ( powf(b, t) < n ) t++;

            if ( powf(b, t) == n ) {
                str = "1";
                break;
            }
            --t;
            if ( str.empty() ) str += to_string(t) + ".";
            else str += to_string(t);
            n /= powf(b, t);
            n = powf(n, b);
        }
        std::cout << "\nNew method value: " << str << " obtained via new method, using log10 from math.h: " << log10(temp) << " for the number " << start <<"\n";
        start = start + 1;

    }

    return 0;
}