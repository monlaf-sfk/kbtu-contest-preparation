#include "testlib.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int maxLength = opt<int>("len"); 

    int length = rnd.next(1, maxLength);
    for (int i = 0; i < length; ++i) {
        int digit = rnd.next(0, 9);
        cout << digit << " ";
        if (digit == 0) break; 
    }
    cout << 0 << endl;

    return 0;
}