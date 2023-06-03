#include <stdio.h>

int sumOfElements(int A[],int size)
{
    int i , sum =0;
    
    // we can pass the size here 
    // int size = sizeof(A)/sizeof(A[0]);
    // there will be some problem 
    // printf("SOF  - Size of A %d, sizee of A[0] = %d\n" ,sizeof(A),sizeof(A[0]));
    // 
    for (i=0;i<size;i++)
    {
        sum+=A[i];
    }
    return sum;
    
    
}

int main()
{
    
    int A[] = {2,4,5,8,1};
    
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElements(A,size);
    printf("sum of the elements =%d\n",total);
    printf("SOF  - Size of A %d, sizee of A[0] = %d\n" ,sizeof(A),sizeof(A[0]));
    
    // array 1
    
    // int i;
    
    // for (i =0;i<5;i++){
    //     printf("%d\n",&A[i]);
    //     printf("%d\n",A+i);
    //     printf("%d\n",A[i]);
    //     printf("%d\n",*(A+i));
        
    // }
    
    
    // array in fucntions 2:
    
    
    
    
    

    return 0;
}
