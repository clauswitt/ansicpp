#include <ansicpp.hpp>
#include <iostream>

int main(int ac, char* av[])
{
  Ansi ansi;
  std::cout << ansi.clear();
  return 0;
}
