#include <stdio.h>

int mapping(int number, int num_start, int num_end, int output_start, int output_end);

int mapping(int number, int num_start, int num_end, int output_start, int output_end){
    float rr = output_end - output_start;       // required range > rr 122-97
    float ar = num_end - num_start;             // actual range   > ar 122-0
    float mp = rr / ar;                         // mapping factor > mf > rr/ar
                                                // sample         > number
                                                // output         > number * mf
    int output = (number*mp)+output_start;      // b/t 97 & 122   > number * mf + output_start
    return output;
}