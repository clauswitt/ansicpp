#ifndef ANSICPP_ANSICPP
#define ANSICPP_ANSICPP 1
#include <stdint.h>
#include <vector>
#include <string>
class Ansi {
  private:
    std::string ESC = "\033" ;
    std::string escape(std::string value);

  public:
    Ansi();
    std::string clear();

};
#endif /* ifndef ANSICPP_ANSICPP */
