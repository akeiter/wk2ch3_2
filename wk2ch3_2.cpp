#include <iostream>
#include <vector>
using namespace std;

void printFactors(vector<int> in)
{
    for (int a : in)
    {
        cout << a << " ";
    }
}

int main()
{
    int pvalue = 0;
    vector<int> factors;

    while (pvalue < 1)
    {
        cout << "Enter a positive value: ";
        cin >> pvalue;
    }

    for (int i = 1; i <= pvalue; i++)
    {
        if (pvalue % i == 0)
        {
            factors.push_back(i);
        }
    }

    printFactors(factors);

}