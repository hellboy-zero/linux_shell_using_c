#include "Shell.h"

void echo(char *INPUT)
{
    if (strncmp(INPUT, "echo ", 5) == 0)
    {
        write(1 , INPUT + 5, strlen(INPUT + 5) );
        write(1 , "\n", 1);
    }
}

void clear(char *INPUT)
{
    write(1 , "\033c", 2);
}

void clean(char *INPUT)
{
    write(1 , "\033[H", 4);
}


void ls(char *INPUT)
{
    // write();
}

void pipe_c(char *INPUT)
{
    // code
}

void cd(char *INPUT)
{
    // code
}

void pwd(char *INPUT)
{
    // code
}

void cat(char *INPUT)
{
    // code
}

void touch(char *INPUT)
{
    // code
}

command commands[] =
{
    {"echo", echo},
    {"clear", clear},
    {"|", pipe_c},
    {"cd", cd},
    {"pwd", pwd},
    {"cat", cat},
    {"touch", touch},
    {"clean", clean},
    {"ls", ls}

};

int main(void)
{
   char INPUT[BUFFER];

    while(1)
    {
        // prompt
        if (USER_ID != 0)
        {
            write(1 , USER  , strlen(USER));
        }
        else
        {
            write(1 , ROOT  , strlen(ROOT));
        }
        
        // clear buffer
        memset(INPUT , 0 , sizeof(INPUT));

        // read input
        size_t bytes_Read =  read(0 , INPUT , sizeof(INPUT) - 1 );

        if (bytes_Read <= 0)
            break;

        // remove newline 
        INPUT[bytes_Read - 1] = '\0';

        // copy input to temp buffer
        char TEMP[BUFFER];
        strcpy(TEMP , INPUT);

        // tokenize copy 
        char *cmd = strtok(TEMP , " ");

        // found flag
        int found = 0;

        for (int i = 0; i < 9; i++)
        {
            if (strcmp(cmd , commands[i].name)==0 ){
                commands[i].func(INPUT);
                found = 1;
                break;
            }
        }

        if(!found)
        {
            write(1, "Enter a valid command\n", 22);
        }
    }


    
}

