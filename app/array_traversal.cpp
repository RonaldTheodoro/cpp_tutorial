#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20,30,40};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    for (int x : arr) {
        cout << x << " ";
    }
    return EXIT_SUCCESS;
}