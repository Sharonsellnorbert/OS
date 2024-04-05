#include<stdio.h>
void main(){
int proc[20];
int bt[50],wt[50],tat[50],l;
printf("Enter the number of Processes\n");
scanf("%d",&l);
for(int i=0;i<l;i++){
printf("Enter the process Name and the Burst Time\n");
scanf("%d",&proc[i]);
scanf("%d",&bt[i]);
}
wt[0]=0;
tat[0]=bt[0];
int tot_wt=0,tot_tat=0;
tot_tat=tot_tat+tat[0];
for(int i=1;i<l;i++){
wt[i]=wt[i-1]+bt[i-1];
tot_wt=tot_wt+wt[i];
tat[i]=tat[i-1]+bt[i];
tot_tat=tot_tat+tat[i];
}
printf("PROCESS\tBurst Time\tWaiting Time\tTurn Around Time\n");
for(int i=0;i<l;i++){
printf("%d\t%d\t\t%d\t\t%d\n",proc[i],bt[i],wt[i],tat[i]);
}
printf("Average Waiting Time is %f\n",(float)tot_wt/(float)l);
printf("Average Turn Around Time is %f\n",(float)tot_tat/(float)l);
}
