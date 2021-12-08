#include <iostream>
#include "solution.h"

int main()
{
    solution s;
    vector<vector<int>> a = {{1, 2},
                             {1, 3},
                             {2, 4}};
    std::cout << s.possibleBipartition(4, a) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}