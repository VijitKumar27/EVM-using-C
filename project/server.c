#include"server.h"
#include<stdio.h>
#include<string.h>

//vote counting function
void votesCount()
{

    printf("\n\n ##### Voting Statics ####");

    printf("\n\n HEAD BOY");
    //print as a table
    printf("\n\n NAME \t \t Number of votes");

    printf("\n %s \t \t %d ", b[0].name, b[0].votes);
    printf("\n %s \t \t %d ", b[1].name, b[1].votes);
    printf("\n %s \t \t %d ", b[2].name, b[2].votes);
    printf("\n %s \t \t %d ", b[3].name, b[3].votes);

    // ------------------------------------------------------------------------------

    printf("\n\n HEAD GIRL");
    //print as a table
    printf("\n\n NAME \t \t Number of votes");

    printf("\n %s \t \t %d ", g[0].name, g[0].votes);
    printf("\n %s \t \t %d ", g[1].name, g[1].votes);
    printf("\n %s \t \t %d ", g[2].name, g[2].votes);
    printf("\n %s \t \t %d ", g[3].name, g[3].votes);
}




//winner

void getLeadingCandidate()
{
    printf("\n\n  #### The Head Boy is: ####\n\n");

    // need to get all votes for head boy and check who is highest using below conditions

    if(b[0].votes>b[1].votes && b[0].votes>b[2].votes && b[0].votes>b[3].votes && b[0].votes>b[4].votes)
        printf("[%s]",b[0].name);
    else if (b[1].votes>b[2].votes && b[1].votes>b[3].votes && b[1].votes>b[4].votes && b[1].votes>b[0].votes)
        printf("[%s]",b[1].name);
    else if(b[2].votes>b[3].votes && b[2].votes>b[4].votes && b[2].votes>b[0].votes && b[2].votes>b[1].votes)
        printf("[%s]",b[2].name);
    else if(b[3].votes>b[4].votes && b[3].votes>b[0].votes && b[3].votes>b[1].votes && b[3].votes>b[2].votes)
        printf("[%s]",b[3].name);
    else
        printf("----- Warning !!! No-win situation----");


    //---------------------------------------------------------------------------------

    printf("\n\n  #### The Head Girl is: ####\n\n");

    // need to get all votes for head boy and check who is highest using below conditions

    if(g[0].votes>g[1].votes && g[0].votes>g[2].votes && g[0].votes>g[3].votes && g[0].votes>g[4].votes)
        printf("[%s]",g[0].name);
    else if (g[1].votes>g[2].votes && g[1].votes>g[3].votes && g[1].votes>g[4].votes && g[1].votes>g[0].votes)
        printf("[%s]",g[1].name);
    else if(g[2].votes>g[3].votes && g[2].votes>g[4].votes && g[2].votes>g[0].votes && g[2].votes>g[1].votes)
        printf("[%s]",g[2].name);
    else if(g[3].votes>g[4].votes && g[3].votes>g[0].votes && g[3].votes>g[1].votes && g[3].votes>g[2].votes)
        printf("[%s]",g[3].name);
    else
        printf("----- Warning !!! No-win situation----");

}

//----------------------------------------------------------------------------------------------


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


void castVote() //for students
{
    int choice;
    char username[50];
    char password[50];

    CONDITION_1 : printf("\nEnter your username: ");
    scanf("%s", username);
    FILE *f1=fopen("student.txt","r+");
    fpos_t position;

    char line[100];
    int i=5; int x, y,z;

    int previous =0; int present = 0;

    for(i;fgets(line,100,f1);i--)
    {
        
        char *name=strtok(line," ");

        char *vote=strtok(NULL," ");

        char *pass=strtok(NULL," ");

        previous = present;
        //printf("%lu \t", previous); 


        fgetpos(f1, &position);
        //printf("%lu \n", position); 
        present = position; 
        //printf("%lu \n", present); 
        
        
        if ( strcmp(username,name) == 0 ) //username validation
        {
            //char *vote=strtok(NULL," ");

            //fgetpos(f1, &position);
            //printf("%lu \n", position);       

            if (strcmp(vote,"0")==0)
            {
                CONDITION_2 : printf("\nEnter the password:");
                scanf("%s", password);
                

                //char *pass=strtok(NULL," ");

                //fgetpos(f1, &position);
            //printf("%lu \n", position); 

                

                if (strcmp(password,pass)== 0 ) //password validation
                {
                    printf("You are eligible to vote");

                    printf("\n\n *** Please choose your Head Boy ***\n\n");
                    printf("\n 1. %s", b[0].name);
                    printf("\n 2. %s", b[1].name);
                    printf("\n 3. %s", b[2].name);
                    printf("\n 4. %s", b[3].name);
                    printf("\n 5. %s", b[4].name);

                    CONDITION_6: printf("\n\n Input your choice (1 - 5) :\n ");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                        case 1:
                        {
                            (b[0].votes)++; //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 2:
                        {
                            ++((b+1)->votes); //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 3:
                        {
                            ++((b+2)->votes); //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 4:
                        {
                            ++((b+3)->votes); //increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            goto CONDITION_5;
                            break;
                        }
                        case 5:
                        {
                            ++((b+4)->votes);//increase the candidate's boy by 1 in "Head-boy".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }

                        default: 
                        {
                            printf("\n Error: Wrong Choice !! Please retry ");
                            goto CONDITION_6;
                        }

                        //hold the screen
                            //getchar();
                    }
                    

                    //writing to file - increment to 1

                    //---------------------------------------------------------------------------------

                    CONDITION_5 : printf("\n\n *** Please choose your Head Girl ***\n\n");
                    printf("\n 1. %s", g[0].name);
                    printf("\n 2. %s", g[1].name);
                    printf("\n 3. %s", g[2].name);
                    printf("\n 4. %s", g[3].name);
                    printf("\n 5. %s", g[4].name);

                    CONDITION_7: printf("\n\n Input your choice (1 - 5) :\n ");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                        case 1:
                        {
                            ++((g+0)->votes); //increase the candidate's boy by 1 in "Head-girl".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                              
                            break;
                        }
                        case 2:
                        {
                            ++((g+1)->votes); //increase the candidate's boy by 1 in "Head-girl".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }
                        case 3:
                        {
                            ++((g+2)->votes); //increase the candidate's boy by 1 in "Head-girl".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }
                        case 4:
                        {
                            ++((g+3)->votes); //increase the candidate's boy by 1 in "Head-girl".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }
                        case 5:
                        {
                            ++((g+4)->votes);//increase the candidate's boy by 1 in "Head-girl".txt

                            // change the number of times voted with that username in "student.txt" to 1
                            printf("\nThanks for voting!!! You are a responsible person!!!");
                            break;
                        }

                        default: 
                        {
                            printf("\n Error: Wrong Choice !! Please retry ");
                            goto CONDITION_7;
                        }
                            //hold the screen
                            //getchar();
                    }

                    fseek(f1, previous, SEEK_SET);

                      fgetpos(f1, &position);
                        //printf("%lu \n", position);

                        fprintf(f1, "%s %d %s", name, 1, pass);

                        //fwrite(vote,1,1,f1);

                        break;
                    
                }
                else
                {
                    printf("Access denied. Please retry!");
                    fsetpos(f1, &position);
                    //printf("%lu", position);
                    goto CONDITION_2;
                }
            }
            else
            {
                printf("\nYou can only vote once.\n");
                main();
            }
        }
   
    }
	if(i==0)
	{
		printf("invalid username");
		goto CONDITION_1;
    }

    main();
}