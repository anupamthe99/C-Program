# include <stdio.h>

int returnmax(int array[],int n){
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main(){
int arr[]={1,12,3,8,3,5,16};
int max=returnmax(arr,7);
printf("The biggest number is %d",max);
return 0 ;
}