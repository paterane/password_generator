// Programmer name: Peter Oo
// Program        : pass_gen_fitLoop
// Created on     : 2022/December/10

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    for(int x=0; x<10; x++){
        char pass_arr[9];
        int count=0;
        int loop_count = 0;
        while(count < 8){
            int rn = rand()%3;
            int gn;
            if(rn == 0){
                gn = rand()%10;
                gn += 48;
            }
            else if(rn == 1){
                gn = rand()%27;
                gn += 64;
            }
            else{
                gn = rand()%26;
                gn += 97;
            }
            loop_count++;
            if((gn > 47 && gn < 58) || (gn > 63 && gn < 91) || (gn > 96 && gn < 123)){
                pass_arr[count] = gn;
                count++;
            }
        }
        printf("loop counter: %d\n",loop_count);
        printf("Generated pass: ");
        printf("%s\n", pass_arr);
    }
    printf("\n");
    return 0;
}