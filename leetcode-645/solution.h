//
// Created by xh on 2021/8/30.
//

#ifndef FIRST_SOLUTION_H
#define FIRST_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        int n = nums.size();
        int dup = -1;
        for (int i = 0; i < n; i++) {
            // 现在的元素是从 1 开始的
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0)
                dup = abs(nums[i]);
            else
                nums[index] *= -1;
        }
        int missing = -1;
        for (int i = 0; i < n; i++)
            if (nums[i] > 0)
                // 将索引转换成元素
                missing = i + 1;
        return {dup, missing};
    }
};


#endif //FIRST_SOLUTION_H
