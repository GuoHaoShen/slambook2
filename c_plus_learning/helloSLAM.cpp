#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  cout << "Hello c++!" << endl;

  int x, y;                          // 声明变量
  cin >> x >> y;                // 读入 x 和 y
  cout << y << endl << x;  // 输出 y，换行，再输出 x
  return 0; 
}
