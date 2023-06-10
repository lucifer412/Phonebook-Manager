#include<stdio.h>
#include<stdlib.h>


// Str -> str -> main
int string(char **str){

    int size=1;
    char ch;
    //allocating a random memory block to the temp pointer
    char *temp=(char *)malloc(sizeof(char)*size);
    ch=getchar();
    while(ch != '\n'){
    //this while condition will be looking for an enter from the user side

        printf("running ||||| character is %c\n",ch);
        //getting single character from the buffer memory
        ch=getchar();
        //there is difference between getc and getchar

        //putting the character at the end of the array
        temp[size-1]=ch;
        printf("putting charcter\n");

        //reallocating the size of the array
        temp=(char *)realloc(temp,sizeof(char)* ++size);
    }
    //allocating one more block to store the null character
    temp=(char *)realloc(temp,sizeof(char)* ++size);

    //entering the last character.
    temp[size-1]='\0';
    **str=*temp;
    printf("END----------------------");
    return size-1;

}
