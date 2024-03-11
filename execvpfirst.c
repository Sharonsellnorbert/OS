#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
char *args[]={"./n1",NULL};
execvp(args[0],args);
printf("End");
}

