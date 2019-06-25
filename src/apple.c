
#include <stdio.h>

int n;
int k;
int A[100000];


int p(int m){
    int cnt = 0;
    for(int i = 0; i < n; i++) cnt += (A[i] + m - 1) / m;
    return cnt <= k;
}

int main(){
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int lb = 0, ub = 1e9;
    while(ub-lb>1){
        int m = (lb + ub)/2;
        if(p(m)) ub = m;
        else lb = m;
    }
    printf("%d\n",ub);
    
  return 0;
}
