#include <iostream>

int main() {
    int arr[4] = {2, 7, 11, 15};
    int result = 9;

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (arr[i] < result && arr[j] < result) {
                if (arr[i] + arr[j] == result) {
                    std::cout << arr[i] << " + " << arr[j] << " = " << result;
                    return 1;
                }
            }
        }
    }
    std::cout << "There are no 2 numbers you need.";
    return 0;
}
