#include<bits/stdc++.h>
#include <conio.h>
using namespace std;

set<string> a2,b2,c2,d2,e2,f2,g2,h2,i2,j2,k2,l2,m2,n2,o2,p2,q2,r2,s2,t2,u2,v2,w2,x2,y2,z2,word;
int i,block,x,y,p,q,j,k,l=0,n=10,point=0,plr1=0,plr2=0,plrno=1,turn=0,flag=0,v=0;
char m[10][11],chtmp,tmpstring[20];
char horizontal[11];
void input();
int stringSearch();
int checkhorizontalString();
int checkverticalString();
void showMatrix();
int newGame();
void leaderBoard();

int getChoice(int choice){
    char ch=10;
    while(ch!=13){
        system("cls");
        if(choice==1){
            printf("\n\n\n\n\n\n \t\t\t\t\t-->\tN E W  G A M E\t<--");
        }
        else printf("\n\n\n\n\n\n\t\t\t\t\t\tNew Game");
        if(choice == 2)
            printf("\n\n\n\n\n\n \t\t\t\t\t-->\tL E A D E R  B O A R D\t<--");
        else printf("\n\n\n\n\n\n\t\t\t\t\t\tLeader Board");
        if(choice == 3)
            printf("\n\n\n\n\n\n \t\t\t\t\t-->\tQ U I T\t<--");
        else printf("\n\n\n\n\n\n\t\t\t\t\t\tQuit");
        printf("\n\n\t\t\t\t[ Use UP and DOWN arrow to select an option ]");
        ch = getch();
        if(ch == 72)
            choice--;
        else if(ch == 80)
            choice++;
        if(choice<1)
            choice = 1;
        else if(choice>3)
            choice = 3;
    }
    return choice;
}

int main()
{
    int choice=1;
    char ch;
    while(choice!=4){
        choice = getChoice(choice);
        switch(choice){
            case 1: newGame();
                    break;
            case 2: leaderBoard();
                    getch();
                    break;
            case 3: return 0;
                    break;
            case 4: printf("\n\n");
        }
    }
    return 0;
}


void input()
{
    ifstream file;
    file.open("dictionary.txt");
    string str;

    while(file >> str)
    {
        if (str[0]=='a')
            a2.insert(str);
        if (str[0]=='b')
            b2.insert(str);
        if (str[0]=='c')
            c2.insert(str);
        if (str[0]=='d')
            d2.insert(str);
        if (str[0]=='e')
            e2.insert(str);
        if (str[0]=='f')
            f2.insert(str);
        if (str[0]=='g')
            g2.insert(str);
        if (str[0]=='h')
            h2.insert(str);
        if (str[0]=='i')
            i2.insert(str);
        if (str[0]=='j')
            j2.insert(str);
        if (str[0]=='k')
            k2.insert(str);
        if (str[0]=='l')
            l2.insert(str);
        if (str[0]=='m')
            m2.insert(str);
        if (str[0]=='n')
            n2.insert(str);
        if (str[0]=='o')
            o2.insert(str);
        if (str[0]=='p')
            p2.insert(str);
        if (str[0]=='q')
            q2.insert(str);
        if (str[0]=='r')
            r2.insert(str);
        if (str[0]=='s')
            s2.insert(str);
        if (str[0]=='t')
            t2.insert(str);
        if (str[0]=='u')
            u2.insert(str);
        if (str[0]=='v')
            v2.insert(str);
        if (str[0]=='w')
            w2.insert(str);
        if (str[0]=='x')
            x2.insert(str);
        if (str[0]=='y')
            y2.insert(str);
        if (str[0]=='z')
            z2.insert(str);
    }
    file.close();
}

int stringSearch()
{



    if (horizontal[0]=='a')
        {
            if(a2.find(horizontal)==a2.end()) return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='b')
        {
            if(b2.find(horizontal)==b2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='c')
        {
            if(c2.find(horizontal)==c2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='d')
        {
            if(d2.find(horizontal)==d2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='e')
        {
            if(e2.find(horizontal)==e2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='f')
        {
            if(f2.find(horizontal)==f2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='g')
        {
            if(g2.find(horizontal)==g2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='h')
        {
            if(h2.find(horizontal)==h2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='i')
        {
            if(i2.find(horizontal)==i2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='j')
        {
            if(j2.find(horizontal)==j2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='k')
        {
            if(k2.find(horizontal)==k2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='l')
        {
            if(l2.find(horizontal)==l2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='m')
        {
            if(m2.find(horizontal)==m2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='n')
        {
            if(n2.find(horizontal)==n2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='o')
        {
            if(o2.find(horizontal)==o2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='p')
        {
            if(p2.find(horizontal)==p2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='q')
        {
            if(q2.find(horizontal)==q2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='r')
        {
            if(r2.find(horizontal)==r2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='s')
        {
            if(s2.find(horizontal)==s2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='t')
        {
            if(t2.find(horizontal)==t2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='u')
        {
            if(u2.find(horizontal)==u2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='v')
        {
            if(v2.find(horizontal)==v2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='w')
        {
            if(w2.find(horizontal)==w2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='x')
        {
            if(x2.find(horizontal)==x2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='y')
        {
            if(y2.find(horizontal)==y2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }
    else if (horizontal[0]=='z')
        {
            if(z2.find(horizontal)==z2.end())return 0;
            else
            {
                point=strlen(horizontal);
                return 1;
            }
        }

}
int checkhorizontalString()
{
    for (j=0;j<n;j++)
    {
        if (m[x][y-1]=='\0' && m[x][y+1]=='\0')
            {
                horizontal[l]=m[x][y];
                l++;
                break;
            }

        else if (m[x][y-1]!='\0' && m[x][y+1]=='\0')
        {
            if (flag==1)
            {
                horizontal[l]=m[x][j];
                l++;
                if (m[x][j+1]=='\0')
                    break;
            }
           else if (flag==0)
           {
                j=y;
                while (m[x][j]!='\0')
                {
                    j--;
                }
                j++;
                horizontal[l]=m[x][j];
                l++;
                flag=1;
           }
        }
        else if (m[x][y-1]=='\0' && m[x][y+1]!='\0')
        {
            horizontal[l]=m[x][y];
            y++;
            l++;
        }
        else
        {
            horizontal[l]=m[x][j];
            l++;
            if (m[x][j+1]=='\0')
                break;
        }

    }
    flag=0;
    horizontal[l]='\0';
    l=0;
        if (stringSearch()==0)
        {
            n--;
            v=0;
            checkhorizontalString();
        }
        else if (stringSearch()==1)
        {
                if(word.find(horizontal)==word.end())
            {
                if (plrno==1)
                    plr1+=point;
                else if (plrno==2)
                    plr2+=point;
                point=0;
                v=1;
            }
                else horizontal[0]='\0';
        }
    n=10;
    return v;
}

int checkverticalString()
{
    for (j=0;j<n;j++)
    {
        if (m[x-1][y]=='\0' && m[x+1][y]=='\0')
            {
                horizontal[l]=m[x][y];
                l++;
                break;
            }

        else if (m[x-1][y]!='\0' && m[x+1][y]=='\0')
        {
            if (flag==1)
            {
                horizontal[l]=m[j][y];
                l++;
                if (m[j+1][y]=='\0')
                    break;
            }
           else if (flag==0)
           {
                j=x;
                while (m[j][y]!='\0')
                {
                    j--;
                }
                j++;
                horizontal[l]=m[j][y];
                l++;
                flag=1;
           }
        }
        else if (m[x-1][y]=='\0' && m[x+1][y]!='\0')
        {
            horizontal[l]=m[x][y];
            x++;
            l++;
        }
        else
        {
            horizontal[l]=m[j][y];
            l++;
            if (m[j+1][y]=='\0')
                break;
        }

    }
    flag=0;
    horizontal[l]='\0';
    l=0;
        if (stringSearch()==0)
        {
            n--;
            v=0;
            checkverticalString();
        }
        else if (stringSearch()==1)
        {
            if(word.find(horizontal)==word.end())
            {
                if (plrno==1)
                    plr1+=point;
                else if (plrno==2)
                    plr2+=point;
                point=0;
                v=1;
            }
            else horizontal[0]='\0';
        }
    n=10;
    return v;
}

void showMatrix()
{
    system("cls");
    for (i=1;i<=100;i++)
    {
        if (i<=9)
            {
                p=i/10;
                q=i%10-1;
                if (i%10==0)
                    {
                        p=p-1;
                        q=9;
                    }
                if (m[p][q]!='\0')
                    printf("| %c ",m[p][q]);
                else printf("| %d ",i);
            }
        else if (i<=100)
        {
            p=i/10;
                q=i%10-1;
                if (i%10==0)
                    {
                        p=p-1;
                        q=9;
                    }
                if (m[p][q]!='\0')
                    printf("| %c ",m[p][q]);
                else printf("| %d",i);
        }

        if (i%10==0)
            printf("|\n");
    }

    printf("\n\nS C O R E :\n\nPlayer 1: %d\nPlayer 2: %d",plr1,plr2);
    if (horizontal[0]=='\0')
        printf("\nNo new word has been formed.\n");
    else printf("\nWord formed: %s\n",horizontal);
    word.insert(horizontal);
    printf("\nPlayer No: %d",plrno);
}

int newGame()
{
    input();
    while(1){
    showMatrix();
    printf("\n\nChoose a block number to place your character. You can quit if you want to in the next screen.\n\n");
    scanf("%d",&block);
    x=block/10;
        if (block%10==0)
            x=x-1;
        if (block%10==0)
            y=9;
        else y=(block%10)-1;
    while (m[x][y]!='\0')
    {
        printf("That block already contains a character! Choose another block.\n");
        scanf("%d",&block);
        x=block/10;
        if (block%10==0)
            x=x-1;
        if (block%10==0)
            y=9;
        else y=(block%10)-1;
    }
    printf("\n\nNow insert the character you wanna put there. Or, you can press 0 to quit.\n\n");
    scanf(" %c",&chtmp);
    if (chtmp=='0')
        break;
    m[x][y]=chtmp;
    if (checkhorizontalString()==0)
        checkverticalString();

    if (plrno==1)
        plrno=2;
    else plrno=1;

    }

    FILE *leaderboard;
    leaderboard=fopen("leaderboard.txt","r");
    int highscore;
    fscanf(leaderboard,"%d",&highscore);
    fclose(leaderboard);
    leaderboard=fopen("leaderboard.txt","w");
    if (plr1>highscore)
    {
        fprintf(leaderboard,"%d",plr1);
    }
    else if (plr2>highscore)
    {
        fprintf(leaderboard,"%d",plr2);
    }
    fclose(leaderboard);
}



void leaderBoard()
{
    printf("\n\n\t\t\tThe updated highscore will be shown only after you restart the game! :D");
    FILE *leaderboard;
    leaderboard=fopen("leaderboard.txt","r");
    int highscore;
    fscanf(leaderboard,"%d",&highscore);
    fclose(leaderboard);
    if (highscore>200000)
    {
        highscore=0;
        leaderboard=fopen("leaderboard.txt","w");
        fprintf(leaderboard,"%d",highscore);
        fclose(leaderboard);
    }
    printf("\n\n\t\t\t\t\t\tH I G H  S C O R E:\t%d",highscore);
}

