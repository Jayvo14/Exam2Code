#include <iostream>

enum numbers{ one = 1, two = 2, three = 3, four = 4};
enum random{twenty = 20, forty=40};

int main() {
  std::cout<<(one + two)<<std::endl;
  std::cout<<(four - three)<<std::endl;
  std::cout<<(four + two)<<std::endl;
  std::cout<<(four * one)<<std::endl;
  std::cout<<(forty + twenty)<<std::endl;
  std::cout<<(forty + four)<<std::endl;
  std::cout<<(forty / four)<<std::endl;
  std::cout<<(four * twenty)<<std::endl;
  std::cout<<(twenty / two)<<std::endl;
  std::cout<<(twenty + one)<<std::endl;
}