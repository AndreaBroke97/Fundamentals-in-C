#include <stdio.h>

int max(int array[], int length) {
    int tmpMax = array[0];
    for(int i = 1; i < length; i++) {
        if (array[i] > tmpMax) {
            tmpMax = array[i];
        }
    }
    return tmpMax;
}

int min(int array[], int length) {
    int tmpMin = array[0];
    for(int i = 1; i < length; i++) {
        if (array[i] < tmpMin) {
            tmpMin = array[i];
        }
    }
    return tmpMin;
}

int main() {
    int votes[] = {2, 3, 3, 6, 4, 5, 7, 4};
    int length_votes = sizeof(votes) / sizeof(votes[0]);

    int maxVote = max(votes, length_votes);
    int minVote = min(votes, length_votes);

    printf("Voto massimo: %d\n", maxVote);
    printf("Voto minimo: %d\n", minVote);

    return 0;
}
