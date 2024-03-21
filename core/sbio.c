#include "sbio.h"
#include <string.h>

int initSBio() {
    return 0;
}


void string_copy(char *from, char *to) {

    while ((*to++ = *from++) != '\0')
        ;
}

float calculatePairwiseAlignmentScore(char *seq1, char *seq2, int length) {
    float score = 0;
    
    for(int i = 0; i < length; i++) {
        if(seq1[i] == seq2[i]) {
            score++;
        }
    }
    return score;
}

char *insertChar(char *str, char c, int index) {
    char *out = malloc(sizeof(char) * 1024);
    int i = 0;

    for(i = 0; i < index; i++) {
        out[i] = str[i];
    }
    out[i] = c;
    i++;
    for(i = i; i < strlen(str) + 1; i++) {
        out[i] = str[i - 1];
    }

    return out;
}

char **insertGap(char *seq, int length, int targetLength, int *out_num) {
    char **out = malloc(sizeof(char *) * 1024);
    int gap = targetLength - length;
    int out_counter = 0;

    for(int i = 0; i <= length; i++) { 
        char *temp = malloc(sizeof(char) * targetLength);

        string_copy(seq, temp);
        for(int gc = 0; gc < gap; gc++) {
            temp = insertChar(temp, '-', i);
        }
        out[out_counter] = temp;
        out_counter++;
    }
    *out_num = out_counter;
    return out;
}