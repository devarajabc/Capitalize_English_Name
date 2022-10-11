#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define STRINGLEN 2000
int main(void)
{
    /*do {
     scanf("%c", &ch);
      } while (ch != '\n');
      */
    //int n;
    //scanf("%d",&n);
    char string[STRINGLEN];
    int count =-1;
    //scanf("%s",string);

    do {
        count+=1;
        scanf("%c",&string[count]);
    }while(string[count]!='\n');

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '.' || string[i] == ',' || string[i] == ';') {
            string[i] = '\n';
        }

    }
    for (int i = 1; i < strlen(string); i++)
    {
        if(string[i-1]==' '||string[i-1]=='\n')
        {
            string[i]= toupper(string[i]);
        }
       else
        {
            string[i]= tolower(string[i]);
        }


    }
    for(int i=0;i<count;i++)
    {
        printf("%c", string[i]);
    }



    //printf("<%c>",string[1]);




    return 0;
}