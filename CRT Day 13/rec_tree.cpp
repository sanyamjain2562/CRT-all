#include <iostream>
using namespace std;

void recursiveTree(long long n, int level = 0) {

    // indentation for tree shape
    for(int i = 0; i < level; i++) {
        cout << "   ";
    }

    // print current value
    cout << n << endl;

    // base case
    if(n < 10) {
        return;
    }

    // recursive call
    recursiveTree(n / 10, level + 1);
}

int main() {

    long long num = 687298321;

    recursiveTree(num);

    return 0;
}