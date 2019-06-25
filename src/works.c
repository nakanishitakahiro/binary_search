#include <stdio.h>

int n;
int k;
int A[100000];
int p(int m){
    int a = m;
    int b = 1;
    for(int i = 0; i < n; i++){
        if(A[i] > m) return 0;
        if(a >= A[i])a = a -A[i];
        
        else{
            a = m -A[i]; b++;
        }
    }
        return b <=k ;
    }


int main(){
  int i;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    int lb = 0,ub = 1e4 * 1e5;
    while(ub - lb >1){
        int m = (lb + ub)/2;
        if(p(m))ub = m;
        else lb = m;
    }
    printf("%d\n" , ub);

  return 0;
}
