#include <iostream>
using namespace std;
int main()
{
    /* To calulate the sum of series */
    int i, n;
    float sum = 0;
    cout << "Enter the value of n";
    cin >> n;

    for (i = 1; i <= n; i++)

        /* code */
        sum += 1.0 / i;

    cout << "Sum is:" << sum;

    return 0;
}
