//
// Created by xh on 2021/8/12.
//

#ifndef FIRST_SOLUTION1_H
#define FIRST_SOLUTION1_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<vector<int>> res;

class solution1 {

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // 记录走过的路径
        vector<int> track;
        backtrack(nums, 0, track);
        return res;
    }

    void backtrack(vector<int>& nums, int start, vector<int>& track) {
        res.push_back(track);
        // 注意 i 从 start 开始递增
        for (int i = start; i < nums.size(); i++) {
            // 做选择
            track.push_back(nums[i]);
            // 回溯
            backtrack(nums, i + 1, track);
            // 撤销选择
            track.pop_back();
        }
    }
};


#endif //FIRST_SOLUTION1_H
