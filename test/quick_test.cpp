#include <ansicpp.hpp>
#include <iostream>
#include <ostream>

using namespace ansicpp;

int main(int ac, char* av[])
{
  Ansi ansi;
  std::cout << ansi.clear() << ansi.cursor_abs_pos(1,1) << "Testing" << ansi.show_cursor() << std::flush;
  sleep(1);
  std::cout << ansi.set_color(FG::black, BG::red);
  std::cout << ansi.cursor_forward(10) << "moar testing" << std::flush;
  sleep(1);
  std::cout << ansi.set_color(FG::default_color, BG::default_color);
  std::cout << ansi.cursor_next_line();
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  return 0;
}
