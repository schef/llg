#ifndef _parser_h
#define _parser_h

#include <stdint.h>
#include <string.h>

struct chord
{
  char root[10];
  uint8_t duration;
  char modifier[20];
  char bass[10];
};

char *get_colon(char *chordname);

#endif
