 #include<stdio.h>
 int main()
 {
     int grade[10],i,sum=0;
     float avg;
     for(i=0; i<10; i++)
     {
         printf("\n\nenter grade : [%d]",i+1);
         scanf("%d",&grade[i]);
         sum+=grade[i];
     }
     avg =(float)(sum)/i;
     printf("\n\n Average is ; %d",avg);
     return 0;
 }
