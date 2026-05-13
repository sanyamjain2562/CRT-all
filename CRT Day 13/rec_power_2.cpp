#include<iostream>
using namespace std;

bool function(int n)
{
    if(n == 0)
    {
        return false;
    }

    if(n == 1)
    {
        return true;
    }

    return (n % 2 == 0) && function(n / 2);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(function(n))
    {
        cout << "The number is a power of 2";
    }
    else
    {
        cout << "The number is not a power of 2";
    }

    return 0;
}