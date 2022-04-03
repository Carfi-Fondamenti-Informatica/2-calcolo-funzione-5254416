#include <iostream>
using namespace std;

int main() {
    float a, b, x, y, z;
  std::cout<<"Inserire quattro numeri reali \n";
  cin >> a >> b >> x >> y;
  if (x<0 && y>0) {
      z= a*x - b*y;
      std::cout << z;
  } else if(x>=0 && y<=0) {
      z=a*x*x-b*y;
      std::cout << z;
  } else {
      z = a*x + b*y*y;
      std::cout << z;
  }
   return 0;
}
