#include "sbio.h"

int initSBio() {
    return 0;
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

char **insertGaps(char *seq, int length, int targetLength) {
    char **out = malloc(sizeof(char *) * length);
    for(int i = 0; i < length; i++) {
        out[i] = malloc(sizeof(char) * 1024);
    }

    
    return out;
}