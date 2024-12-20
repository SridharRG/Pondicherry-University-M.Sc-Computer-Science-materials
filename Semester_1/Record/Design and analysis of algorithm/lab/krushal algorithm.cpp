#include<stdio.h>
#define INF 1000
char vertex[10];
int wght[10][10];
int span_wght[10][10];
int source;
struct Sort
{
int v1,v2;
int weight;
}que[20];
int n,ed,f,r;
int cycle(int s,int d)
{
int j,k;
if(source==d)
return 1;
for(j=0;j<n;j++)
if(span_wght[d][j]!=INF && s!=j)
{
if(cycle(d,j))
return 1;
}
return 0;
}
void build_tree()
{
int i,j,w,k,count=0;
for(count=0;count<n;f++)
{
i=que[f].v1;
j=que[f].v2;
w=que[f].weight;
span_wght[i][j]=span_wght[j][i]=w;
source=i;
k=cycle(i,j);
if(k)
span_wght[i][j]=span_wght[j][i]=INF;
else
count++;
}
}
void swap(int *i,int *j)
{
int t;
t=*i;
*i=*j;
*j=t;
}
int main()
{
int i,j,k=0,temp;
int sum=0;

printf("\n\n\tKRUSKAL'S ALGORITHM\n\n");
printf("\n\tEnter the No. of Nodes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\tEnter %d value : ",i+1);
fflush(stdin);
scanf("%c",&vertex[i]);
for(j=0;j<n;j++)
{
wght[i][j]=INF;
span_wght[i][j]=INF;
}
}
printf("\n\nEnter Weight\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
printf("\nEnter 0 if path Doesn't exist b\w %c to %c : ",vertex[i],vertex[j]);
scanf("%d",&ed);
if(ed>=1)
{
wght[i][j]=wght[j][i]=ed;
que[r].v1=i;
que[r].v2=j;
que[r].weight=wght[i][j];
if(r)
{
for(k=0;k<r;k++)
if(que[k].weight>que[r].weight)
{
swap(&que[k].weight,&que[r].weight);
swap(&que[k].v1,&que[r].v1);
swap(&que[k].v2,&que[r].v2);
}
}
r++;
}
}

build_tree();
printf("\n\n\t\tMINIMUM SPANNING TREE\n\n");
printf("\n\t\tLIST OF EDGES\n\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(span_wght[i][j]!=INF)
{
printf("\n\t\t%c ------ %c = %d ",vertex[i],vertex[j],span_wght[i][j]);
sum+=span_wght[i][j];
}
printf("\n\n\t\tTotal Weight: %d ",sum);

}

