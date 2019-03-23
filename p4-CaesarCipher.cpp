#include <iostream>

using namespace std;

int main()
{

    int n, rec;
    string s;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin, s);
        cin >> rec;
        cin.ignore();
        for(int i=0; i < (int)s.size(); i++)
        {
            if(s[i]-rec  < 'A')
            {
                cout << (char)(s[i]+26-rec);
            }else cout << (char)(s[i]-rec);

        }
        cout << endl;
    }
    return 0;
}