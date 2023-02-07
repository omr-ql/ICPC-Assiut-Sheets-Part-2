#include <iostream>
using namespace std;
int main()
{
    long long num1, num2, mod1, mod2;
    cin >> num1 >> num2;
    mod1 = num1 % 10;
    mod2 = num2 % 10;
    cout << mod1 + mod2 << endl;
}