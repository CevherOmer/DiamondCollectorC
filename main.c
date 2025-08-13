#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 int mesafe(int x,int y){
        if(x==y||x==-1||y==-1) return 0;
        int a,b,c,d;
        int mesafe=0;
        if(x<10) a=0;
        else {a=x/10;}
        b=x%10;
        if(y<10) c=0;
        else {c=y/10;}
        d=y%10;
        if(c>=a) mesafe+=c-a;
        else {mesafe+=a-c;}
        if(b>d) mesafe+=b-d;
        else if(b==d&&mesafe!=1) mesafe++;
        else {mesafe+=d-b;}
        return mesafe;
        
 }
int main()
{
    srand(time(NULL));
    int pcan=3,pkonum=24,elmas1=24,elmas2=24,elmas3=24,elmas4=24,elmas5=24,asker1,asker2,asker3,asker4,asker5;
    int i,j,k,w;
    int skor=0;
    while(mesafe(elmas1,pkonum)<4)
    {elmas1=rand()% 99+0;}
    while(mesafe(elmas2,pkonum)<4||mesafe(elmas2,elmas1)<3)
    {elmas2=rand()% 99+0;}
    while(mesafe(elmas3,pkonum)<4||mesafe(elmas3,elmas1)<3||mesafe(elmas3,elmas2)<3)
    {elmas3=rand()% 99+0;}
    while(mesafe(elmas4,pkonum)<4||mesafe(elmas4,elmas1)<3||mesafe(elmas4,elmas2)<3||mesafe(elmas4,elmas3)<3)
    {elmas4=rand()% 99+0;}
    while(mesafe(elmas5,pkonum)<4||mesafe(elmas5,elmas1)<3||mesafe(elmas5,elmas2)<3||mesafe(elmas5,elmas3)<3||mesafe(elmas5,elmas4)<3)
    {elmas5=rand()% 99+0;}
    while(mesafe(elmas1,asker1)>2||elmas1-asker1==0||elmas1-asker1>11||elmas1-asker1==2||elmas1-asker1<-11||elmas1-asker1==-2)
    asker1=rand()%99+0;
    while(mesafe(elmas2,asker2)>2||elmas2-asker2==0||elmas2-asker2>11||elmas2-asker2==2||elmas2-asker2<-11||elmas2-asker2==-2||asker2==asker1)
    asker2=rand()%99+0;
    while(mesafe(elmas3,asker3)>2||elmas3-asker3==0||elmas3-asker3>11||elmas3-asker3==2||elmas3-asker3<-11||elmas3-asker3==-2||asker3==asker2||asker3==asker1)
    asker3=rand()%99+0;
    while(mesafe(elmas4,asker4)>2||elmas4-asker4==0||elmas4-asker4>11||elmas4-asker4==2||elmas4-asker4<-11||elmas4-asker4==-2||asker4==asker1||asker4==asker2||asker4==asker3)
    asker4=rand()%99+0;
    while(mesafe(elmas5,asker5)>2||elmas5-asker5==0||elmas5-asker5>11||elmas5-asker5==2||elmas5-asker5<-11||elmas5-asker5==-2||asker5==asker1||asker5==asker2||asker5==asker3||asker5==asker4)
    asker5=rand()%99+0;
    
    int gameover=0;
    int x[3]={-1,-1,-1};
    int y[5]={-1,-1,-1,-1,-1};
    int harita=1;
    
    while(!gameover){
    char key;
    if(pkonum==elmas1 ) {elmas1=-1;y[skor]=pkonum;skor++;}
    if(pkonum==elmas2 ) {elmas2=-1;y[skor]=pkonum;skor++;}
    if(pkonum==elmas3 ) {elmas3=-1;y[skor]=pkonum;skor++;}
    if(pkonum==elmas4 ) {elmas4=-1;y[skor]=pkonum;skor++;}
    if(pkonum==elmas5 ) {elmas5=-1;y[skor]=pkonum;skor++;}
    if(pkonum==asker1||pkonum==asker2 ||pkonum==asker3 ||pkonum==asker4 ||pkonum==asker5 ) {x[3-pcan]=pkonum;pkonum=24;pcan--;}
    if(harita){
        system("clear");
        printf("##############################################################\n");
    for(i=0;i<10;i++){
        printf("#");
        for(j=0;j<10;j++){
            k=10*i+j;
            if(k==pkonum) printf("  P  ");
            else if(k==x[0]||k==x[1]||k==x[2])printf("  A  ");
            else if(k==y[0]||k==y[1]||k==y[2]||k==y[3]||k==y[4]) printf("  E  ");
            else printf("     ");
            if(j!=9)printf("|");
            else printf(" ");
            
        }
        if(i!=9){printf("#\n#------------------------------------------------------------#");
            if(i==3)printf("       Mesafeler   \n");
            else if(i==1)printf("     CAN : %d       SKOR : %d \n",pcan,skor);
            else if(i==4)
                if(mesafe(elmas1,pkonum)==0)printf("     Elmas 1 : TOPLANDI\n");
                else
                printf("     Elmas 1 : %d\n",mesafe(elmas1,pkonum));
            else if(i==5)
                if(mesafe(elmas2,pkonum)==0)printf("     Elmas 2 : TOPLANDI\n");
                else printf("     Elmas 2 : %d\n",mesafe(elmas2,pkonum));
            else if(i==6)
                if(mesafe(elmas3,pkonum)==0)printf("     Elmas 3 : TOPLANDI\n");
                else
                printf("     Elmas 3 : %d\n",mesafe(elmas3,pkonum));
            else if(i==7)
                if(mesafe(elmas4,pkonum)==0)printf("     Elmas 4 : TOPLANDI\n");
                else
                printf("     Elmas 4 : %d\n",mesafe(elmas4,pkonum));
            else if(i==8)
                if(mesafe(elmas5,pkonum)==0)printf("     Elmas 5 : TOPLANDI\n");
                else
                printf("     Elmas 5 : %d\n",mesafe(elmas5,pkonum));
            else printf("\n");}
        else printf("#\n");
        }
    printf("##############################################################\n");
    }
    if(skor==5||pcan==0){
        gameover=1;
        break;
    }
    if(harita==1)printf("Choose the direction (w,a,s,d)");  
    scanf("%c",&key);
    switch(key) {
        case 'w':{
               harita=1;
                if(pkonum>9) pkonum-=10;
                else{
                printf("\nCannot go more upper\n\n");  
                getchar();}
            break;}
        case 's':{
               harita=1;
                if(pkonum<90) pkonum+=10;
                else{
                printf("\nCannot go more down\n\n");  
                getchar();  
                getchar(); }
            break;}
        case 'd':
                harita=1;
                if((pkonum%10)!=9) pkonum+=1;
                else{
                printf("\nCannot go more right\n\n");    
                getchar();  
                getchar(); }
            break;
        case 'a':{
                harita=1;
                if((pkonum%10)!=0) pkonum-=1;
                else{
                printf("\nCannot go more left\n\n");   
                getchar();  
                getchar(); } 
            break;}
        default: 
        {
            harita=0;
        }
        }
    }
    if(skor==5)
    printf("\n\n\nCONGRATS YOU WIN!\n\n");
    else if(pcan==0)
    printf("\n\n\nSorry, you lose...\n");
}



