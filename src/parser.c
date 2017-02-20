/* It is based on chordmode from http://lilypond.org/doc/v2.19/Documentation/notation/chord-mode */ 

#include <stdio.h>
#include "parser.h"

char *get_colon(char *chordname)
{
  while(*chordname)
    {
      if(*chordname == ':')
	{
	  return(chordname);
	}
      chordname++;
    }
  return(NULL);
}

char *get_slash(char *chordname)
{
  while(*chordname)
    {
      if(*chordname == '/')
	{
	  return(chordname);
	}
      chordname++;
    }
  return(NULL);
}


uint8_t get_root_size(char *chordname)
{
  uint8_t size;
  if (get_colon(chordname) != NULL)
    {
      size = get_colon(chordname) - chordname;
    }
  else if (get_slash(chordname) != NULL)
    {
      size = get_slash(chordname) - chordname;
    }
  else
    {
      size = strlen(chordname);
    }
  return(size);
}
