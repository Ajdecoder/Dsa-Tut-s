
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        // Selection sort algorithm
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] < nums[min])
                {
                    min = j;
                }
            }
            swap(nums[min], nums[i]);
        }
        return nums;
    }
};

int main()
{
    // Test the sortArray function
    vector<int> nums = {4, 2, 7, 1, 5};

    Solution solution;
    vector<int> sortedNums = solution.sortArray(nums);

    cout << "Sorted Numbers: ";

    cout << "{ ";
    for (int num : sortedNums)
    {
        cout << num << " ";
    }
    cout<< "}";
    return 0;
}
