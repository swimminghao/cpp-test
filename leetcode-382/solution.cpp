#include <iostream>
#include "solution.h"

void fun(int i){
    cout<< i;
}
int main() {
    solution s;

//    vector<int> a = {};
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> result(5,0);
    vector<int> b = s.ReservoirSampling(result, a, 3);
    for_each(b.begin(),b.end(),fun);
    cout<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}