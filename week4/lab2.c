#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char const *argv[]) {
    int i, j=0;
    unsigned char array[10];
    size_t t;
    unsigned char r;
    srand(time(0));
// Randomn follow the order
    for (i=0; i<11; i++){
        array[i]=rand()%100;
    }
    for (i=1; i<11; i++){
        printf("%d.%d\n",i, array[i] );
    }
    // Reserved order
    printf("Contrastingly:\n");
    for (i=10;  i>=0;  i--) {
        printf("%d.%d\n",i, array[i] );
    }

    // Odd? Even?
    for (i=1; i<11; i++) {
        if (array[i]%2==1){
          printf("array[%d]:%d is the odd number\n",i, array[i] );
        } else{
          printf("array[%d]:%d is the even number\n",i, array[i] );
        }
    }
    // Sum number>5, count it
    float sum;
    for (i=1; i<11; i++){
        if (array[i]>5){
          sum=sum+array[i];
          j=j+1;
        }
    }
    printf("Sum is %f, numbers >5 is %d\n", sum, j );

    // CHECK THE INTEGER
    // int search;
    // printf("Input the integer that u want to find ? " );
    // scanf(" %d",&search );
    // for (i=1; i<11; i++){
    //     if (array[i] == search){
    //       printf(" %d is your finding number", array[i] );
    //     }
    // }

    // For prime
    int i2, k, count;
    for (i=1; i<11; i++){
      count=0;
      for(i2=0; i2<=array[i]; i2++){
        k= array[i]/i2;
        if (k !=0) {count=count+1;
        }
      }
      if (count==2) {
        printf("array[%d]is the prime number\n",i );
      }
    }
    return 0;
}
