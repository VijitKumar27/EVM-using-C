struct nominee {
    char name[20];
    int votes;
};

void addnominee();
void readheadboy(struct nominee b[], FILE* );
void readheadgirl(struct nominee g[], FILE* );
void increment(struct nominee a[],char ch);
void display(struct nominee a[]);