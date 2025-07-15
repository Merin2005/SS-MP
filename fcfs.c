#include<stdio.h>
void main()
{
  int n,i,bt[40],wt[40],tat[40];
  float avg_wt=0,avg_tat=0;
  printf("Enter the number of processes:");
  scanf("%d",&n);
  printf("Enter the the burst time of each process\n:");
  for(i=0;i<n;i++)
  {
   printf("burst time of each process p %d: ",i+1);
   scanf("%d",&bt[i]);
  }
wt[0]=0;
  for(i=1;i<n;i++)
  {
   wt[i]=wt[i-1]+bt[i];
   tat[i]=bt[i]+wt[i];
  }
  printf("\nProcess | Burst time | waitng time |Turnaround time\n");
  for(i=0;i<n;i++)
  {
     printf("P%d\t   %d\t\t    %d\t\t   %d\n",i+1,bt[i],wt[i],tat[i]);
  }
  
  for(i=0;i<n;i++)
  {
   avg_wt+=wt[i];
   avg_tat+=tat[i];
  }
   avg_wt/=n;
   avg_tat/=n;
   printf("\n Avearge waiting time %.2f",avg_wt);
   printf("\n Avearge turnaround time %.2f \n",avg_tat);
   }
