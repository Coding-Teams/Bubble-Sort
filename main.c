#include <stdio.h>
/*
spicoli piersilvio - uniba computer science
bubble sorting of integer
*/
void bubbleSort(int[]);
void swapp(int[]);
void print(int[]);

int i, j;
int a[] = {5, 3, 4, 1, 10, 6};
int n = sizeof(a) / sizeof(a[0]);


void bubbleSort(int arr[]){

    do{
        int flag = 0;
        for(i = 0; i < n -1; i++){
            if(arr[j - 1] > arr[j])
                flag = 1;
                swapp(arr);
        }
        p = p -1;
    }while(flag == 0);

    print(arr);
}

void swapp(int arr[]){

    int tmp;

    tmp = arr[j - 1];
    arr[j - 1] = arr[j];
    arr[j] = tmp;
}

void print(int arr[]){

    for(i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
}

int main(){

    bubbleSort(a);
    return 0;
}
