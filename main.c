#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100;
#include "sort.h"
void nhap (int a[], int n) {
for (int i=0; i<=n;i++) {
printf("\nNhap phan tu a[%d]:",i);
scanf("%d",&a[i]);
}
}

void xuat (int a[],int n) {
    for (int i=0;i<=n;i++) {
        printf("%4d",a[i]);
    }
    
}
int main () {
    int n;
    int a[MAX];
    printf("nhap n");
    scanf("%d",&n);
    printf("NHap mang");
    nhap(a,n);
    printf("xuat mang");
    xuat(a,n);
    
    void bubble=void bubblesort(a[],n);
    printf("mang sap xep tang dan la %d",bubble);
    
}
