/* Programmer Name: Peter Oo
 * Program Name   : pass_gen_fitloop2
 * Created On     : 2022 / December / 10
 * Purpose        : Educational / Reference
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char pass_key[69] = {0x21, 0x23, 0x24, 0x25, 0x26};

int main(){
    /**
     * So lazy to insert data of ASCII character,
     * So, I loop through the array and insert the numerical characters. :):):)
     */
    for(int i=0; i < 10;i++){
        pass_key[i+5] = 0x30 + i;
    }
    for(int i=0; i < 27; i++){
        pass_key[i+15] = 0x40 + i;
    }
    for(int i=0; i < 26; i++){
        pass_key[i+42] = 0x61 + i;
    }

    srand(time(NULL));
    for(int x=0; x<10; x++){
        char pass_arr[9] = {'\0'};
        int count=0;
        int loop_count = 0;
        while(count < 8){
            int gn = rand()%67;     // get index of key_pass array
            loop_count++;           // count loop
            pass_arr[count] = pass_key[gn]; // insert a value of key_pass array to pass_arr array
            count++;
        }
        printf("loop counter: %d\n",loop_count);
        printf("Generated pass: ");
        printf("%s\n", pass_arr);
    }
    printf("\n");
    return 0;
}