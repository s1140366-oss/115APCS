#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {0};
	int row, column;
	while (cin >> row >> column) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < column; i++) {
			for (int j = 0; j< row; j++){
				cout << a[i][j] << " ";
		   }
			cout << "\n";
		}

	}
	return 0;
}
