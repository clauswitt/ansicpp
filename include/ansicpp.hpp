#ifndef ANSICPP_ANSICPP
#define ANSICPP_ANSICPP 1
#include <vector>
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
      std::string ESC = "\033" ;
      std::string escape(std::string value);

    public:
      Ansi();
      std::string clear();
      std::string show_cursor();
      std::string hide_cursor();
      std::string clear_line();
      std::string cursor_up(int count=1);
      std::string cursor_down(int count=1);
      std::string cursor_forward(int count=1);
      std::string cursor_back(int count=1);

      std::string cursor_next_line(int count=1);
      std::string cursor_prev_line(int count=1);

      std::string cursor_abs_col(int count=1);
      std::string cursor_abs_pos(int row=1, int col=1);

      std::string set_color(int fg=FG::Colors::default_color, int bg=BG::Colors::default_color);



  };
}
#endif /* ifndef ANSICPP_ANSICPP */
