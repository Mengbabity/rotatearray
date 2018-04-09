#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	void warp(vector<int> nums, int s, int e)
	{
		int temp;
		while (s < e)
		{
			temp = nums[s];
			nums[s] = nums[e];
			nums[e] = temp;
			s++;
			e--;
		}

	}
	void rotate(vector<int> nums, int k) {
		int n = nums.size();
		int flag = k % n ;

		warp(nums, 0, n - 1);
		warp(nums, 0, flag - 1);
		warp(nums, flag , n - 1);
	}
};

int main()
{
	Solution s;
	s.rotate({1,2,3,4,5,6,7},3);
	system("pause");
}
