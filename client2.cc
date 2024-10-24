/*client2 only interesting to use submodule1*/
import submodule1;
#include <iostream>
int main() {
  std::cout << "add(x,y) : " << add(2, 3) << std::endl;
  return 0;
}