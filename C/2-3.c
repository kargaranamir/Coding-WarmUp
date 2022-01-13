#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    char dept[50];
    int year;
    long int stnum;
    float gpa;
};

// sort gpa
void sort_gpa(struct student *s, int size)
{
    struct student temp;
    
    for(int i=0; i<size ;i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(s[j].gpa < s[j+1].gpa)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}



// sort name
void sort_name(struct student *s, int size)
{
    struct student temp;
    
    for(int i=0; i<size ;i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(strcmp(s[j+1].name, s[j].name)>0)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}



// show info based on the input student number
void showinfo(struct student *ptr, int size) {
    
    int flag =0;
    int long stnum_temp;
    
    printf("enter the student number you want to search\n");
    scanf("%ld", &stnum_temp);

    for (int i = 0; i<size; i++) {
        if (ptr->stnum == stnum_temp)
        {
            printf("name is: %s, department is: %s \n", ptr->name, ptr->dept);
            printf("enternace year is: %d, gpa is: %f \n", ptr->year, ptr->gpa);
            flag=1;
        }
        ptr++; //next
      }
    if (flag==0)
        printf("Not Found");

}


void store_names_with_year(struct student *ptr, int size)
{
    int year_temp;
    char names[100][50];
    int store_name_index = 0;
    
    printf("enter the year you want to search/store\n");
    scanf("%d", &year_temp);
    
    for (int i = 0; i<size; i++) {
        if (ptr->year == year_temp)
        {   
            strcpy(names[store_name_index], ptr->name);
            store_name_index++;
        }
        ptr++; //next
      }
    
    for (int i=0; i<=store_name_index; i++)
        printf("%s \n", names[i]);
     
}

void main()
{
    
    struct student s[100];
    int size;
    

    // get informations
    printf("Enter the no of students that you want to enter\n");
    scanf("%d", &size);
    printf("enter student info respectively as name, department, entrance year, student number, and gpa\n");
    for(int i=0; i<size; i++)
    {
        printf("enter %d(st,nd,th) student:\n", i+1);
        scanf("%s %s %d %ld %f", s[i].name, s[i].dept, &s[i].year, &s[i].stnum, &s[i].gpa);
        
    }
    
    // sort gpa
    printf("sort gpas desc:\n");
    sort_gpa(s, size);
    for(int i=0; i<size; i++)
    {
        printf("gpa of %s is %f\n",s[i].name, s[i].gpa);
    }

    // sort name
    printf("sort names desc:\n");
    sort_gpa(s, size);
    for(int i=0; i<size; i++)
    {
        printf("name is : %s\n",s[i].name);
    }

    // call the search function based on student number
    showinfo(s, size);
    
    // store and print names with year
    store_names_with_year(s, size);
    
}
