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
    int b[] = {1,2,3};
    
    for(int i:b){
        std::cout<<i<<" ";
    }
    return 0;
}