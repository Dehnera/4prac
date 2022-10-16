#include <unistd.h>
#include <sys/utsname.h> 
#include <stdio.h> 
 
main() { 
char hostname[20];
  gethostname(hostname,20);
  printf("hostname: %s\n",hostname);
  printf("hostId: %d\n",gethostid());

  struct utsname unames; 
 
  if (uname(&unames) < 0) 
    perror("uname() error"); 
  else { 
    printf("sysname: %s\n", unames.sysname); 
    printf("nodename %s\n", unames.nodename); 
    printf("release: %s\n", unames.release); 
    printf("version: %s\n", unames.version); 
    printf("machine: %s\n", unames.machine); 
  } 
}
