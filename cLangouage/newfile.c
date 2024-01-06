#include <stdio.h>

int main(){
    FILE *hi = fopen("example.txt","w");

    if (hi == NULL){
        printf("error opening the file.\n");
        return 1;
    }

    fprintf(hi,"hello,world\n");
    fprintf(hi,"this is a sample file.\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            fprintf(hi,"*");
        }
        fprintf(hi,"\n");
    }

    fclose(hi);
    return 0;

}