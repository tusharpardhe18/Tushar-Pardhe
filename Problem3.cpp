#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int count = (a % 2 == 0) ? a - 1 : a;
    for (int i = 0, num = 1; i < count; ++i, num += 2)
    {
        cout << num;
        if (i < count - 1)
            cout << ", ";
    }
    cout << endl;
    return 0;
}
