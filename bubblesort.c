#include <stdio.h>

void swap(int*a, int*b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int *bubblesort(int *nums, int size)
{
    int i = 1;
    while(i <= size-1)
    {
        if(nums[i-1] > nums[i])
            swap(&nums[i-1], &nums[i]);
        i++; 
    }
    i-=2;
    if(i > 0)
    {
        bubblesort(nums,i+1);
    }
    else
        return(nums);
}


int main()
{
    int nums[10] = {31,27,135,1,0,45,78,29,5, 315};
    int*sorted = bubblesort(nums,10);
    int i = 0;
    while(i<10)
    {
        printf("%d\n",nums[i++]);
    }
}
//sposta all'ultima posizione il max num e scala di 1.
