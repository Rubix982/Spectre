#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str1 = "", str2 = "";
    cin >> str1 >> str2;
    if ( str1.size() > str2.size() ) swap(str1, str2);
    unsigned long long ans = 0;
    for ( int i = 0 ; i < str1.size() ; ++i ) if ( str1[i] != str2[i] ) ans++;
    cout << ans + (str2.size() - str1.size()) << "\n";
    return 0;
}