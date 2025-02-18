#include<iostream>

int* create_arr_in_heap(int n){

    int *p = new int[n];

    for(int i=0;i<n;i++){
        p[i] = i+1;
    }

    return p;
}
int main(){
    int n=5;

    int *A;

    A = create_arr_in_heap(5);

    for(int i=0;i<n;i++){
        std::cout<<A[i]<<" ";
    }
    return 0;
}