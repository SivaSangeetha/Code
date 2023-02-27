#include"slice.h"
int** slice_matrix(int **arr,int r,int c)
{
        int **a=new int*[r];
        for(int i=0;i<r;i++)
            a[i]=new int[c];
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        a[i][j]=arr[i][j];
        return a;
}

