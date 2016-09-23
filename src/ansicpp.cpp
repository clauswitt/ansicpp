#include <ansicpp.hpp>

namespace ansicpp {

  Ansi::Ansi() {

  }

  std::string Ansi::escape(std::string value) {
    return ESC + '[' + value;
  }

  std::string Ansi::clear() {
    return escape("2J");
  }

  std::string Ansi::show_cursor() {
    return escape("?25h");
  }

  std::string Ansi::hide_cursor() {
    return escape("?25l");
  }

  std::string Ansi::clear_line() {
    return escape("2K");
  }

  std::string Ansi::cursor_up(int count) {
    return escape(std::to_string(count)+"A");
  }

  std::string Ansi::cursor_down(int count) {
    return escape(std::to_string(count)+"B");
  }

  std::string Ansi::cursor_forward(int count) {
    return escape(std::to_string(count)+"C");
  }

  std::string Ansi::cursor_back(int count) {
    return escape(std::to_string(count)+"D");
  }

  std::string Ansi::cursor_next_line(int count) {
    return escape(std::to_string(count)+"E");
  }

  std::string Ansi::cursor_prev_line(int count) {
    return escape(std::to_string(count)+"F");
  }

  std::string Ansi::cursor_abs_col(int count) {
    return escape(std::to_string(count)+"G");
  }

  std::string Ansi::cursor_abs_pos(int row, int col) {
    return escape(std::to_string(row)+";" +std::to_string(col)+"H");
  }

  std::string Ansi::set_color(int fg, int bg) {

    return escape(std::to_string(fg) + ";" + std::to_string(bg) + "m");
  
  }




}

