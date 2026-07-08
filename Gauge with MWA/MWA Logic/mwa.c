#include <stdio.h>

void winUnfill(int arr[], float result[], int winSize) {
    int sum = 0;
    for (int i = 0; i < winSize; i++) {
        sum = sum +  arr[i];
        result[i] = (float)sum / (i + 1);
    }
}

void winFill(int arr[], float result[], int arrLen, int winSize) {
    int currSum = 0;
    for (int i = 0; i < winSize; i++) {
        currSum = currSum + arr[i];
    }

    for (int j = winSize; j < arrLen; j++) {
        currSum = currSum - arr[j - winSize] + arr[j];
        result[j] = (float) currSum/winSize;
    }
}

int main() {
    int tstArr[] = {23, 24, 26, 29, 21, 22, 25, 23, 20, 27, 25, 26, 23};
    int lens = sizeof(tstArr) / sizeof(tstArr[0]);
    int winSize = 5;
    
    float newArr[13] = {}; 

    winUnfill(tstArr, newArr, winSize);

    winFill(tstArr, newArr, lens, winSize);

    printf("newarr \n");
    for (int j = 0; j < lens; j++) {
        printf("%0.2f, ", newArr[j]);
    }


}