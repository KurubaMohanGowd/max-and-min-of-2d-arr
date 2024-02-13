#include<stdio.h>
void find_min_max_of_array(int r, int c,int (*arr)[c] );

int main()
{
    int r,c;
    printf("Enter the row size : ");
    scanf("%d",&r);
    printf("Enter the column size : ");
    scanf("%d",&c);
    printf("Enter the array elements : ");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    find_min_max_of_array(r,c,arr);
    return 0;
}
void find_min_max_of_array(int r, int c,int (*arr)[c] )
{
    int i,j;
    int max,min;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 && j==0)
            {
                max=arr[i][j];
                min=arr[i][j];
            }
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
            else if(min>arr[i][j])
            {
                min=arr[i][j];
            }
        }
    }
    
    printf("Min is %d\n",min);
    printf("Max is %d\n",max);
}
