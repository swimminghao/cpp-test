#include <iostream>
#include "solution.h"
int main() {
    clock_t startTime,endTime;
    startTime = clock();
    std::cout << "Hello, World!" << std::endl;
    solution s;

    vector<vector<string>> v = s.solveNQueens(13);
    cout<<v.size()<<endl;
    endTime = clock();
    cout << "Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}
