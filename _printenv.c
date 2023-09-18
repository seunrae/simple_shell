#include <stdio.h>
#include "main.h"

int _printenv()
{
extern char **environ;
char **env;
if (environ == NULL)
	return (-1);
env = environ;
while (*env)
{
_putstring("%s\n", *env);
env++;
}
return (0);
}
