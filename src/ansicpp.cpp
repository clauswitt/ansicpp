#include <ansicpp.hpp>

Ansi::Ansi() {

}

std::string Ansi::escape(std::string value) {
  return ESC + '[' + value;
}

std::string Ansi::clear() {
  return escape("2J");
}
