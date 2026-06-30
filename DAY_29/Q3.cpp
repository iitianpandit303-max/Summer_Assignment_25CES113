#include <iostream>
using namespace std;

int main()
 {
    string str;
    int choice;

    cout << "Enter string: ";
    cin >> str;

    do {
        cout << "\n1 Length\n2 Reverse\n3 Count Vowels\n4 Uppercase\n5 Exit\n";
        cin >> choice;

        if(choice == 1) 
        {
            int len = 0;

            while(str[len] != '\0')
                len++;

            cout << "Length = " << len;
        }
        else if(choice == 2) 
        {
            cout << "Reverse String: ";

            for(int i = str.length() - 1; i >= 0; i--)
                cout << str[i];
        }
        else if(choice == 3)
         {
            int vowels = 0;

            for(int i = 0; i < str.length(); i++) 
            {
                char ch = str[i];

                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                    vowels++;
            }

            cout << "Vowels = " << vowels;
        }
        else if(choice == 4)
         {
            for(int i = 0; i < str.length(); i++) 
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            cout << "Uppercase String = " << str;
        }

    } while(choice != 5);

    return 0;
}