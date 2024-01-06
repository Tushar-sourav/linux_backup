#include <stdio.h>

int main(){
    FILE *ptr=NULL;
    // ptr=fopen("myfile.txt","r");
    ptr=fopen("myfile.txt","a");
    // char c= fgetc(ptr);
    // printf("the character i read was %c\n",c);
    //  c= fgetc(ptr);
    // printf("the character i read was %c\n",c);
    //  c= fgetc(ptr);
    // printf("the character i read was %c\n",c);
    // for(int i=0;i<10;i++){
    //     c=fgetc(ptr);
    //     printf("the character i read was %c\n",c);
    // }


    //  char str[20];
    // fgets(str,5,ptr);
    // printf("the string i read is %s\n",str);

    // fputc('x',ptr);
    fputs(" you are cute!",ptr);

    fclose(ptr);
    return 0;
}