#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If only one disk, move it directly
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary, using destination as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;  // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the function to solve Tower of Hanoi
    towerOfHanoi(n, 'A', 'C', 'B');  // A is source, C is destination, B is auxiliary

    return 0;
}
