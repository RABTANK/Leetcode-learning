#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {
        long long result = 0;
        for (size_t i = 0; i < hours.size(); i++)
        {
            for (size_t j = i + 1; j < hours.size(); j++)
            {
                if ((hours[i] + hours[j]) % 24 == 0)
                {
                    result++;
                }
            }
        }
        return result;
    }
};
int main()
{
    cout << "Hello World!";
    return 0;
}