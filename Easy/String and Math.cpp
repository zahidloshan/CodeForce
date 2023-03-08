#include <iostream>
#include <string>
using namespace std;
int main() {

    string expr;
    cin >> expr;
    int numbers[100];

    int num = 0;
    int index = 0;

    for (char c : expr) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        } else if (c == '+') {
            numbers[index++] = num;
            num = 0;
        }
    }

    numbers[index] = num; // last number

    // implement bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    // output the sorted numbers separated by '+'
    cout << numbers[0];
    for (int i = 1; i < 5; i++) {
        cout << "+" << numbers[i];
    }
    cout <<endl; // output: 1+1+1+3+3

    return 0;
}
