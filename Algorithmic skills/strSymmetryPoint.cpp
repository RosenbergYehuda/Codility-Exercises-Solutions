//The problem: https://app.codility.com/programmers/trainings/4/str_symmetry_point/

#include <iostream>

using namespace std;

int reversal(string &A)
{
    int len = A.length();
    if (len %2 == 0)
    {
        return -1;
    }
    if(len == 1)
    {
        return 0;
    }
    int mid = len /2;
    for(int i = 1;i<= mid; i++)
    {
        if(A[mid + i] != A[mid - i])
        {
        return -1;
        }
    }
        return mid;
};

int main()
{
    string A = "X";
    cout<<reversal(A);
    return 0;
}