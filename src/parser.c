/* It is based on chordmode from http://lilypond.org/doc/v2.19/Documentation/notation/chord-mode */ 

#include <stdio.h>
#include "parser.h"

char *get_colon(char *chordname)
{
  while(*chordname)
    {
      if(*chordname == *":")
	{
	  return(chordname);
	}
      chordname++;
    }
  return(NULL);
}
