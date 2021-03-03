#include <iostream>
#include "solution.h"
using namespace std;

//704. 二分查找
int main(){
    Solution solution;
    vector<int> nums = { -1,0,3,5,9,12 };
    cout << solution.search(nums, 9) << endl;
    system("pause");
    return 0;
}
