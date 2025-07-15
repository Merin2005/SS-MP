#include<stdio.h>
void main()
{
  int temp,j,n,i,bt[40],wt[40],tat[40],p[50],rt[100];
  float avg_wt=0,avg_tat=0;
  int q,time=0,remaining;
  printf("Enter the number of processes:");
  scanf("%d",&n);
  printf("Enter the the burst time of each process:\n");
  for(i=0;i<n;i++)
  {
 
   printf("P %d burst time : ",i+1);
   scanf("%d",&bt[i]);
   rt[i]=bt[i];
   wt[i]=0;
  }
                
  printf("Enter the time quantum:");
  scanf("%d",&q); 
  
  remaining=n;
  int pro_order[100],order_time[100],index=0;
  
  
  while (remaining>0)   
  {
     for(i=0;i<n;i++)
     {
        if (rt[i]>0)
        {
         pro_order[index]=i+1;
         order_time[index]=time;
         index++;
         
              if (rt[i]>q)
              {
               time+=q;
               rt[i]-=q;
              }
              else
              {
               time+=rt[i];
               wt[i]=time - bt[i];
               rt[i]=0;
               remaining--;
              }
          }
       }         
                
                
   }            
                
             
                
  printf("\nProcess | Burst time | waitng time |Turnaround time\n");
  for(i=0;i<n;i++)
  {
     tat[i]=bt[i]+wt[i];
     avg_wt+=wt[i];
     avg_tat+=tat[i];
     printf("P%d\t   %d\t\t    %d\t\t   %d\n",i+1,bt[i],wt[i],tat[i]);
  }
  
  
   avg_wt/=n;
   avg_tat/=n;
   printf("\n Avearge waiting time %.2f",avg_wt);
  printf("\n Avearge turnaround time %.2f \n",avg_tat);
   }
