
#include "testlib.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int max_val = atoi(argv[1]);
    int n = rnd.next(1, max_val);
    int l = rnd.next(1, n);
    int r = rnd.next(l, n);

    cout << n << " " << l << " " << r << endl;

    for (int i = 0; i < n; ++i) {
        int val = rnd.next(-100, 100);
        cout << val << " ";
    }
    cout << endl;

    return 0;
}