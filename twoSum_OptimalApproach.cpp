#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
	unordered_map<int, int> hashmap;
	for(int i = 0; i < nums.size(); i++){
		int needed = target - nums[i];
		if (hashmap.find(needed) != hashmap.end()){
			return{hashmap[needed], i};
		}
		hashmap[nums[i]] = i;
	}
	return {};
}

int main(){
	vector<int> nums = {2,7,11,15};
	int target = 26;
	vector<int> result = twoSum(nums, target);
	cout<< "[" << result[0] << "," << result[1] << "]" << endl;
	return 0;
}	
