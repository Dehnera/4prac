#include <stdio.h>
#include <stdlib.h>

#define CON  1

int main (int argc, char ** argv)
{ 
 if (argc < 3)
 {
  fprintf (stderr, "too few arguments\n");
  fprintf (stderr, "corect syntax <variable> <value>\n");
  exit (1);
 }
 if (setenv (argv[1], argv[2], CON) != 0)
 {
  fprintf (stderr, "Cannot set '%s'\n", argv[1]);
         exit (1);
 }

 printf ("%s=%s\n", argv[1], getenv (argv[1])); 
 exit (0);
}
