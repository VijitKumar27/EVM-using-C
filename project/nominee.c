#include <stdio.h>
#include <string.h>
#include "server.h"

void addnominee();
void readheadboy(struct nominee b[], FILE* );
void readheadgirl(struct nominee g[], FILE* );
void increment(struct nominee a[],char ch);
void display(struct nominee a[]);

/*int main()
{
    addnominee();


    FILE* fb = fopen("headboy.bin","r+");
    FILE* fg = fopen("headgirl.bin","r+");


    struct nominee b[5];
    struct nominee g[5];
    readheadboy(b,fb);
    readheadgirl(g,fg);
//    increment(g,'4');
//    increment(b,'5');
    display(b);
    display(g);

    fclose(fb);
    fclose(fg);

    return 0;
}
*/



void addnominee()
{
    FILE* fpb = fopen("headboy.bin","w+");
    FILE* fpg = fopen("headgirl.bin","w+");

    struct nominee b[5];
    strcpy(b[0].name,"Boy1");
    b[0].votes = 0;
    strcpy(b[1].name,"Boy2");
    b[1].votes = 0;
    strcpy(b[2].name,"Boy3");
    b[2].votes = 0;
    strcpy(b[3].name,"Boy4");
    b[3].votes = 0;
    strcpy(b[4].name,"NOTA");
    b[4].votes = 0;
    struct nominee g[5];
    strcpy(g[0].name,"Girl1");
    g[0].votes = 0;
    strcpy(g[1].name,"Girl2");
    g[1].votes = 0;
    strcpy(g[2].name,"Girl3");
    g[2].votes = 0;
    strcpy(g[3].name,"Girl4");
    g[3].votes = 0;
    strcpy(g[4].name,"NOTA");
    g[4].votes = 0;

    fwrite(&b,sizeof(b),1,fpb);
    fwrite(&g, sizeof(g),1,fpg);
    fclose(fpg);
    fclose(fpb);
}

void readheadboy(struct nominee b[], FILE* fb) {
    for(int i= 0;i<5;i++) {
        fread(b+i, sizeof(*(b+i)), 1, fb);
    }
    fseek(fb, 0, SEEK_SET);
}

void readheadgirl(struct nominee g[], FILE* fg) {
    for(int i= 0;i<5;i++) {
        fread(g+i, sizeof(*(g+i)), 1, fg);
    }
    fseek(fg, 0, SEEK_SET);
}



void increment(struct nominee a[],char ch)
{
    switch (ch)
    {
        case '1':
        {
            ++((a+0)->votes);
            break;
        }
        case '2':
        {
            ++((a+1)->votes);
            break;
        }
        case '3':
        {
            ++((a+2)->votes);
            break;
        }
        case '4':
        {
            ++((a+3)->votes);
            break;
        }
        case '5':
        {
            ++((a+4)->votes);
            break;;
        }

    }
}

void display(struct nominee a[]) 
{
    printf("%s , %d\n",a[0].name ,a[0].votes);
    printf("%s , %d\n",a[1].name ,a[1].votes);
    printf("%s , %d\n",a[2].name ,a[2].votes);
    printf("%s , %d\n",a[3].name ,a[3].votes);
    printf("%s , %d\n",a[4].name ,a[4].votes);
}
