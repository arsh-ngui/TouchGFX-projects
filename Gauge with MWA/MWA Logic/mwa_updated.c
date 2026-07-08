#include <stdio.h>

#define winSize 5

float MWAOut(int oldArr)
{
    static int initFlag = 0; // denominator 
    static int currArr[winSize]; // 5 index array
    static int counter = 0; // 
    static int rotIndex; // rotating index
    static float avg; // final output
    
    currArr[rotIndex] = oldArr;
    rotIndex = (rotIndex+1)%winSize;


    if (initFlag < winSize) {
        initFlag ++;
    }

    /*if (counter < winSize) {
        counter ++;
    }

    if (counter == 5) {
        counter = 0;
    }*/
    
    int sum=0;
    for (int i = 0; i < initFlag; i++) {
        sum = sum + currArr[i];
        // printf("curr[%d]= %d ",i, currArr[i]);
        
    }

    
    /*for (int i = 0; i < 5; i++) {
        printf("curr- %d\n", currArr[i]);
    }*/
    
    avg = (float) sum / initFlag;

    return avg; 
    
}


int main()
{
    float sample;
    int tstArr[] = {23, 24, 26, 29, 21, 22, 25, 23, 20, 27, 25, 26, 23};
    int lens = sizeof(tstArr)/4;

    for (int i = 0; i<lens; i++)
    {
        sample = MWAOut(tstArr[i]);
        printf("new ele- %0.1f\n", sample);
    }     


}