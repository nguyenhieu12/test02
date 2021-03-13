#include <iostream>

using namespace std;

int factorial(int x)
{
    cout << "x = " << x << " at " << &x << endl;
    if(x==1) return 1;
    return x * factorial(x-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
// giá trị x giảm dần từ n -> 0 và địa chỉ của x giảm dần
