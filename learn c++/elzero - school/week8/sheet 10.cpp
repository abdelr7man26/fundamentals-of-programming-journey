    #include <iostream>
    using namespace std;
    int minpositive(int nums[], int size)
    {
        int min;
        bool found = false;
        for (int i = 0; i < size; i++)
        {

            if (nums[i] > 0 && !found)
            {
                min = nums[i];
                found = true;
            }

            if (nums[i] > 0 && nums[i] < min)
            {
                min = nums[i];
            }
        }
        return min;
    }
    int main()
    {
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
    }