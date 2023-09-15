using namespace std;
#include <iostream>

int main() {
    int limit;

    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Even numbers from 1 to " << limit << ":" << endl;
    for (int i = 2; i <= limit; i += 2) {
        cout << i << endl;
    }

    return 0;
}
