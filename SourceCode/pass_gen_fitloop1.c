/* Programmer Name: Peter Oo
 * Program Name   : pass_gen_fitloop1
 * Created On     : 2022 / December / 10
 * Purpose        : Educational / Reference
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "include/mapping.h"

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
                gn = rand()%58;
                gn = mapping(gn, 0, 57, 48, 57);
            }
            else if(rn == 1){
                gn = rand()%91;
                gn = mapping(gn, 0, 90, 64, 90);
            }
            else{
                gn = rand()%123;
                gn = mapping(gn, 0, 122, 97, 122);
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
