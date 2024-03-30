#include <stdio.h>
#include<conio.h>

#define max(a,b) (a > b ? a : b)

int matrix[100][100] = {0};
int picks[100][100] = {0};

int knapsack(int nItems, int size, int weights[], int values[]){
    int i,j;

    for (i=1;i<=nItems;i++){
	for (j=0;j<=size;j++){
	    if (weights[i-1]<=j){
		matrix[i][j] = max(matrix[i-1][j],values[i-1]+matrix[i-1][j-weights[i-1]]);
		if (values[i-1]+matrix[i-1][j-weights[i-1]]>matrix[i-1][j])
		    picks[i][j]=1;
		else
		    picks[i][j]=-1;
	    }
	    else{
		picks[i][j] = -1;
		matrix[i][j] = matrix[i-1][j];
	    }
	}
    }

    return matrix[nItems][size];

}

void printPicks(int item, int size, int weights[]){

    while (item>0){
	if (picks[item][size]==1){
	    printf("%d ",item-1);
	    item--;
	    size -= weights[item];
	}
	else{
	    item--;
	}
    }

    printf("\n");

return;
}

int main(){
	int i;
    int nItems;
    int knapsackSize;
    int weights[10];
    int values[10];
    
    printf("\n KNAPSACK PROBLEM USING DYNAMIC PROGRAMMING  ");
	printf("\nEnter No of Items: ");
	scanf("%d",&nItems);
	printf("\nEnter Knapsacksize: ");
	scanf("%d",&knapsackSize);

	for(i=1;i<=nItems;i++)
	{
	printf("\nEnter Weight of Item %d: ",i);
	scanf("%d",&weights[i]);
	}
	for(i=1;i<=nItems;i++)
	{
	printf("\nEnter value of Item %d: ",i);
	scanf("%d",&values[i]);
	}
    printf("\nMax value = %d",knapsack(nItems,knapsackSize,weights,values));
    printf("\nPicks were: ");
    printPicks(nItems,knapsackSize, weights);

getch();}

