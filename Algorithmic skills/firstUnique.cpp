// The problem: https://app.codility.com/programmers/trainings/4/first_unique/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int firstUmique(vector<int> &A)
{
  // mapping the values and there appearance
  unordered_map<int, int> umap;
  for (int i = 0; i < A.size(); i++)
  {
    if (umap.find(A[i]) == umap.end())
    {
      umap[A[i]] = 1;
    }
    else
    {
      // if it already appears in the array, give it a unique count
      umap[A[i]] = 5;
    }
  }
  // return the first element with that aappears only once
  for (int i = 0; i < A.size(); i++)
  {
    if (umap[A[i]] == 1)
    {
      return A[i];
    }
  }
  return -1;
};

int main()
{
  vector<int> v = {10, 13, 16, 16, 18};
  cout << firstUmique(v) << endl;
}