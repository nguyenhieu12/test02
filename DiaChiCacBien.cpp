#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int a[3];
    char b[3];
    int n;
    for(int i = 0;i < 3;i++){
        cout << &a[i] << " ";
    }
    cout << endl;
    for(int j = 0;j < 3;j++){
        cout << (void*)&b[j] << " ";
    }
    cout << &x << " " << &y << " " << &n;
    return 0;
}
// địa chỉ các phần tử mảng a cách nhau 4 bytes (do có kiểu là int)
// địa chỉ các biến mảng b cách nhau 1 byte (do có kiểu là char)
// địa chỉ của các phần tử mảng a và b thay đổi sau khi khai báo thêm các biến x, y ,n
