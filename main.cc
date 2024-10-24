#include <iostream>
#include <vector>

import my_math;

int main() {
  std::cout << "add(2000,20) : " << add(2000, 20) << std::endl;
  std::vector<int> my_vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << "getProduct(my_vec) : " << getProduct(my_vec) << std::endl;
  std::cout << "multiply(2,3) : " << mul(2, 3) << std::endl;
  return 0;
}