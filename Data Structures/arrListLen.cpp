// The problem: https://app.codility.com/programmers/trainings/7/arr_list_len/

#include <iostream>
#include <vector>

using namespace std;

int listSize(vector<int> &A)
{
    vector<int> myVec;
    myVec.push_back(A[0]);

    while (myVec.back() != -1)
    {
        myVec.push_back(A[myVec.back()]);
    }
    return myVec.size();
};

// better approach
int listSize2(vector<int> &A)
{
    int temp{};
    int counter{};
    while (temp != -1)
    {
        counter++;
        temp = A[temp];
    }
    return counter;
};

int main()
{
    vector<int> A = {1, 4, -1, 3, 2};
    cout << listSize(A) << endl;
    cout << listSize2(A) << endl;
    return 0;
};