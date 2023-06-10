#include<stdio.h>
#include<stdlib.h>

void kindasize(char *str){
    int i=0;
    int c=0;
    while(str[c]!='\0'){
        i++;
        c++;
    }
    printf("size : %d\n",i);
}

char *stringer()
{
    char ch=0;
    int size=1;
    char *temp=(char *)malloc(sizeof(char)*size);

    while(ch!='\n'){
        ch=getchar();
        temp[size-1]=ch;
        temp=(char *)realloc(temp,sizeof(char)* ++size);
    }
    temp=(char *)realloc(temp,sizeof(char)* ++size);
    temp[size-1]='\0';
    // printf("output string size: %lu\n",sizeof(&(*temp)));
    kindasize(temp);
    return temp;
}

