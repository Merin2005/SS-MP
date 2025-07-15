#include<stdio.h>
void main()
{
  int temp,j,n,i,bt[40],wt[40],tat[40],p[50],pr[50];
  float avg_wt=0,avg_tat=0;
  printf("Enter the number of processes:");
  scanf("%d",&n);
  printf("Enter the the burst time and priority of each process:\n");
  for(i=0;i<n;i++)
  {
   printf("Process %d\n :",i+1);
   printf("P %d burst time : ",i+1);
   scanf("%d",&bt[i]);
  
   printf("enter P%d priority : ",i+1);
   scanf("%d",&pr[i]);
   p[i]=i+1;
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if (pr[i]>pr[j]) 
      {
       temp=pr[i];
       pr[i]=pr[j];
       pr[j]=temp;
       temp=bt[i];
       bt[i]=bt[j];
       bt[j]=temp;
       temp=p[i];
       p[i]=p[j];
       p[j]=temp;
      
      }
      }}
      
wt[0]=0;
  for(i=1;i<n;i++)
  {
   wt[i]=wt[i-1]+bt[i-1];
   avg_wt+=wt[i];
  }
  for(i=0;i<n;i++)
  {
   
   tat[i]=bt[i]+wt[i];
   avg_tat+=tat[i];
  }
  printf("\nProcess | Burst time |  Priority  | waitng time |Turnaround time\n");
  for(i=0;i<n;i++)
  {
     printf("P%d\t   %d\t\t    %d\t\t    %d\t\t    %d\n",p[i],bt[i],pr[i],wt[i],tat[i]);
  }
  
  
   avg_wt/=n;
   avg_tat/=n;
   printf("\n Avearge waiting time %.2f",avg_wt);
   printf("\n Avearge turnaround time %.2f \n",avg_tat);
   }
