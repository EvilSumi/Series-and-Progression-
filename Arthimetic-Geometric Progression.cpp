#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, d, r;
    cout<< "Enter first Digit: ";
    cin >> a;  // Get the starting number (a) and the common difference (d)
    cout<< "Enter Common Difference: ";
    cin>>d;
    
    cout<< "Enter Common Ratio: ";
    cin>> r;

    int n;
    cout<< "Enter nth term: ";
    cin>>n;
    
    // Print the first term in the series
    cout << a << " ";

    // Loop through the remaining terms in the series
    for (int i = 2; i <= n; i++)
    {
        a = a * r + d; // Calculate the next term in the series
        cout << a << " "; // Print the term
    }

    return 0;
}
