#include <iostream> 
using namespace std; 

int main() {
    int rows, col;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> col;
 
    int array[rows][col];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < col; ++j){
            std::cout << "Enter element at position " << i + 1 << ", " << j + 1 << ": ";
            std::cin >> array[i][j];
        }
    }
    cout << "The entered 2D array is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
