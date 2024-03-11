#include<stdio.h>
#include<unistd.h>
void main(){
pid_t pd;
int l,n;
pd=fork();
if(pd==0){
printf("Child process\n");
printf("Process ID is %d\n",getpid());
printf("Parent's ID is %d\n",getppid());
printf("Enter the Limit");
scanf("%d",&l);
for(int i=1;i<=l;i++){
printf("%d\t",i);
}
printf("\n");
} 
else if(pd>0){
wait(NULL);
printf("Parent Process\n");
printf("Process ID is %d\n",getppid());
printf("Enter the number");
scanf("%d",&n);
if(n%2==0){
printf("%d is even\n",n);
}
else{
printf("%d is odd\n",n);
}
}
else{
printf("Fork Failed\n");
}
}

