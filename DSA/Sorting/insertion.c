#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble(int A[],int n)     //array and size.
{
    int i,j,flag=0;          //flag is initialize for adaptive
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            flag=0;
            if(A[j]>A[j+1])
            {
                flag=1;
                swap(&A[j],&A[j+1]);     //Main swapping of bubble.
            }   
        }
        if(flag==0)
        {
            break;
        }
    }
}
void insertion(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=j-1;
        x=A[i];
        while(j>-1&&A[j]>x)  //for shifting
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{
    int A[]={11,13,7,2,6,9,4,5,10,3},n=10,i;
    insertion(A,n);
    for(i=0;i<10;i++)
    printf("%d",A[i]);
    printf("\n");
    return n;
}