#include <stdio.h>
#include <string.h>
#include <stdlib.h> // exit()
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){
    FILE* pFile = fopen(argv[1],"rb");
    FILE* pFile2 = fopen(argv[2],"rb");  	
    char str[4]={0};
    int count=0;
    uint32_t num;
    uint32_t num2;
    uint32_t R;
    uint32_t R2;
    count = fread(&num,sizeof(int),1,pFile);
    count = fread(&num2,sizeof(int),1,pFile2);
    str[4]='\0';
    R = ntohl(num);
    R2 = ntohl(num2);
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",R2,R2,R,R,R+R2,R+R2);


    
    fclose(pFile);

     return 0;


}
