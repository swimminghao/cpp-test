//
// Created by xh on 2021/8/31.
//

#ifndef FIRST_SOLUTION_H
#define FIRST_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class solution {
public:
    vector<int> ReservoirSampling(vector<int> &results, vector<int> &nums, int k) {
        // results.size(): k
        // nums.size(): N
        int N = nums.size();

        for (int i = 0; i < k; ++i) {
            results[i] = nums[i];
        }

        for (int i = k; i < N; ++i) {
            int random = rand() % i;
            if (random < k) {
                results[random] = nums[i];
            }
        }

        return results;
    }
};


#endif //FIRST_SOLUTION_H
