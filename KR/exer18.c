
/* Write a program to count blanks, tabs and newlines */

#include <stdio.h>
#include "graph.h"


int main(int argc, char const *argv[])
{
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    char c;
    do
    {
        c = getchar();
        switch (c){
            case ' ':
                ++ blanks;
                break;
            case '\t':
                ++ tabs;
                break;
            case '\n':
                ++ newlines;
                break;
        }

    } while (c != EOF);

    //printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines );

    int datos[] = {blanks,tabs,newlines};
    char *labels[] = {"blanks", "tabs", "newlines"}; 
    graph(datos,labels,3);

    





    return 0;
}
