#ifndef ANSICPP_ANSICPP
#define ANSICPP_ANSICPP 1
#include <string>
namespace ansicpp {

  namespace FG {

    enum Colors {
      black= 30,
      red= 31,
      green= 32,
      yellow= 33,
      blue= 34,
      magenta= 35,
      cyan= 36,
      white= 37,
      default_color= 39
    };
  }

  namespace BG {
    enum Colors {
      black= 40,
      red= 41,
      green= 42,
      yellow= 43,
      blue= 44,
      magenta= 45,
      cyan= 46,
      white= 47,
      default_color= 49
    };

  }
  class Ansi {
    private:
      static std::string escape(std::string value) {
        std::string ESC = "\033";
        return ESC + "[" + value;
      }

    public:

      static std::string clear() {
        return escape("2J");
      }
      static std::string show_cursor() {

        return escape("?25h");
      }

      static std::string hide_cursor() {
        return escape("?25l");
      }

      static std::string clear_line() {
        return escape("2K");
      }

      static std::string cursor_up(int count=1) {
        return escape(std::to_string(count)+"A");
      }

      static std::string cursor_down(int count=1) {
        return escape(std::to_string(count)+"B");
      }

      static std::string cursor_forward(int count=1) {
        return escape(std::to_string(count)+"C");
      }

      static std::string cursor_back(int count=1) {
        return escape(std::to_string(count)+"D");
      }

      static std::string cursor_next_line(int count=1) {
        return escape(std::to_string(count)+"E");
      }

      static std::string cursor_prev_line(int count=1) {
        return escape(std::to_string(count)+"F");
      }

      static std::string cursor_abs_col(int count=1) {
        return escape(std::to_string(count)+"G");
      }

      static std::string cursor_abs_pos(int row=1, int col=1) {
        return escape(std::to_string(row)+";" +std::to_string(col)+"H");
      }

      static std::string set_color(int fg=FG::Colors::default_color, int bg=BG::Colors::default_color) {
        return escape(std::to_string(fg) + ";" + std::to_string(bg) + "m");
      }

  };
}
#endif /* ifndef ANSICPP_ANSICPP */
