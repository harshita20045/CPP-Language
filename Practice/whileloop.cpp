#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int i = 1;
    while (i <= n)

    {
        int j = 2;
        while (j <= (n - i + 2))
        {
            cout << "$";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
