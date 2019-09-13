#include <stdio.h>
#include <stdlib.h>


int main(){
    float a,b;
printf("Nhap a va b:");
scanf("%f \n %f",&a,&b);
if (a==0){
    if (b==0)
    { printf("pt vo so nghiem");
    }
    else
    {
         printf ("pt vo nghiem");
    }
}
else
{
    printf("pt co nghiem la %f",-b/a);
}
getch();

return 0;

}
