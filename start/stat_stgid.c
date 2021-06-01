#include<stdio.h>
#include<sys/stat.h>
int main()
{
  struct stat sfile;

  stat("stat_stgid.c", &sfile);

  printf("st_gid = %o", sfile.st_gid);
  return 0;
}
