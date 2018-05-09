#include "ansicpp.hpp"
#include <string>
#include <iostream>
#include <chrono>      // std::chrono::seconds(secs);
#include <thread>      // std::this_thread::sleep_for
inline void sleep(int secs) 
{
  std::this_thread::sleep_for(std::chrono::seconds(secs));
}

using namespace ansicpp;

int main(int ac, char* av[])
{
  std::cout << Ansi::clear() << Ansi::cursor_abs_pos(1,1) << "Testing" << Ansi::show_cursor() << std::flush;
  sleep(1);
  std::cout << Ansi::set_color(FG::black, BG::red);
  std::cout << Ansi::cursor_forward(10) << "moar testing" << std::flush;
  sleep(1);
  std::cout << Ansi::set_color(FG::default_color, BG::default_color);
  std::cout << Ansi::cursor_next_line();
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  return 0;
}

