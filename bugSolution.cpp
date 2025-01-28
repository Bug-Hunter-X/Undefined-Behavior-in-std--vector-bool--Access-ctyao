#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec = {true, false, true};
  int index = 0;
  //Safe method using at()
  try {
    bool b = vec.at(index);
    std::cout << "Element at index " << index << ": " << b << std::endl;
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  index = 3; //index out of bound
  //Safe method using at()
  try {
    bool b = vec.at(index);
    std::cout << "Element at index " << index << ": " << b << std::endl;
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  //Unsafe method using []
  if(index >=0 && index < vec.size()){
    bool b = vec[index];
    std::cout << "Element at index " << index << ": " << b << std::endl;
  }
  else{
    std::cout << "index is out of bound" << std::endl;
  }

  return 0;
}
