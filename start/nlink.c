#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;
  stat("nlink.c", &sfile);

  printf("st_nlink = %o", sfile.st_nlink);
  return 0;
}
