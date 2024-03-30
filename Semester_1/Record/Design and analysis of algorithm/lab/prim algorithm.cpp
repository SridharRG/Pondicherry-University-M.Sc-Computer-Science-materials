#include<stdio.h>
#define INF 1000
int vertex[10];
int wght[10][10];
int new_wght[10][10];
int closed[10];
int n;
int inclose(int i,int n1)
{
int j;
for(j=0;j<=n1;j++)
if(closed[j]==i)
return 1;
return 0;
}
void buildtree()
{
int i=0,j,count=0;
int min,k,v1=0,v2=0;
closed[0]=0;
while(count<n-1)
{
min=INF;
for(i=0;i<=count;i++)
for(j=0;j<n;j++)
if(wght[closed[i]][j]<min && !inclose(j,count))
{
min=wght[closed[i]][j];
v1=closed[i];
v2=j;
}
new_wght[v1][v2]=new_wght[v2][v1]=min;
count++;
closed[count]=v2;

}
}
int main()
{
int i,j,ed,sum=0;

printf("PRIM'S ALGORITHM\n");
printf("Enter the No of Nodes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
vertex[i]=i+1;
for(j=0;j<n;j++)
{
wght[i][j]=INF;
new_wght[i][j]=INF;
}
}
printf("\nEnter Weight\n");
printf("Enter 0 if path doesn't exist b/w two vertices(v1,v2) Otherwise enter Weight\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
printf("%d --- %d : ",vertex[i],vertex[j]);
scanf("%d",&ed);
if(ed>=1)
wght[i][j]=wght[j][i]=ed;
}


buildtree();
printf("\nMINIMUM SPANNING TREE\n");
printf("LIST OF EDGES\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(new_wght[i][j]!=INF)
{
printf("%d --- %d = %d ",vertex[i],vertex[j],new_wght[i][j]);
sum+=new_wght[i][j];
}
printf("\nTotal Weight: %d ",sum);

}
