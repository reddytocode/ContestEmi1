#include <iostream>

using namespace std;

int numero(int n){
    return (n/10)+(n%10);
}
int main() {
    int n, l1, l2, l3, l4;
    cin >> n;
    cin >> l1 >> l2;
    cin >> l3 >> l4;
    if(n>=l1 and n <= l2 and n >= l3 and n<=l4)
        cout << "possivel" << endl;
    else cout << "impossivel" << endl;
    return 0;
}