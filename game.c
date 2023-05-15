#include<stdio.h>
#include<stdlib.h>

#define ROW 16
#define COL 16

int check_nearby(int matrix[][COL], int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROW && j >= 0 && j < COL && matrix[i][j] == 1)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int x,y,i,random,j, a[ROW][COL]={0};
    int inp;
    int res;
    for(i=0;i<16;i++)
    {
        for(j=0;j<16;j++)
        {
            random = rand() % 2;
            if(random == 1)
            {
                a[i][j] = 1;
            }
        }
    }
    if(inp==1)
   {
        printf("Game over");
   }
    else
    {
    for(i=0;i<16;i++)
    {
        for(j=0;j<16;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter Rows: ");
    scanf("%d",&x);
    printf("Enter Columns: ");
    scanf("%d",&y);

    res = check_nearby(a,x,y);
    printf("Number of Mines nearby is: %d\n", res);

    inp = a[x][y];
    if(inp == 1)
    {
    printf("Game Over");
    }
}
}