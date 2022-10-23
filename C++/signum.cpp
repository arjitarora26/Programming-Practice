#include<iostream>
using namespace std;

int signum(double x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    double num;
    cin >> num;
    cout << signum(num) << '\n';
}
