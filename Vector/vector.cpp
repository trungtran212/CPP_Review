#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void createVector(vector<int> &v, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " | ";
    }
}

int findSum(vector<int> v)
{
    int sum = 0;
    for (int i : v)
    {
        sum += i;
    }
    return sum;
}

int findMax(vector<int> v)
{
    sort(v.begin(), v.end());
    return v.back();
}

int countX(vector<int> v, int x)
{
    int count = 0;
    for (int i : v)
    {
        if (i == x)
        {
            count++;
        }
    }
    return count;
}

void reverseVector(vector<int> &v)
{
    vector<int> temp;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        temp.push_back(v.at(i));
    }
    v.swap(temp);
}

bool findX(vector<int> v, int x)
{
    for (int i : v)
    {
        if (i == x)
        {
            return true;
        }
    }
    return false;
}

void eraseDuplicate(vector<int> &v)
{
    vector<int> temp;
    for (int i : v)
    {
        if (!findX(temp, i))
        {
            temp.push_back(i);
        }
    }
    v.swap(temp);
}