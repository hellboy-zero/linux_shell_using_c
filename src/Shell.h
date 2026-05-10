#ifndef SHELL_H
#define SHELL_H


#include <string.h>
#include <unistd.h>
#include <dirent.h>


#define ROOT "#  "
#define USER ">>>>  "
#define  USER_ID getuid()
#define BUFFER 3000


// commands struct 
typedef struct
{
    char *name;
    void (*func)(char *);
} command;




#endif