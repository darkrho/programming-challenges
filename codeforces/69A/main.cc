#include <iostream>

using namespace std;

int main()
{
#ifdef DEBUG
  cout << "DEBUG ON" << endl;
#endif
  int n, x, y, z;
  int xs = 0, ys = 0, zs = 0;

  cin >> n;
  while (n--) {
    cin >> x >> y >> z;
    xs += x;
    ys += y;
    zs += z;
  }
  if (xs == 0 && ys == 0 && zs == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}