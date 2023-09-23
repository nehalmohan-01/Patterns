/*

1 1 1 1
_ 2 2 2
_ _ 3 3 
_ _ _ 4

*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int row = 1;
  while (row <= n) {
    int space = row - 1;
    while (space) {
      cout << " ";
      space--;
    }
    int col = 1;
    int num=row;
    while (col <= n - row + 1) {
      cout << num;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}
