
#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0 ;
    ub = 1e9+1  ;
    while(ub-lb>1){
        int m = (lb + ub )/2 ;
        for(i = 0; i <n; i++){
            h = 0
            h = h+(A[i]+m-1)/m
        }
        if(h <= k) ub =  m ;
        else lb = m ;
    }
    printf("%d\n",ub);
    
    
  

  return 0;
}
