#include<stdio.h> // Including header file
#include<ctype.h>

int main(){

    int myChar; // creating a variable to store the input
    int time_to_upper=0;
    myChar = getchar();
    int n;
    scanf("%d",&n);
    int first=1;


    while(n)
    {
        myChar = getchar(); // use getchar to fetch input

        if(myChar == '.' || myChar == ',' || myChar == ';')
        {
            printf("\n");
            time_to_upper+=1;
        }
        else if(myChar==' ')
        {
            time_to_upper+=1;
            printf("%c",myChar);
        }
        else if(time_to_upper!=0||first==1)
        {
            printf("%c", toupper(myChar));
            time_to_upper=0;
        }
        else {
            printf("%c", tolower(myChar)); // print input on screen
        }
        first++;

    }

    return 0;
}