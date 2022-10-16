#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv) { 
if(argc>2)
{
fprintf(stderr,"Please, enter 1 argument");
exit(1);
}
else if (argc<2){
clearenv();
}
else {
unsetenv(argv[1]);}
if (unsetenv(argv[1])==-1){
fprintf(stderr, "Variable not found");
exit(0);
}
return 0;
}

