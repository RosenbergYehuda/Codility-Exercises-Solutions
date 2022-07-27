// The problem: https://app.codility.com/programmers/trainings/5/parity_degree/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int highest(int N)
{
    int maxPower = log2(N);
    for (int i = maxPower; i > 0; i--)
    {
        int factor = pow(2, i);
        int mod = N % factor;
        if (mod == 0)
        {
            return i;
        }
    }
    return 0;
};

int main()
{
    cout << highest(0) << endl;
    return 0;
};