#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;

  stat("ino.c", &sfile);

  printf("st_ino = %o", sfile.st_ino);
  return 0;
}
