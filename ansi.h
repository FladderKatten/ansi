#pragma once

struct Ansi {
  
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
  } fg;

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
  } bg;

  struct {
    const char* const on =  "\033[1m";
    const char* const off = "\033[22m";
  } bold;

  struct {
    const char* const on  = "\033[3m";
    const char* const off = "\033[23m";
  } italics;

  struct {
    const char* const on  = "\033[4m";
    const char* const off = "\033[24m";
  } underline;

  struct {
    const char* const on  = "\033[7m";
    const char* const off = "\033[27m";
  } inverse;

  struct {
    const char* const on  = "\033[9m";
    const char* const off = "\033[29m";
  } strikethrough;

  const char* const reset = "\033[0m";
} ansi;
