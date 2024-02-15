#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string filename = "bigfiles/file_" + string(argv[1]) + ".txt";
    freopen(filename.c_str(), "r", stdin);
    freopen(filename.c_str(), "a", stdout);

    for (unsigned long long i = 0; i < stoull(argv[2]); i++) {
        long long value;
        cin >> value;
        value *= 2;
        cout << value << " ";
    }
    cout << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
