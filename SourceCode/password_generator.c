// Programmer name: Peter Oo
// Program        : password_generator
// Created on     : 2022/December/10

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int mapping(int number, int num_start, int num_end, int output_start, int output_end);

int main(){
    srand(time(NULL));
    printf("\n");
    for(int x=0; x<10; x++){
        char pass_arr[9];
        int count=0;
        int loop_count = 0;
        while(1){
            int gn = rand()%123;
            loop_count++;
            if((gn > 47 && gn < 58) || (gn > 63 && gn < 91) || (gn > 96 && gn < 123)){
                pass_arr[count] = gn;
                count++;
            }
            if(count == 8) break;
        }
        printf("loop counter: %d\n",loop_count);
        printf("Generated password: %s\n", pass_arr);
    }
    printf("\n");
    return 0;
}
                                
