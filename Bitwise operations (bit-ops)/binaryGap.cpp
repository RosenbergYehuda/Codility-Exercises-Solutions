//The problem: https://app.codility.com/programmers/trainings/9/binary_gap/

#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int gap(int N)
{
    // initilize with  0
    int currentMax{};
    int counting{};
    int counter = -1;

    // convert to binary and define the langth of the binary representation
    // this part shuld be changed, becus i whant it to give me a minimum of binary representation, not a fixed one(34).
    string binaryN = bitset<34>(N).to_string();
    int size = binaryN.length();

    for (int i = 0; i < size; i++)
    {
        if (binaryN[i] == '1')
        {
            counting = 1;
        }
        if (counting == 1)
        {
            counter++;
        }
        if (binaryN[i] == '1') // maybe end of segment
        {
            currentMax = max(counter, currentMax);
            counter = -1;
        }
    }
    return currentMax;
};

// more efficient way
//space and runtime complexity are = O(binary N) //nitice this is for worst case(big O), avarege case is hakf of that.

// the func will return a vector that contains the bits that are on.(1)
// recursive implementation
vector<int> getAllPositiveBits(int N, vector<int> &positiveBits)
{
    int positiveBit, sub;
    positiveBit = log2(N);
    positiveBits.push_back(positiveBit);
    if (N > 1)
    {
        sub = pow(2, positiveBit);
        getAllPositiveBits(N - sub, positiveBits);
    };
    return positiveBits;
};


int gap2(int N)
{
    vector<int> vec;
    getAllPositiveBits(N, vec);
    int currentMax{};
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int difference = vec[i] - vec[i + 1];
        if (difference > 1)
        {
            currentMax = max(currentMax, difference);
        }
    }
    return currentMax - 1;
};

int main()
{
    cout << gap(328) << endl;
    cout << gap2(328) << endl;
    return 0;
};
