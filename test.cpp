#include <iostream>

#include "ansi.h"


int main()
{
  std::cout << ansi.fg.blue << ansi.bg.white << "Blue on White" << std::endl << ansi.reset;
  std::cout << ansi.fg.black << ansi.bg.yellow << "Black on Yellow" << std::endl << ansi.reset;
  std::cout << ansi.bold.on << "bold" << std::endl << ansi.reset;
  std::cout << ansi.italics.on << "italics" << std::endl << ansi.reset;
  std::cout << ansi.underline.on << "underline" << std::endl << ansi.reset;
  std::cout << ansi.strikethrough.on << "strikethrough" << std::endl << ansi.reset;
}
