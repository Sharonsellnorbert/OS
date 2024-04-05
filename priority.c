#include<stdio.h>
void main(){
int proc[20];
int bt[50],wt[50],tat[50],l,tp, tot_wt=0,tot_tat=0,pr[50];
printf("Enter the number of Processes\n");
scanf("%d",&l);
for(int i=0;i<l;i++){
printf("Enter the process Name,the Burst Time and the priority\n");
scanf("%d",&proc[i]);
scanf("%d",&bt[i]);
scanf("%d",&pr[i]);
}
wt[0]=0;
tat[0]=bt[0];
tot_tat=tot_tat+tat[0];
for(int i=0;i<l;i++){
for(int j=i+1;j<l;j++){
if(pr[i]>pr[j]){
tp=proc[i];
proc[i]=proc[j];
proc[j]=tp;
tp=bt[i];
bt[i]=bt[j];
bt[j]=tp;
tp=pr[i];
pr[i]=pr[j];
pr[j]=tp;
}
}
}
for(int i=1;i<l;i++){
wt[i]=wt[i-1]+bt[i-1];
tot_wt=tot_wt+wt[i];
tat[i]=tat[i-1]+bt[i];
tot_tat=tot_tat+tat[i];
}
printf("PROCESS\tBurst Time\tPRIORITY\tWaiting Time\tTurn Around Time\n");
for(int i=0;i<l;i++){
printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",proc[i],bt[i],pr[i],wt[i],tat[i]);
}
printf("Average Waiting Time is %f\n",(float)tot_wt/(float)l);
printf("Average Turn Around Time is %f\n",(float)tot_tat/(float)l);
}
