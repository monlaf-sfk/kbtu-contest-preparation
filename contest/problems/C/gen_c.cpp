#include "testlib.h"
#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
 
    int s = atoi(argv[1]);
    cout << s << endl;

    return 0;
}