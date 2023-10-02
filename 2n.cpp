#include <iostream>

using namespace std;


const int n = 3;


bool MatrixNumberIs(int arr[n][n], int target) {

    for (int i = 0; i < n; ++i) {

    for (int j = 0; j < n; ++j) {

    if (arr[i][j] == target) {

    return true;
    }
    }
    }

    for (int j = 0; j < n; ++j) {

    for (int i = 0; i < n; ++i) {

    if (arr[i][j] == target) {

    return true;
    }
    }
    }

    
    return false;
}

int main() {
    setlocale(LC_ALL, "RUS");
    int arr[n][n] = {
           {1, 2, 3},
           {4, 5, 6},
           {7, 8, 9}
    };

    int target;
    cout << "Введите искомое число";
    cin >> target;

    if (MatrixNumberIs, target) {
        cout << " Число" << target << " найдено в матрице. " << endl;
    }
    else {
        cout << " Число " << target << " не найдено в матрице. " << endl;
    }

    return 0;
}
