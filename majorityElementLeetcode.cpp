#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force method

int majorityElement(vector<int> vec)
{
    int count = 0;
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return vec[i];
        }
    }
}

// Using Sorting

int majoritySorting(vector<int> vec)
{
    int size = vec.size();
    int freq = 1;
    int ans = vec[0];

    sort(vec.begin(), vec.end());

    // sorted array
    //  for(int i:vec){
    //      cout<<i<<" ";
    //  }

    for (int i = 1; i < size; i++)
    {
        ans = vec[i];
        if (ans == vec[i])
        {
            freq++;
            if (freq > size / 2)
            {
                return ans;
            }
        }
        else
        {
            freq = 1;
        }
    }
}

int main()
{
    vector<int> vec = {5, 6, 5};

    // int result = majorityElement(vec);
    int result = majoritySorting(vec);

    cout << "Majority element is = " << result;
}