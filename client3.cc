/*client3 only intrest using submodule2 */
#include <iostream>
import submodule2;
int main() {
  std::cout << "mul(x,y) : " << mul(3, 4) << std::endl;
  return 0;
}