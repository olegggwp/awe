#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <algorithm>
using namespace std;

string filename(int n) {
    return "bigfiles/file_" + to_string(n) + ".txt";
}

int main(int argc, char const *argv[]) {

    mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

    for (int i = 0; i < 20; i++) {
        freopen(filename(i).c_str(), "r", stdin);
        freopen(filename(i).c_str(), "w", stdout);
        for(long j = 0; j < 2000000; j++) {
            cout << rnd() % 10000000 << " ";    
        }
        cout << endl;
        fclose(stdin);
        fclose(stdout);
    }
    

    return 0;
}
