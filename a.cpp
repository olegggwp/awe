#include <bits/stdc++.h>

using namespace std;

unsigned long long ack(int n, int m) {
    if (n == 0) {
        return m+1;
    }else if(m == 0) {
        return ack(n-1, 1);
    }else{
        return ack(n-1, ack(n, m-1));
    }
}

int main(int argc, char* argv[]) {    
    int n1 = stoi(argv[1]);
    int n2 = stoi(argv[2]);

    // cout << "HI" << endl;
    cout << ack(2, n1) << endl;
    cout << ack(2, n2) << endl;
    return 0;
}