#include <iostream>
using namespace std;
int main()
{

    short cont = 0, n;
    int v[1000];
    cin >> n;
    for (int i = 0; i<1000; i++)
    {
        if(cont == n)   cont=0;
        v[i] = cont;
        cout <<"N["<<i<<"] = "<< v[i]<<endl;
        cont++;
    }
    return 0;
}
