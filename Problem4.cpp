#include <iostream>
using namespace std;

int main()
{
    int input[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int size = sizeof(input) / sizeof(input[0]);
    int result[10] = {0};

    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (input[j] % i == 0)
            {
                result[i]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; ++i)
    {
        cout << i << ": " << result[i];
        if (i != 9)
            cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}