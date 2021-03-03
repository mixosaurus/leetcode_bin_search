#include "solution.h"
#include <iostream>

int Solution::search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    //�����ҵ�������low��high����ȣ���midҲ����֮���
    while (low <= high) {
        int mid = (low + high) / 2;
        if (target == nums[mid]) {
            return mid;
        } else if (target < nums[mid]) {
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return -1;
}



