#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return max(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3],
            nums[0] * nums[1] * nums[nums.size()-1]);

    }
};
int main() {
    int a[8] = { -100,-1,0,1,2,3,4,5 };
    vector<int> b(a, a + 8);
    Solution s;
    int sum = s.maximumProduct(b);
    cout << sum << endl;
    return 0;
}