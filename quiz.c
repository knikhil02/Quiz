#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<direct.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>

void writescore(float score, char plnm[20])
{
    float sc;
    char nm[20];
    FILE *f;
    system("cls");
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&nm,&sc);
    if (score>=sc)
    {
        sc=score;
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%.2f",plnm,sc);
        fclose(f);
    }
}


void help()
{
    system("cls");
    printf("\n\n\n\tThis game is very easy to play. You'll be asked C Programming questions");
    printf("\n\n\tand the right answer is to chose from the four options provided.");
    printf("\n\n\tYour score will be calculated at the end.");
    printf("\n\n\tYour score will be calculated and displayed at the end and displayed.");
    printf("\n\n\tIf you secure highest score, your score will be recorded.");
    printf("\n\n\t________________________So ALL THE BEST___________________");
}


void displayscore()
{
    char name[20];
    float s;
    FILE *f;
    system("cls");
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&s);
    printf("\n\n\t\t ");
    printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
    printf("\n\n\t\t ");
    fclose(f);
    getch();
}


int main()
{
    int countq,countr;
    int r,i;
    int nq[11];int w;
    float score;
    char choice;
    char playername[20];
    
    system("cls");
    mainhome:
    system("cls");
    puts("\n\t\tWELCOME TO C PROGRAMMING QUIZ GAME");
    puts("\n\t\t Enter 'S' to start game       ");
    puts("\n\t\t Enter 'V' to view high score  ");
    puts("\n\t\t Enter 'H' for help            ");
    puts("\n\t\t Enter 'Q' to quit             ");
    choice=toupper(getch());
    if (choice=='V')
    {
        displayscore();
        goto mainhome;
    }
    else if (choice=='H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (choice=='Q')
    exit(1);
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\t\t\tEnter your name : ");
        gets(playername);
        home:
        system("cls");
        countq=countr=0;
        i=1;
        start:  //randomizing the sequence of questions.
        srand(time(NULL));
        r=rand()%20+1;
        nq[i]=r;
        for (w=0;w<i;w++)
        if (nq[w]==r)
        goto start;
        switch(r)
        {
            case 1:
            printf("\n\nIn C, parameters are always");
            printf("\n\nA.Passed by value\nB.Passed by reference\nC.Non-pointer variables are passed by value and pointers are passed by reference\nD.Passed by reference\n\n");
            countq++;
            if(toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nA.Passed by value");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is A.Passed by value");
                break;
            }
            case 2:
            printf("\n\nWhich of the following is true about return type of functions in C?");
            printf("\n\nA.Functions can return any type\nB.Functions can return any type except array and functions\nC.Functions can return any type except array,functions and union\nD.Functions can return any type except array,functions,function pointer and union\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.Functions can return any type except array and functions");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is B.Functions can return any type except array and functions");
                break;
            }
            case 3:
            printf("\n\nWhich of the following operators can be applied on structure variables?");
            printf("\n\nA.Equality comparison ( == )\nB.Assignment ( = )\nC.Both of the above \nD.None of the above\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.Assignment ( = )");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is B.Assignment ( = )");
                break;
            }
            case 4:
            printf("\n\nWhich of the following is not a storage class specifier in C?");
            printf("\n\nA.auto\nB.register\nC.static\nD.volatile\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.volatile");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is D.volatile");
                break;
            }
            case 5:
            printf("\n\nWhich of the following is not a logical operator?");
            printf("\n\nA.&&\nB.!\nC.||\nD.|\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.|");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is D.|");
                break;
            }
            case 6:
            printf("\n\nWhich file is generated after pre-processing of a C program?");
            printf("\n\nA.  .p\nB.  .i\nC.	.o\nD.  .m\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.  .i");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is B.  .i");
                break;
            }
            case 7:
            printf("\n\nIn C, static storage class cannot be used with:");
            printf("\n\nA.Global variable\nB.Function parameter\nC.Function name\nD.Local variable\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.Function paramete");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is B.Function paramete");
                break;
            }
            case 8:
            printf("\n\nThe following C declarations\nstruct node\n{\n\tint i;\n\tfloat j;\n};\nstruct node *s[10]; \n\n\ndefine s to be");
            printf("\n\nA.An array, each element of which is a pointer to a structure of type node\nB.A structure of 2 fields, each field being a pointer to an array of 10 elements\nC.A structure of 3 fields: an integer, a float, and an array of 10 elements\nD.An array, each element of which is a structure of type node.\n\n");
            countq++;
            if(toupper(getch())=='A')
            {
                printf("\n\nCorrect!!! A.An array, each element of which is a pointer to a structure of type node");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is A.An array, each element of which is a pointer to a structure of type node");
                break;
            }
            case 9:
            printf("\n\nWhich of the following is true");
            printf("\n\nA.gets() doesn't do any array bound testing and should not be used.\nB.fgets() should be used in place of gets() only for files, otherwise gets() is fine\nC.gets() cannot read strings with spaces\nD.None of the above\n\n");
            countq++;
            if(toupper(getch())=='A')
            {
                printf("\n\nCorrect!!! A.gets() doesn't do any array bound testing and should not be used.");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is A.gets() doesn't do any array bound testing and should not be used.");
                break;
            }
            case 10:
            printf("\n\nFor the following declaration of a function in C, pick the best statement\n\nint [] fun(void (*fptr)(int *));");
            printf("\n\nA.It will result in compile error.\nB.No compile error. fun is a function which takes a function pointer \n\tfptr as argument and return an array of int.\nC.No compile error. fun is a function which takes a function pointer fptr \n\tas argument and returns an array of int. Also, fptr is \n\ta function pointer which takes int pointer as argument and returns void.\nD.No compile error. fun is a function which takes a function pointer fptr as argument \n\tand returns an array of int. The array of int depends on the body of fun i.e. what size array is returned.\n\t Also, fptr is a function pointer which takes int pointer as argument and returns void.\n\n");
            countq++;
            if(toupper(getch())=='A')
            {
                printf("\n\nCorrect!!! A.It will result in compile error.");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is A.It will result in compile error.");
                break;
            }
            case 11:
            printf("\n\nThe following function computes the maximum value contained in an integer array p[] of size n (n >= 1)\n\nint max(int *p, int n)\n{\n\tint a=0, b=n-1;\n\twhile (__________)\n\t{\n\t\tif (p[a] <= p[b])\n\t\t{\n\t\t\ta = a+1;\n\t\t}\n\t\telse\n\t\t{\n\t\t\tb = b-1;\n\t\t}\n\t}\n\treturn p[a];\n}\n\nThe missing loop condition is");
            printf("\n\nA.a != n\nB.b != 0\nC.b > (a + 1)\nD.b != a\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.b != a");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! The correct answer is D.b != a");
                break;
            }
            case 12:
            printf("\n\nint fun()\n{\n\tstatic int num = 16;\n\treturn num--;\n}\nint main()\n{\n\tfor(fun(); fun(); fun())\n\tprintf(\"%d\", fun());\n\treturn 0;\n}\n\nWhat is output of above program?");
            printf("\n\nA.Infinite loop\nB.13 10 7 4 1\nC.15 12 8 5 2\nD.14 11 8 5 2\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.14 11 8 5 2");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! D.14 11 8 5 2");
                break;
            }
            case 13:
            printf("\n\nPredict the output?\n\nint fun(char *str1)\n{\n\tchar *str2 = str1;\n\twhile(*++str1);\n\treturn (str1-str2);\n}\nint main()\n{\n\tchar *str = \"GeeksQuiz\";\n\tprintf(\"%d\", fun(str));\n\treturn 0;\n}");
            printf("\n\nA.Infinite loop\nB.13 10 7 4 1\nC.15 12 8 5 2\nD.14 11 8 5 2\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.14 11 8 5 2");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! D.14 11 8 5 2");
                break;
            }
            case 14:
            printf("\n\nGiven that x = 7.5, j = -1.0, n = 1.0, m = 2.0 the value of - - x + j == x>n> = m is:");
            printf("\n\nA.0\nB.1\nC.2\nD.3\n\n");
            countq++;
            if(toupper(getch())=='A')
            {
                printf("\n\nCorrect!!! A.0");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! A.0");
                break;
            }
            case 15:
            printf("\n\nWhat is the value of i at the end of the pseudocode?\n\nx:=1;\ni:=1;\nwhile (x ≤ 500)\nbegin\nx:=2x ;\ni:=i+1;\nend");
            printf("\n\nA.4\nB.5\nC.6\nD.7\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.5");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! B.5");
                break;
            }
            case 16:
            printf("\n\nC Programming Language is often called as :");
            printf("\n\nA.High Level Language\nB.Middle Level Language\nC.Low Level Language\nD.None of these\n\n");
            countq++;
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect!!! B.Middle Level Language");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! B.Middle Level Language");
                break;
            }
            case 17:
            printf("\n\nWhich of the following is true about C programming language ?");
            printf("\n\nA.C is a structural language.\nB.C is a procedural language.\nC.C does not supports function within function.\nD.All of these\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.All of these");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! D.All of these");
                break;
            }
            case 18:
            printf("\n\nHow many keywords are there in Standard C programming language ?");
            printf("\n\nA.32\nB.28\nC.21\nD.44\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.44");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! D.44");
                break;
            }
            case 19:
            printf("\n\nWhich is not the extended keyword in C ?");
            printf("\n\nA._Imaginary\nB._Complex\nC.inline\nD.None of these\n\n");
            countq++;
            if(toupper(getch())=='D')
            {
                printf("\n\nCorrect!!! D.None of these");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! D.None of these");
                break;
            }
            case 20:
            printf("\n\nProcess in which source code is combined with object code is termed as :");
            printf("\n\nA.Linkery\nB.Loading\nC.Linking\nD.None of these\n\n");
            countq++;
            if(toupper(getch())=='C')
            {
                printf("\n\nCorrect!!! C.Linking");
                countr++;
                break;
            }
            else
            {
                printf("\n\nIncorrect!!! C.Linking");
                break;
            }


        }
        i++;
        if(i<=10) 
        goto start;
        score=(float)countr/countq*100;
        if(score<0) 
        score=0;
        printf("\n\n\nName:%s\nYour Score: %.2f%\ncorrect answer:  %d/%d",playername,score,countr,countq);
        if (score=100) printf("\n\nEXCELLENT!!! KEEP IT UP");
        else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
        else if (score>=60 &&score<80) printf("\n\nGOOD!");
        else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT");
        else 
        printf("\n\nYOU ARE VERY POOR IN C Programming,WORK HARD");
        puts("\n\nNEXT PLAY?(Y/N)");
        if (toupper(getch())=='Y')
        goto home;
        else
        {
            writescore(score,playername);
            goto mainhome;
        }
    }
    else
    {
        printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
        Sleep(700);
        goto mainhome;
        return 0;
    }
}