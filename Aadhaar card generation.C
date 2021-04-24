#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>

//STRUCT is a c++data structure used to store data of different data-types
struct tree
{
	int age;
	char name[30];
	char doorno[10];
	char address[30];
	char first_name[10];
	char gender[10];
	int uid;
	char dob[10];
	char pin[10];
	struct tree *left;
	struct tree *right;
};
typedef struct tree a;
a *root1=NULL,*root2=NULL,*root3=NULL,*root4=NULL,*root5=NULL,*cur,*root,*new1,*su;  // these are few of the struct declared pointers which will be used in the below methods

//the below are method declaration for inserting, displaying, searching, deleting the node of aadhaar applicant and a random function to generate UID
void insert(a*,a*);
void display(a*);
int random(int g, int h,int v);
void search(a* , int ,int );
a *minsert(a*);
void delete(a*,int,int);

int main()
{
	int c,state_choice2,state_choice,f,y,state_choice3,key,id,age,uid_num,UID_age,state_choice4,num_uid,min_uid= 11111111,max_uid= 99999999,uid_increment = 1; 
    char x,ch,s[50];
	printf("*****************UNIQUE IDENTIFICATION AUTHORITY OF INDIA********************** \n*************************GOVERNMENT OF INDIA*****************\n\n");
	while(1)
	{
		//Menu page to display the options to the user to choose which operation they want to perform
		printf("1.CREATE A NEW AADHAAR ACCOUNT\n2.DISPLAY ALL THE REGISTERED CANDIDATES DETAILS\n3. DELETE YOUR ACCOUNT PERMANENTLY\n4.SEARCH IF YOUR AADHAAR ACCOUNT EXIST\n5.EXIT\n");
		scanf("%d",&c);
		switch(c)
		{
			//case 1 to create new aadhar account
			case 1: new1=(a*)malloc(sizeof(a));
					printf("PERSONAL DETAILS\n");
					printf("Enter your full name\n");
					scanf("%s",&new1->name);
					printf("Enter your Date of Birth(DD_MM_YYYY)\n");
					scanf("%s",&new1->dob);
					printf("Enter your age\n");
					scanf("%d",&new1->age);
					printf("Enter your father's name\n");
					scanf("%s",&new1->first_name);
					printf("ADDRESS DETAILS\n");
					printf("Enter your house door no\n");
					scanf("%s",&new1->doorno);
					printf("Enter your permenant address\n");
					scanf("%s",&new1->address);
					printf("Enter your pincode(Example: bg_560016)\n");
					scanf("%s",&new1->pin);
					printf("Gender(Male,Female or Others)\n");
					scanf("%s",&new1->gender);
					srand(time(0));   
    				uid_num=random(min_uid,max_uid,uid_increment); 
    				printf("Your UID number is: %d\n",uid_num);
    				new1->uid=uid_num;
					new1->left=new1->right=NULL;
					printf("Enter the state you belong to:\n 1.Karnataka\n 2.Tamil Nadu\n 3.kerala\n 4.Andhra Pradesh\n 5.Goa\n");
					scanf("%d",&state_choice2);
					switch(state_choice2)
					{
						case 1:	
								if(root1==NULL)
								{
									root1=new1;
								}
								else 
								{
									insert(root1,new1);	
								}
								break;
						case 2:	if(root2==NULL)
								{
									root2=new1;
								}
								else 
								{
									insert(root2,new1);	
								}
								break;
						case 3:	
								if(root3==NULL)
								{
									root3=new1;
								}
								else 
								{
									insert(root3,new1);	
								}
								break;
						case 4:	
								if(root4==NULL)
								{
									root4=new1;
								}
								else 
								{
									insert(root4,new1);	
								}
								break;
						case 5:	
								if(root5==NULL)
								{
									root5=new1;
								}
								else 
								{
									insert(root5,new1);	
								}
								break;
						default : printf("enter correct option\n");	
					}
					break;
			//case 2 to display all registered candidates
			case 2: printf("The registered candidates details: Enter the state \n1.Karnataka\n2.Tamil Nadu\n3.kerala\n4.Andhra Pradesh\n5.Goa\n");
					scanf("%d",&state_choice);
					switch(state_choice)
					{
						case 1:if(root1==NULL)
									printf("No candidates have registered\n");
								else
									display(root1);
								break;
						case 2:if(root2==NULL)
									printf("No candidates have registered\n");
								else
									display(root2);
								break;
						case 3:if(root3==NULL)
									printf("No candidates have registered\n");
								else
									display(root3);
								break;
						case 4:if(root4==NULL)
									printf("No candidates have registered\n");
								else
									display(root4);
								break;
						case 5:if(root5==NULL)
									printf("No candidates have registered\n");
								else
									display(root5);
								break;		
					}
					break;
			
			//case 3 if a person wants to delete his/her existing Aadhaar account
			case 3: printf("Enter the state you belong to:\n 1.Karnataka\n 2.Tamil Nadu\n 3.kerala\n 4.Andhra Pradesh\n 5.Goa\n");
					scanf("%d",&state_choice3);
					printf("Enter your age as per mentioned in AADHAAR card\n");
					scanf("%d",&age);
					printf("Enter your UID number as per mentioned in your AADHAAR card\n");
				    scanf("%d",&id);
				    switch(state_choice3)
				    {
				    	case 1:if(root1==NULL)
									printf("No candidates\n");
								else
									 delete(root1,age,id);
								break;
						case 2:if(root2==NULL)
									printf("No candidates\n");
								else
									 delete(root2,age,id);
								break;
						case 3:if(root3==NULL)
									printf("No candidates\n");
								else
									 delete(root3,age,id);
								break;
						case 4:if(root4==NULL)
									printf("No candidates\n");
								else
									 delete(root4,age,id);
								break;
						case 5:if(root5==NULL)
									printf("No candidates\n");
								else
									 delete(root5,age,id);
								break;		
					}
				   	break;
			
				//case 4 This option helps user identify if his/her account is registered
				case 4:printf("Enter your age as per mentioned in AADHAAR card\n");
						scanf("%d",&UID_age);
						printf("Enter your UID number as per mentioned in AADHAAR card\n");
						scanf("%d",&num_uid);
						printf("Enter your state\n 1.Karnataka\n 2.Tamil Nadu\n 3.kerala\n 4.Andhra Pradesh\n 5.Goa\n");
						scanf("%d",&state_choice4);
						switch(state_choice4)
						{
							case 1:if(root1==NULL)
									printf("No candidates\n");
								else
									 search(root1,UID_age,num_uid);
								break;
						case 2:if(root2==NULL)
									printf("No candidates\n");
								else
									 search(root2,UID_age,num_uid);
								break;
						case 3:if(root3==NULL)
									printf("No candidates\n");
								else
									 search(root3,UID_age,num_uid);
								break;
						case 4:if(root4==NULL)
									printf("No candidates\n");
								else
									 search(root4,UID_age,num_uid);
								break;
						case 5:if(root5==NULL)
									printf("No candidates\n");
								else
									 search(root5,UID_age,num_uid);
								break;		
						}
						break;
		
				//case 5 Exit from the project						
				case 5: printf("*****************THANK YOU***********************");
						exit(0);
			
			default: printf("Enter the correct choice\n");
		}		
	}
}

//This insert function performs insertion of user details in the tree according to their age
void insert(a *cur,a *new1)
{
	if(new1->age > cur->age)
	{
		if(cur->right!=NULL)
			insert(cur->right,new1);
		else
			cur->right=new1;
	}
	else
	if(new1->age < cur->age)
	{
		if(cur->left!=NULL)
			insert(cur->left,new1);
		else
			cur->left=new1;
	}
	
}

//This display function displays all the registered Aadhaar users 
void display(a *cur)
{
	if(cur!=NULL)	
	{
		display(cur->left);
			printf("NAME: %s\n",cur->name);		
			printf("DATE OF BIRTH: %s\n",cur->dob);		
			printf("AGE: %d\n",cur->age);
			printf("FATHERS NAME: %s\n",cur->first_name);
			printf("PERMANENT ADDRESS: #%s, %s\n",cur->doorno,cur->address);
			printf("PINCODE: %s\n",cur->pin);
			printf("GENDER: %s\n",cur->gender);
			printf("UID NUMBER: %d\n\n",cur->uid);
		display(cur->right);
	}
}

//Random() is used to generate the Aadhaar Id and is unique. 
int random(int g, int h,int v) 
{ 
    int i,num; 
    for (i = 0; i < v; i++) 
	{ 
        num = (rand() % (g - h + v)) + g; 
	}
		return num;
}   


//This delete function is used to delete a users account permanently
void delete(a* root,int age,int id)
{
	int aq;
	a *parent=NULL;
	a *cur=root;
	while(cur!=NULL&&cur->age!=age&&cur->uid!=id)
	{
		parent=cur;
		if(age < cur->age)
			cur=cur->left;
		else
			cur=cur->right;
	}
	if(cur==NULL)
		printf("Your AADHAAR account does not exist\n");
		else
	if(cur->left==NULL&&cur->right==NULL)
	{
		if(cur!=root)
		{
			if(parent->left==cur)
				parent->left=NULL;
			else
				parent->right=NULL;
		}
		else	
			root=NULL;
	   	free(cur);
	   	printf("Your account is successfully deleted\n");
	   
	}
	
	else if((cur->left!=NULL)&&(cur->right==NULL))
	{
		if(parent->left==cur)
			parent->left=cur->left;
		else
		parent->right=cur->left;
	free(cur);
	 printf("Your account is successfully deleted\n");
	}
	else if((cur->left==NULL)&&(cur->right!=NULL))
	{
		if(parent->left==cur)
		parent->left=cur->right;
		else
			parent->right=cur->right;
		free(cur);
		 printf("Your account is successfully deleted\n");
	}
	else if(cur->left!=NULL&&cur->right!=NULL)
	{
		su=min(cur->right);
		int val=su->age;
		printf("enter ur UID again\n");
		scanf("%d",&aq);
		delete(root,su->age,aq);
		cur->age=val;
		 printf("Your account is successfully deleted\n\n");
	}
	else
	printf("Enter valid UID number\n\n");
	
}

//This min() is used to find the minimum age user
a *min(a* cur)
{
	while(cur->left!=NULL)
		cur=cur->left;
	return cur;
}

//This search function is used to search any user if they are registered
void  search(a* cur, int UID_age,int num_uid) 
{
   while(cur!=NULL && num_uid!=cur->uid)
   {
      if(UID_age < cur->age)
         cur = cur->left;
      else
         cur = cur->right;
   }
   if(cur!=NULL)
   {
   printf("Yes, your AADHAAR account exist. Your details as per our database is:\n ");
   	printf("NAME: %s\n",cur->name);		
			printf("DATE OF BIRTH: %s\age",cur->dob);		
			printf("AGE: %d\n",cur->age);
			printf("FATHERS NAME: %s\n",cur->first_name);
			printf("PERMANENT ADDRESS: #%s, %s\n",cur->doorno,cur->address);
			printf("PINCODE: %s\n",cur->pin);
			printf("GENDER: %s\n",cur->gender);
			printf("UID NUMBER: %d\n\n",cur->uid);
	}
	else
	printf("Soory your details were not found\n\n");
}
