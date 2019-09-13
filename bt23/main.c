#include <stdio.h>
#include <stdlib.h>


int main()
{
       int n, usl = 1;
       printf("Nhap n: ");
       do{
           scanf("%d",&n);
           if(n <= 0){
           printf("\nNhap lai n = ");
          }
       }while(n <= 0);

       for(int i = 1;i <= n;i++){
           if(n % i == 0){
              if(i % 2 == 1){
                  usl = i;
                  printf("%d",usl);
                     printf("\n");
                     }
            }
       }
}
