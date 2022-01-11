#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct details
{
	char firstname[10];
	char lastname[10];
	int roll_no;
	float cgpa;
	int course_id[5];

} detail;
detail std[50];
int k=0;
void addStudent()
{
	printf("Enter your First name\n");
	scanf("%s",std[k].firstname);
	printf("Enter your last  name\n");
	scanf("%s",std[k].lastname);
	printf("Enter your roll no\n");
	scanf("%d",&std[k].roll_no);
	int l=0;
	for(int j=0;j<k;j++)
	{
		if(std[k].roll_no==std[j].roll_no)
		l++;
	}
	if(l>0)
	printf ("The Roll number you have entered is already existing\n");
	else
	{
		printf("Enter your CGPA\n");
		scanf("%f",&std[k].cgpa);
		printf("Enter which courses you have choosen\n");
		printf("Enter 1 if have choosen the course otherwise Enter 0 \n");
		printf("Have you registered for CP?\n");
		int temp;
		scanf("%d",&temp);
		if(temp==1)
		std[k].course_id[0]=1;
		printf("Have you registered for DLD?\n");
		scanf("%d",&temp);
		if(temp==1)
		std[k].course_id[1]=1;
		printf("Have you registered for DMPT?\n");
		scanf("%d",&temp);
		if(temp==1)
		std[k].course_id[2]=1;
		printf("Have you registered for OC?\n");
		scanf("%d",&temp);
		if(temp==1)
		std[k].course_id[3]=1;
		printf("Have you registered for ENGLISH?\n");
		scanf("%d",&temp);
		if(temp==1)
		std[k].course_id[4]=1;
		k++;
	}
}


void findStudent()
{	
	int temp;
	printf("Enter your Roll Number \n");
	scanf("%d",&temp);
	int l=0;
	for(int i=0;i<k;i++)
	{
		if(temp==std[i].roll_no)
		{
			printf("First name is %s : ",std[i].firstname);
			printf("Last name is %s : ",std[i].lastname);
			printf("Roll no is %d :",std[i].roll_no);
			printf("CGPA is %f :",std[i].cgpa);
			for(int j=0;j<5;j++)
			{
				if(std[i].course_id[j]==1)
				{
				if(j==0) printf("CP\n");
				if(j==1) printf("DLD\n");
				if(j==2) printf("DMPT\n");
				if(j==3) printf("OC\n");
				if(j==4) printf("ENGLISH\n");
				}
			}
		}
	}
}


void findStudents()
{	char temp[10];
	printf("Enter your First Name \n");
	scanf("%s",temp);
	int check=0;
	for(int i=0;i<k;i++)
	{
		if(temp==std[i].firstname)
		{
			printf("First Name is %s\n",std[i].firstname);
			printf("Last Name is %s\n",std[i].lastname);
			printf("Roll No is %d\n",std[i].roll_no);
			printf("CGPA is %f\n",std[i].cgpa);
			for(int j=0;j<5;j++)
			{
				if(std[i].course_id[j]==1)
				{
				if(j==0) printf("CP\n");
				if(j==1) printf("DLD\n");
				if(j==2) printf("DMPT\n");
				if(j==3) printf("OC\n");
				if(j==4) printf("ENGLISH\n");
				}
			}
		}
	}
}
void finsStudents()
{	int temp;
	printf("Plese select an appropiate number to know who have registered for a particular course \n");
	printf("0 for CP\n");
	printf("1 for DLD\n");
	printf("2 for DMPT\n");
	printf("3 for OC\n");
	printf("4 for ENGLISH\n");	
	scanf("%d",&temp);
	if(temp>=0 && temp<=4)
	{
		for(int i=0;i<k;i++)
		{
		if(std[i].course_id[temp]==1)
			printf("%s %s have registered for the course\n",std[i].firstname,std[i].lastname);
		}
	}
}
void totalStudents()
{
	printf("The total students in the list are %d\n",k);	

}
void deleteStudent()
{	int temp=0;
	printf("Enter your Roll No\n");
	scanf("%d",&temp);
	int check=0;
	for(int i=0;i<k;i++)
	{
		if(temp==std[i].roll_no)
		{
			check++;
			temp=i;
		}
	}
	if(check==0)
	printf("The Roll No. you have entered does not exists\n");
	else
	{
		if(temp == 0 || temp == k)
			k--;
		else
		{
			strcpy(std[temp].firstname,std[k].firstname);
			strcpy(std[temp].lastname,std[k].lastname);
			std[temp].roll_no=std[k].roll_no;
			std[temp].cgpa=std[k].cgpa;
			for(int i=0;i<5;i++)
			{
				std[temp].course_id[i]=std[k].course_id[i];
			}
			strcpy(std[k].firstname,"");
			strcpy(std[k].lastname,"");
			std[k].roll_no=0;
			std[k].cgpa=0.0;
			for(int i=0;i<5;i++)
			{
				std[k].course_id[i]=0;
			}
			k--;
		}
				
	}
}

void updateStudent()
{	int temp=0;
	printf("Enter your Roll No\n");
	scanf("%d",&temp);
	int check=0;
	for(int i=0;i<k;i++)
	{
		if(temp ==std[i].roll_no)
		{
			check++;
			temp=i;
		}
	}
	if(check==0)
	printf("The Roll No. you have entered does not exists\n");
	else
	{		int ch=0,upd=0;char up[10];float upf=0.0;
			printf("Which field do you want to change?\n");
			printf("Enter 1 to update first name\n");
			printf("Enter 2 to update last name\n");
			printf("Enter 3 to update roll number\n");
			printf("Enter 4 to update cgpa\n");
			printf("Enter 5 to update registed courses\n");
			scanf("%d",&ch);		
			switch(ch)
			{
			case 1: printf("Enter the first name to update \n");
				scanf("%s",up);
				strcpy(std[temp].firstname,up);break;
			case 2: printf("Enter the last name to update\n ");
				scanf("%s",up);
				strcpy(std[temp].lastname,up);break;
			case 3: printf("Enter the roll no to update\n");
				scanf("%d",&std[temp].roll_no);break;		
			case 4: printf("Enter the CGPA to update \n");
				scanf("%f",&std[temp].cgpa);break;
			case 5: printf("Enter which courses you have choosen\n");
		printf("Enter 1 if have choosen the course otherwise enter 0\n");
		printf("Have you registered for CP?\n");
		int new;
		scanf("%d",&new);
		if(new==1)
		std[temp].course_id[0]=1;else std[temp].course_id[0]=0; 
		printf("Have you registered for DLD?\n");
		scanf("%d",&new);
		if(new==1)
		std[temp].course_id[1]=1; else std[temp].course_id[1]=0;
		printf("Have you registered for DMPT?\n");
		scanf("%d",&new);
		if(new==1)
		std[temp].course_id[2]=1;else std[temp].course_id[2]=0;
		printf("Have you registered for OC?\n");
		scanf("%d",&new);
		if(new==1)
		std[temp].course_id[3]=1;else std[temp].course_id[3]=0;
		printf("Have you registered for ENGLISH?\n");
		scanf("%d",&new);
		if(new==1)
		std[temp].course_id[4]=1;else std[temp].course_id[4]=0;		

			
		}
	}
}
void PrintStudentStatistics()
{
	float median,var=0,mean,sd,sum=0,ar[k],swap;


	for(int i=0;i<k;i++)
	{
		sum+=std[i].cgpa;
		ar[i]=std[i].cgpa;
	}
	mean=sum/k;
	printf("Mean=%f\n",mean);
	for(int y=0;y<k-1;y++)
	{
		for(int v=0;v<k-y-1;v++)
		{
			if(ar[y]>ar[y+1])
			{
				swap=ar[y];
				ar[y]=ar[y+1];
				ar[y+1]=swap;

			}

		}
	}

	if(k%2==0)
	median=(std[(k-1)/2].cgpa+std[k/2].cgpa)/2;
	else
	median=std[(k-1)/2].cgpa;
	printf("Median is %f\n",median);
	for(int b=0;b<k;b++)
	{
		var+=(std[b].cgpa-mean)*(std[b].cgpa-mean);
	}
	var=var/k;
	sd=sqrt(var);
	printf("Standard deviation is %f\n",sd);

}

void PrintCourseSummary()
{		for(int temp=0;temp<5;temp++)
		{
			printf("The students who registered for course with course id %d are \n",temp);
			for(int i=0;i<k;i++)
			{			
				if(std[i].course_id[temp]==1)
				printf("%s %s\n",std[i].firstname,std[i].lastname);
			}
		}
}
void main()
{       
	while(1)
	{
		printf("Please select appropiate no. for your task\n");
		printf("1- to quit\n");
		printf("2- to Add student detail into the list\n");
		printf("3- to Print student details using roll no\n");
		printf("4- to Print student details using first name\n");
		printf("5- to Print all students details in a particular course\n");
		printf("6- to Print total number of students in list\n");
		printf("7- to Delete student details by using roll no\n");
		printf("8- to Update student details by using roll no\n");
		printf("9- to Know the statistics of a student\n");
		printf("10- to know the number of people in each course\n");
		int ch;
		scanf("%d",&ch);
		if(ch==1) break;
		switch(ch)
		{
			case 2:addStudent();break;
			case 3:findStudent();break;
			case 4:findStudents();break;
			case 5:finsStudents();break;
			case 6:totalStudents();break;
			case 7:deleteStudent();break;
			case 8:updateStudent();break;
			case 9:PrintStudentStatistics();break;
			case 10: PrintCourseSummary();break;
			default:printf("You have entered an invalid number\n");
		}
	}
	printf("Thank You! I hope you have got the required details\n");
}


