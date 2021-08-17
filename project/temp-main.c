#include<stdio.h>
#include<string.h>

int main();
/* WILL NOT BE REQUIRED MOSTLY

int votesCount1=0;
int votesCount2=0; 
int votesCount3=0;
int votesCount4=0;
int nota_votes=0;

*/
//vote - casting function
void castVote() //for students
{
    int choice;   
    char username[50];
    char password[50];
    
    CONDITION_1 : printf("\nEnter your username: ");
    scanf("%s", username);
    FILE *f1=fopen("student.txt","r+");
    char line[100];
	int i=5;
    for(i;fgets(line,100,f1);i--)
    {
        char *name=strtok(line," ");
        if ( strcmp(username,name) == 0 ) //username validation
        {
            char *vote=strtok(NULL," ");
            if (strcmp(vote,"0")==0)
            {    
                CONDITION_2 : printf("\nEnter the password:");
                scanf("%s", password);
                char *pass=strtok(NULL," ");
                if (strcmp(password,pass)== 0 ) //password validation
                {
                    printf("You are eligible to vote");

                    printf("\n\n *** Please choose your Head Boy ***\n\n");
                    printf("\n 1. %s", Boy1);
                    printf("\n 2. %s", Boy2);
                    printf("\n 3. %s", Boy3);
                    printf("\n 4. %s", Boy4);
                    printf("\n 5. %s", "NOTA");

                    printf("\n\n Input your choice (1 - 5) :\n ");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                        case 1: 
                        {
                            votesCount1++; //increase the candidate's boy by 1 in "Head-boy".txt
                        
                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 2: 
                        {
                            votesCount2++; //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 3: 
                        {
                            votesCount3++; //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 4: 
                        {
                            votesCount4++; //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 5: 
                        {
                            nota_votes++;//increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }
                    
                        default: printf("\n Error: Wrong Choice !! Please retry ");
                            //hold the screen
                            //getchar();
                    }
                    

                //---------------------------------------------------------------------------------

                CONDITION_5 : printf("\n\n *** Please choose your Head Girl ***\n\n");
                printf("\n 1. %s", G1);
                printf("\n 2. %s", G2);
                printf("\n 3. %s", G3);
                printf("\n 4. %s", G4);
                printf("\n 5. %s", "NOTA");

                printf("\n\n Input your choice (1 - 5) :\n ");
                scanf("%d",&choice);

                switch(choice)
                {
                    case 1: 
                    {
                        votesCount1++; //increase the candidate's boy by 1 in "Head-girl".txt

                        // change the number of times voted with that username in "student.txt" to 1
                        printf("\nThanks for voting!!! You are a responsible person!!!");
                        break;
                    }
                    case 2: 
                    {
                        votesCount2++; //increase the candidate's boy by 1 in "Head-girl".txt

                         // change the number of times voted with that username in "student.txt" to 1
                        printf("\nThanks for voting!!! You are a responsible person!!!");
                        break;
                    }
                    case 3: 
                    {
                        votesCount3++; //increase the candidate's boy by 1 in "Head-girl".txt

                         // change the number of times voted with that username in "student.txt" to 1
                        printf("\nThanks for voting!!! You are a responsible person!!!");
                        break;
                    }
                    case 4: 
                    {
                        votesCount4++; //increase the candidate's boy by 1 in "Head-girl".txt

                         // change the number of times voted with that username in "student.txt" to 1
                        printf("\nThanks for voting!!! You are a responsible person!!!");
                        break;
                    }
                    case 5: 
                    {
                        nota_votes++;//increase the candidate's boy by 1 in "Head-girl".txt

                         // change the number of times voted with that username in "student.txt" to 1
                        printf("\nThanks for voting!!! You are a responsible person!!!");
                        break;
                    }
                    
                    default: printf("\n Error: Wrong Choice !! Please retry ");
                            //hold the screen
                            //getchar();
                }
                break;
                    }
            else
            {
                printf("Access denied. Please retry!");
                goto CONDITION_2;
            }
        }
        else 
        {
            printf("\nYou can only vote once.\n");
            main();
        }
    }
    /*
    else
    {
        printf("Invalid Username! Please try again.");
        goto CONDITION_1;
    }*/
    
    
    }
    	if(i==0)
	{
		printf("invalid username");
		goto CONDITION_1;
    }
    
    main();
}




//vote counting function
void votesCount()
{

    Boy1_votes = // get from "Head_Boy.txt"
    Boy2_votes = // get from "Head_Boy.txt"
    Boy3_votes = // get from "Head_Boy.txt"
    Boy4_votes = // get from "Head_Boy.txt"

    printf("\n\n ##### Voting Statics ####");

    printf("\n\n HEAD BOY");
    //print as a table
    printf("\n\n NAME \t \t Number of votes");

    printf("\n %s \t \t %d ", <Boy1>, <Boy1_votes>);
    printf("\n %s \t \t %d ", <Boy2>, <Boy2_votes>);
    printf("\n %s \t \t %d ", <Boy3>, <Boy3_votes>);
    printf("\n %s \t \t %d ", <Boy4>, <Boy4_votes>);

    // ------------------------------------------------------------------------------

    Girl1_votes = // get from "Head_Girl.txt"
    Girl2_votes = // get from "Head_Girl.txt"
    Girl3_votes = // get from "Head_Girl.txt"
    Girl4_votes = // get from "Head_Girl.txt"
    printf("\n\n HEAD GIRL");
    //print as a table
    printf("\n\n NAME \t \t Number of votes");
    
    printf("\n %s \t \t %d ", <Girl1>, <Girl1_votes>);
    printf("\n %s \t \t %d ", <Girl2>, <Girl2_votes>);
    printf("\n %s \t \t %d ", <Girl3>, <Girl3_votes>);
    printf("\n %s \t \t %d ", <Girl4>, <Girl4_votes>);  
}

//winner 

void getLeadingCandidate()
{
    printf("\n\n  #### The Head Boy is: ####\n\n");

    // need to get all votes for head boy and check who is highest using below conditions

    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",Candidate1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",Candidate2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",Candidate3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",Candidate4);
    else
    printf("----- Warning !!! No-win situation----");       


    //---------------------------------------------------------------------------------

     printf("\n\n  #### The Head Girl is: ####\n\n");

    // need to get all votes for head boy and check who is highest using below conditions

    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",Candidate1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",Candidate2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",Candidate3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",Candidate4);
    else
    printf("----- Warning !!! No-win situation----");       
    
}

//----------------------------------------------------------------------------------------------

typedef struct admin
{

	char user[30];
	char pass[30];
	
}ad ;
void admin()
{
    char line[100];
    char username[50];
    char password[50];
    int adminchoice;
	FILE *fp1 = fopen("admin.txt", "r");
	if (fp1 == NULL)
		printf("THE FILE IS EMPTY");

	ad data[30]; 
	unsigned int size = 0;

	// fgets will extract an individual line, up to 150 characters. 
	// sscanf extracts formatted data from line, matched by integer - string - string - string.
	 while (fgets(line, 150, fp1))
	
		if (sscanf(line, "%s%s", data[size].user, data[size].pass) == 2)
		{
			size++;
		}
	
	// data array contains "size" elements.
    printf("\nEnter your username: ");
    scanf("%s",username);
	for (unsigned int i=0; i <=size; i++)
{
	//printf("\n User: %s, Pass: %s\n", data[i].user, data[i].pass);
        if(strcmp(data[i].user,username)==0)
	  {
	    printf("\nEnter the password:");
            scanf("%s",password);
	if(strcmp(data[i].pass,password)==0)
	   { 
           printf("Access granted");
        do
        {
            printf("\n 1. Find Vote Count");
            printf("\n 2. Find leading Candidate");
            printf("\n 0. Exit");

            printf("\n\n Please enter your choice : ");
            scanf("%d", &adminchoice);

            switch(adminchoice)
            {
                case 0: break;
                case 1: votesCount();break;
                case 2: getLeadingCandidate();break;
                default: printf("\n Error: Invalid Choice");
            }
        }
        while(adminchoice!=0);
       }
        else
	      printf("Incorrect password");
        break;
} 
 //If the admin name is entered incorrect then main menu will be displayed

}      
fclose(fp1);
main();
}

//winner calculation function





//main function

int main()
{

   // FILE *fp1 = fopen("admin.txt", "r");
    FILE *fp2 = fopen("student.txt", "a+");
    FILE *fp3 = fopen("Head_Boy.txt", "a+");
    FILE *fp4 = fopen("Head_Girl.txt", "a+");

    //a+ allows both reading & appending

   // if (fp1 == NULL || fp2 == NULL || fp3 == NULL || fp4 == NULL ||)
      if (fp2 == NULL || fp3 == NULL || fp4 == NULL )
        printf("Cannot open");
    else
    {
        printf("Files are ready to be used!");


        int i;
        int choice;

        printf("\n\n ---Welcome to Election Voting Machine prototype!---");
        printf("\n\n Choose you category: \n 1. Voter \n 2. Admin \n Press 0 to exit the voting model.\n");
        scanf("%d", &choice);


        switch(choice)
                {
                case 1: castVote();break;
                case 2: admin();break;
                case 0: break;
                default: printf("\n Error: Invalid Choice");
                }
    }
    return 0;
}
