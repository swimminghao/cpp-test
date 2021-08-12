#include <iostream>
#include "solution.h"
#include "solution1.h"
int main() {
    solution s;
    solution1 s1;
//    vector<int> a = {};
    vector<int> a = {1,2,3};
    vector<int> a1 = {1,2,3};
    vector<vector<int>> b = s.subsets(a);
    vector<vector<int>> b1 = s1.subsets(a1);
    std::cout << "Hello, World!\n";
return 0;
}