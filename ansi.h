// Ansi.h
// Single header helper for ansi console output
// http://github.com/fladderkatten/ansi
//

#pragma once

class Ansi
{
  struct Toggle {
    const char* on;
    const char* off;
  };
public:
  // foreground
  struct {
    const char* const black   = "\033[30m";
    const char* const red     = "\033[31m";
    const char* const green   = "\033[32m";
    const char* const yellow  = "\033[33m";
    const char* const blue    = "\033[34m";
    const char* const magenta = "\033[35m";
    const char* const cyan    = "\033[36m";
    const char* const white   = "\033[38m";
    const char* const reset   = "\033[39m";
  } const fg;

  // background
  struct {
    const char* const black   = "\033[40m";
    const char* const red     = "\033[41m";
    const char* const green   = "\033[42m";
    const char* const yellow  = "\033[43m";
    const char* const blue    = "\033[44m";
    const char* const magenta = "\033[45m";
    const char* const cyan    = "\033[46m";
    const char* const white   = "\033[47m";
    const char* const reset   = "\033[49m";
  } const bg;

  Toggle bold          = { "\033[1m", "\033[22m" };
  Toggle underline     = { "\033[4m", "\033[24m" };
  Toggle italics       = { "\033[3m", "\033[23m" };
  Toggle inverse       = { "\033[7m", "\033[27m" };
  Toggle strikethrough = { "\033[9m", "\033[29m" };
  
  const char* const reset = "\033[0m";
} constexpr ansi;