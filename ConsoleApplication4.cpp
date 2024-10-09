#include <iostream>
using namespace std;
// 2
//int gcd(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    return gcd(b, a % b);
//}
//
//int main() {
//    int num1, num2;
//
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    cout << "Greatest common divisor: " << gcd(num1, num2) << endl;
//}

//1
//template <typename T>
//void initializeAndPrintMatrix(T matrix[][3], int size) {
//    cout << "Enter elements for a " << size << "x" << size << " matrix:" << endl;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//    cout << "Matrix:" << endl;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << setw(4) << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//template <typename T>
//void findMinMaxDiagonal(T matrix[][3], int size) {
//    T minElem = matrix[0][0], maxElem = matrix[0][0];
//    for (int i = 1; i < size; i++) {
//        if (matrix[i][i] < minElem) minElem = matrix[i][i];
//        if (matrix[i][i] > maxElem) maxElem = matrix[i][i];
//    }
//    cout << "Min on diagonal: " << minElem << "Max on diagonal: " << maxElem << endl;
//}
//
//template <typename T>
//void sortRows(T matrix[][3], int size) {
//    for (int i = 0; i < size; i++) {
//        sort(matrix[i], matrix[i] + size);
//    }
//    cout << "Sorted rows:" << endl;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << setw(4) << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    const int size = 3;
//
//    int matrix[size][size];
//    initializeAndPrintMatrix(matrix, size);
//    findMinMaxDiagonal(matrix, size);
//    sortRows(matrix, size);

}