/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void Tombfeltoltes(char tomb[], char betu, int szamlalo){
        tomb[szamlalo] = betu;
        ++szamlalo;
        printf("%s ",tomb);
}

int main()
{
    int asciiszam = 97;
    int meret = 122-97;
    char betu;
    int szamlalo = 0;
    char tomb [meret];
    for(int i = 97; i <= 122; ++i ){
    betu = asciiszam;
    Tombfeltoltes(tomb, betu, szamlalo);
    ++asciiszam;
}
    return 0;
}
