#include <iostream>
using namespace std;

int main() {
    int S;
    cin >> S; 
   
    for (int A = 1; A <= 9; ++A) { 
        for (int B = 0; B <= 9; ++B) {  
            for (int C = 0; C <= 9; ++C) {  
                if (A + B + C == S) {  
                    cout << 100 * A + 10 * B + C << endl;  
                }
            }
        }
    }
    
    return 0;
}
