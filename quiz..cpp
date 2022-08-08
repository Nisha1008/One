#include<stdio.h>
#include<conio.h>
int main()
{
	
		int i,a,count=0,N=0;//n is the number of question
		char name[20];
		double Avg;
		printf("\n\n\t Are you want to take Test press 1 for Yes press 0 for No");
		scanf("%d",&a);
		switch(a){
			case 1:
				printf("\n\n\t----------START QUIZ-------------\n");
				printf("\n\n\tPlease enter your Name:=");
				scanf("%s",&name);
				printf("\nYOU HAVE TO SELECT ANY ONE OPTION");
				printf("\nQ1. What is %s favoriate colour",name);
				printf("\n 1.Red\n 2.Green\n 3.Yellow\n 4.Black ");
				scanf("%d",&i);
				if(i==4){
					printf("\ncorrect!");
					count=count+1;
					printf("\nyour score is %d",count);
					N++;
				}
				else
					{
					printf("\nincorrect");
					printf("\nyour score is %d",count);
					N++;}
				printf("\nQ2. What is %s profession",name);
				printf("\n 1.Student\n 2.Lawyer\n 3.Employee\n 4.Job seeker");
				scanf("%d",&i);
				if(i==1){
					printf("\ncorrect!");
					count=count+1;
					printf("\nyour score is %d",count);
					N++;
				}
				else{
					printf("\n incorrect");
					printf("\nyour score is %d",count);
				N++;}
				printf("\nQ3.What is %s favoriate place",name);
				printf("\n 1.Home\n 2.School\n 3.College\n 4.Village");
				scanf("%d",&i);
				if(i==1){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
					N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;}
				
				printf("\nQ4.Where %s lived in",name);
				printf("\n 1.Yamunanagar\n 2.Damla\n 3.Radour\n 4.karnal");
				scanf("%d",&i);
				if(i==1){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;}
				
				printf("\nQ4.What is %s favoriate place",name);
				printf("\n 1.Home\n 2.School\n 3.College\n 4.Village");
				scanf("%d",&i);
				if(i==1){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
					N++;
				}
				
				printf("\nQ5.From where %s completed her/his polytechnic",name);
				printf("\n 1.Ambala\n 2.Delhi\n 3.Chandigarh\n 4.Damla");
				scanf("%d",&i);
				if(i==4){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
					N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
					N++;
				}
				
				printf("\nQ6.What is %s favoriate food",name);
				printf("\n 1.Noodles\n 2.Maggie\n 3.Rajma Chawl\n 4.All of these");
				scanf("%d",&i);
				if(i==4){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
					N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
					N++;
				}
				
				printf("\nQ7.How many brother %s have",name);
				printf("\n 1.One\n 2.Two\n 3.Three\n 4.Four");
				scanf("%d",&i);
				if(i==2){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;
				}
				
				printf("\nQ8.%s childhood best friend",name);
				printf("\n 1.Rekha\n 2.Monal\n 3.Deepa\n 4.All of these");
				scanf("%d",&i);
				if(i==4){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;
				}
				
				
				printf("\nQ9.Which person %s love the most",name);
				printf("\n 1.Friends \n 2.Family\n 3.Relatives\n 4.Both 1 and 2");
				scanf("%d",&i);
				if(i==4){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				}
				
				printf("\nQ10.%s Nick Name",name);
				printf("\n 1.Gudiya\n 2.both 1 and 4 \n 3.Nisha\n 4.Nishi");
				scanf("%d",&i);
				if(i==2){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;
				}
					printf("\nQ11.Who love the %s most",name);
				printf("\n 1.Sachin\n 2.family \n 3.friend\n 4.relative");
				scanf("%d",&i);
				if(i==1){
					printf("Correct!");
					count=count+1;
					printf("\nyour score is %d",count);
				N++;
				}
				else{
					printf("incorrect");
					printf("\nyour score is %d",count);
				N++;
				}
				if(count==N){
					Avg=count/11.0;
					printf("\nYou have obtained %lf percentage Marks",Avg);
					printf("\n---------!You are the Winner!------------");
				}
				else{
					printf("\nYour total score is %d out of %d",count,N);
					Avg=count/11.0;
					printf("\nYou have obtained %lf percentage Marks",Avg);
				}
				break;
			case 0:
				printf("---Exited--");
				break;
			default:printf("invalid choice!!!!!");
			break;
		}
return 0;
}
