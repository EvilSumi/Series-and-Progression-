#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, d;
    cout<< "Enter first Digit: ";
    cin >> a;  // Get the starting number (a) and the common difference (d)
    cout<< "Enter Common Difference: ";
    cin>>d;
    
    int n;
    cout<< "Enter nth term: ";
    cin>>n;

    // Print the first number in the series
    cout << a << " ";

    // Loop through the remaining terms in the series
    for (int i = 2; i <= n; i++)
    {
        a += d; // Calculate the next number in the series
        cout << a << " "; // Print the number
    }

    return 0;
}
