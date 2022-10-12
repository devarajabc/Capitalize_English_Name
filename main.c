#include<stdio.h> // Including header file
#include<ctype.h>

int main(){

    int myChar; // creating a variable to store the input
    int time_to_upper=1;
    //myChar = getchar(); nononono
    int n;
    scanf("%d\n",&n);
    //int first=1;

//可以遇到n次
    while(n>0)
    {
        myChar = getchar(); // use getchar to fetch input

        if(myChar == '.' || myChar == ',' || myChar == ';')//ending
        {
            printf("\n");
            time_to_upper+=1;
            n--;
        }
        else if(myChar==' ')//space
        {
            time_to_upper+=1;
            printf("%c",myChar);
        }
        else if(time_to_upper!=0)//after space or \n
        {
            printf("%c", toupper(myChar));
            time_to_upper=0;
        }
        else {//normal one
            printf("%c", tolower(myChar)); // print input on screen
        }


    }

    return 0;
}