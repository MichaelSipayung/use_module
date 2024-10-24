module;
#include <numeric>
#include <vector>

export module my_math;
// demonstrate how submodule is works on cxx-20 module
export import submodule1; // module add(x,y)
export import submodule2; // module mul(x,y)

export auto getProduct(const std::vector<int> &vec) {
  return std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<>());
}