#include<stdio.h>
int main(){
    int n;
    int s=0; 
    scanf("%d",&n);
    int a[n];
    for (int b = 0; b < n; b++)
    {
        scanf("%d", &a[b]);
    }
    for (int i = 0; i < n; i++) {
    int Swaps = 0;
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            s++;
            Swaps++;
        }
    }
     if (Swaps == 0) {
        break;
    }   
}    
    printf("Array is sorted in %d swaps.\n",s);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}