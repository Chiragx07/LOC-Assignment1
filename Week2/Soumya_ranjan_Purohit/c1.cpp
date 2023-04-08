<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
int maxcount(int arr[],int n,int key);
int maxcount(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}
int main(){
    int sam[10],key;
    printf("enter the values you want to input in array : \n");
    for(int i=0;i<10;i++){
        scanf("%d",&sam[i]);
    }
    
    printf("enter the number that you want to find the number of occurance : \n");
    scanf("%d",&key);
    int ans=maxcount(sam,10,key);
    printf("number of occurance is %d",ans);
    return 0;
=======
#include<stdio.h>
#include<conio.h>
int maxcount(int arr[],int n,int key);
int maxcount(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}
int main(){
    int sam[10],key;
    printf("enter the values you want to input in array : \n");
    for(int i=0;i<10;i++){
        scanf("%d",&sam[i]);
    }
    
    printf("enter the number that you want to find the number of occurance : \n");
    scanf("%d",&key);
    int ans=maxcount(sam,10,key);
    printf("number of occurance is %d",ans);
    return 0;
>>>>>>> 3eccf9c650c4d34295ebdd652a8b0860f54402f1
}