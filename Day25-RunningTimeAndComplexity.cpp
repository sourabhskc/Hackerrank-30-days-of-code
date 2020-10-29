#include<stdio.h>
#include<math.h>

int main(){
    
    int t;
    scanf("%d", &t);

    while(t--){
    int n;
 //   printf("Enter no :");
    scanf("%d", &n);
    
    if(n == 1){
        printf("Not prime\n");
      //  return 0;
      continue;
    }
        
    int i;
    int f = 0;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            f = 1;
            break;            
        }
    }
    if(f == 1)
        printf("Not prime\n");
    else
        printf("Prime\n");
    }
        
    return 0;
}
