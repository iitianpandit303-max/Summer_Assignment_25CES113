#include <iostream>
using namespace std ;

int main()
 {
    string s;
    cin >> s;

    string ans = "";

    for(int i = 0; i < s.length(); i++)
     {
        int count = 1;

        while(i + 1 < s.length() && s[i] == s[i + 1])
         {
            count++;
            i++;
        }

        ans += s[i];
        ans += char(count + '0');
    }

    cout << "Compressed String = " << ans;

    return 0 ;
}