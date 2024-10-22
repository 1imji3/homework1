#include <iostream>
#include <cmath> 
using namespace std;

void printSubset(string S, int bits) {
    cout << "{";
    cout << "[";
    for (int i = 0; i < S.length(); ++i) {
        // 如果 bits 的第 i 位是 1，則輸出 S 中的第 i 個元素
        if (bits & (1 << i)) {
            cout << S[i] << "";
        }
    }
    cout << "]";
    cout << "}";
}


void powerset(string S, int x) {
    int n = x;
    int totalSubsets = pow(2, n);

    
    for (int bits = 0; bits < totalSubsets; ++bits) {
        printSubset(S, bits);
    }// 從 0 到 2^n - 1 的所有數字，並輸出對應的子集
}

int main() {
    int x , times;
    string S ; 
    cout << "輸入集合大小:" << endl;
    cin >> x;
    cout << "輸入元素:" << endl;
    cin >> S;
    cout << "Powerset: " << endl;
    powerset(S , x);
    return 0;
}
