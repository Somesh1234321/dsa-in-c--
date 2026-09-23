#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums) {
            int freq = 0;

            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }

            if (freq > n / 2) {
                return val;
            }
        }

        return -1;
    }
};
include <iostream>
using namespace std;
int main(){
    int nums[]= {5,10,15,20,25,30};
    int size = 6;
    int smallest = INT8_MAX;
    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }

    }
    cout << "smallest ="<< smallest <<endl;

    return 0;
}