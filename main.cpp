#include <iostream>

using namespace std;

string calc(int point) {
    if (point < 0 || point > 10) {
        return "error";
    }
    if (point >= 4) {
        return "pass";
    } else {
        return "fail";
    }
}

int main() {
    int point;
    cin >> point;
    cout << calc(point);
    return 0;
}
