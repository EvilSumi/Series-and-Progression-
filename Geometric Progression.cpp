#include <iostream>

using namespace std;

int main()
{
    int a, r;
    cout<< "Enter first Digit: ";
    cin >> a ; // Get the starting number (a) and the common ratio (r) from the user

    cout<< "Enter Common Ratio: ";
    cin>> r;

    int n;
    cout<< "Enter Maximum Term: ";
    
    cin >> n; // Get the maximum number to print

    // Print the first number in the series
    cout << a << " ";

    // Loop through the remaining numbers in the series
    for (int i = 1; a * r < n; i++)
    {
        a *= r; // Calculate the next number in the series
        cout << a << " "; // Print the number
    }

    return 0;
}