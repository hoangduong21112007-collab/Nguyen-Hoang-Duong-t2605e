#include <stdio.h>
void reverseArray(int ary[]){
    for (int i = 6; i >= 0; i--){
        printf(" %d ", ary[i]);
    }
}

int main(){
    int ary[] = {1,2,3,4,5,6,7};
   reverseArray(ary);
}

