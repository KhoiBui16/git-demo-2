#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNum(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

void enterInput(int& num)
{
    cout << "Enter the number to check: ";
    cin >> num;
}

int main()
{
    int n;
    enterInput(n);
    if (isPrimeNum(n))
        cout << n << " is the prime number.";
    else
        cout << n << "is not the prime number.";
    return 0;
}