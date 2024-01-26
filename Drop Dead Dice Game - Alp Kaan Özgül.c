// Alp Kaan Özgül 2638096

#include <stdio.h>                    //Here i included libraries
#include <stdlib.h>
#include <time.h>

int roll_a_dice();
int play_computer();
int play_user();
int excluded(int a,int b,int c,int d,int e);
int scoresheet(int q,int w,int p,int r,int t,int a,int b,int c,int d,int e,int add);  //Here i declared functions


int main() {
    srand(time(0));             // Here i seeded the rand() function for it to give different numbers
    int round;
    int comproll;
    int userroll;
    int userroundscore=0;
    int computerroundscore=0;
    int userroundcurrent;
    int computerroundcurrent;
    printf("Welcome to the Drop Dead game.\n ");
    printf("Lets get started!\n");
    printf("How many rounds would you like to play?");
    scanf(" %d",&round);
    comproll = roll_a_dice();   // function to roll dice see below
    userroll = roll_a_dice();

    printf("I have rolled the dice and got %d\n",comproll);
    printf("I have rolled the dice for you and you got %d\n",userroll);

    while(comproll==userroll)
    {
        comproll = roll_a_dice();
        userroll = roll_a_dice();
        printf("I have rolled the dice and got %d\n",comproll);
        printf("I have rolled the dice for you and you got %d\n",userroll);
    }

    for(int counter=0;counter<round;counter++)                      //created a for loop that makes the game playable for wanted amount of rounds
    {

        if (comproll>userroll)                                      //in this if else chain i arranged who is going to start the game according to the dice roll
        {

            printf("\n\nRound %d --- My Turn\n",counter+1);
            printf("----------------------------------------------------\n");
            computerroundcurrent= play_computer();
            computerroundscore =computerroundscore+computerroundcurrent;

            printf("\n\nRound %d --- Your Turn\n",counter+1);
            printf("----------------------------------------------------\n");

            userroundcurrent=play_user();
            userroundscore=userroundcurrent+userroundscore;
            printf("\nOur scoresheet after round %d\n",counter+1);
            printf("----------------------------------------------------\n");
            printf("----------------------------------------------------\n");
            printf("\nMy score      Your score");
            printf("\n%d            %d",computerroundscore,userroundscore);

        }
        else
        {

            printf("\n\nRound %d --- Your Turn\n",counter+1);
            printf("----------------------------------------------------\n");
            userroundcurrent=play_user();
            userroundscore=userroundcurrent+userroundscore;
            printf("\n\nRound %d --- My Turn\n",counter+1);
            printf("----------------------------------------------------\n");
            computerroundcurrent= play_computer();
            computerroundscore =computerroundscore+computerroundcurrent;
            printf("\nOur scoresheet after round %d\n",counter+1);
            printf("----------------------------------------------------\n");
            printf("----------------------------------------------------\n");
            printf("\nMy score      Your score");
            printf("\n%d            %d",computerroundscore,userroundscore);

        }

    }

    if (computerroundscore>userroundscore)
    {
        printf("\n\nI AM THE WINNER!");
    }
    else if (userroundscore>computerroundscore)
    {
        printf("\n\nYOU ARE THE WINNER!");
    }
    else
    {
        printf("\n\nHEAD TO HEAD!");    //There was no information on the sample run about the situation where the game ends head to head so i decided to add this instead of leaving that option empty
    }


    return 0;
}

int scoresheet(int q1,int w2,int p3,int r4,int t5,int a,int b,int c,int d,int e,int add)                                //  SCORE SHEET FUNCTION ----------
{
    int totalscore=0;      // This functions checks, makes calculations for the scores. If else if chain checks if the coming dice from play_user and play_computer function
                           // consists of 2 or 5 and makes the calculations acordingly
                            // en1-5 are variables which tracks if a dice is 2 or 5 it can be seen in the play_computer and play_user functions below.

    if (q1==1)
    {

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
    }
    else if (w2==1)
    {

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
    }
    else if (p3==1)
    {

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
    }
    else if (r4==1)
    {

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
    }
    else if (t5==1)
    {

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
    }
    totalscore = a+b+c+d+e+add;
    return totalscore;


}


int excluded(int a,int b,int c,int d,int e)                                                                             // EXCLUDED FUNCTION
{
    int en1;    // This function keeps track of dices which are 2 and 5
    int en2;    // en1-5 are variables which tracks if a dice is 2 or 5 it can be seen in the play_computer and play_user functions below.
    int en3;
    int en4;
    int en5;

    en1 = a;
    en2 = b;
    en3 = c;
    en4 = d;
    en5 = e;

    int active=0;

    printf("\n");
    if (en1 ==1)
    {
        printf("Dice 1  ");
        active =1;
    }
    if (en2 ==1)
    {
        printf("Dice 2  ");
        active =1;
    }
    if (en3 ==1)
    {
        printf("Dice 3  ");
        active =1;
    }
    if (en4 ==1)
    {
        printf("Dice 4  ");
        active =1;
    }
    if (en5 ==1)
    {
        printf("Dice 5  ");
        active =1;
    }

    else if (active ==1) {
        printf("Are Excluded!");
    }
    active=0;
}

int roll_a_dice(){                                                                                                       // ROLL A DICE FUNCTION
                                    // This function generates random numbers between 1 to 6 (both included) i used %6 +1 because i wanted to generate numbers between 1 to 6 as there is 6 surfaces on a dice
    int dice_1x = (rand() %6)+1;

    return dice_1x;
}

int play_computer()                                                                                                      // PLAY_COMPUTER FUNCTION
{


    int var1l =1;
    int var2l=1;
    int var3l=1;
    int var4l=1;
    int var5l=1;

    int en1 =0;
    int en2 =0;
    int en3 =0;
    int en4 =0;
    int en5 =0;

    int var11;
    int var12;
    int var13;
    int var14;
    int var15;

    int endvar1;
    int endvar2;
    int endvar3;
    int endvar4;
    int endvar5;

    int totcomp;
    int myscore;

    int dice1comp = 0, dice2comp = 0, dice3comp = 0, dice4comp = 0, dice5comp = 0;
    int num_vars = 5;
    int totalsend=0;

    while (num_vars > 1) {                       // I created this while loop to detect the numbers which are 2 or 5 and display the numbers which are rolled by the dice
        int num;

        printf("\n\nI got --> ");
        if (dice1comp != 2 && dice1comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var11=num;
            printf("[Dice 1]: %d ", num);

            if (num == 2 || num == 5) {
                dice1comp = num;
                num_vars--;
                en1 = 1;
                var1l =0;
                var11=0;

            }
        }

        if (dice2comp != 2 && dice2comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var12=num;
            printf("[Dice 2]: %d ", num);

            if (num == 2 || num == 5) {
                dice2comp = num;
                num_vars--;
                en2=1;
                var2l=0;
                var12=0;

            }
        }

        if (dice3comp != 2 && dice3comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var13=num;
            printf("[Dice 3]: %d ", num);

            if (num == 2 || num == 5) {
                dice3comp = num;
                num_vars--;
                en3=1;
                var3l=0;
                var13=0;

            }
        }

        if (dice4comp != 2 && dice4comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var14=num;
            printf("[Dice 4]: %d ", num);

            if (num == 2 || num == 5) {
                dice4comp = num;
                num_vars--;
                en4=1;
                var4l = 0;
                var14=0;
            }
        }

        if (dice5comp != 2 && dice5comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var15=num;
            printf("[Dice 5]: %d ", num);

            if (num == 2 || num == 5) {
                dice5comp = num;
                num_vars--;
                en5=1;
                var5l=0;
                var15=0;


            }
        }
        totcomp=scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,var15,totalsend );
        totalsend = totcomp;
        myscore = var11+var12+var13+var14+var15;
        if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
        {
            myscore=0;
        }

        printf("\nMy score: %d Total Score: %d",myscore,totalsend);       //here to display my score and total score
        excluded(en1,en2,en3,en4,en5);
        en1=0;
        en2=0;
        en3=0;
        en4=0;
        en5=0;

    }
    var11=0;
    var12=0;
    var13=0;
    var14=0;
    var15=0;


    if (var1l ==1)          // This if else if chain controls the last standing dice if it is 2 or 5
    {
        while(var1l==1)
        {
            printf("\n\nI got -->");
            endvar1 = roll_a_dice();
            if (endvar1 !=2 && endvar1 !=5)
            {
                var1l=1;

                printf(" [Dice 1]: %d",endvar1);

                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar1,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar1;
                printf("\nMy score: %d Total Score: %d",myscore,totalsend);

            }
            else
            {
                var1l =0;
                en1=1;

                printf(" [Dice 1]: %d",endvar1);

                myscore = var11+var12+var13+var14+endvar1;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }
                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    else if (var2l ==1)
    {
        while(var2l==1)
        {
            printf("\n\nI got -->");
            endvar2 = roll_a_dice();
            if (endvar2 !=2 && endvar2 !=5)
            {
                var2l=1;
                printf(" [Dice 2]: %d",endvar2);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar2,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar2;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var2l =0;
                en2=1;

                printf(" [Dice 2]: %d",endvar2);

                myscore = var11+var12+var13+var14+endvar2;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);

            }
        }
    }

    else if (var3l ==1)
    {
        while(var3l==1)
        {
            printf("\n\nI got -->");
            endvar3 = roll_a_dice();
            if (endvar3 !=2 && endvar3 !=5)
            {
                var3l=1;
                printf(" [Dice 3]: %d",endvar3);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar3,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar3;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var3l =0;
                en3=1;
                printf(" [Dice 3]: %d",endvar3);


                myscore = var11+var12+var13+var14+endvar3;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    else if (var4l ==1)
    {
        while(var4l==1)
        {
            printf("\n\nI got -->");
            endvar4 = roll_a_dice();
            if (endvar4 !=2 && endvar4 !=5)
            {
                var4l=1;

                printf(" [Dice 4]: %d",endvar4);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar4,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar4;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var4l =0;
                en4=1;

                printf(" [Dice 4]: %d",endvar4);

                myscore = var11+var12+var13+var14+endvar4;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    else if (var5l ==1)
    {
        while(var5l==1)
        {
            printf("\n\nI got -->");
            endvar5 = roll_a_dice();
            if (endvar5 !=2 && endvar5 !=5)
            {
                var5l=1;

                printf(" [Dice 5]: %d",endvar5);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar5,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar5;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var5l =0;
                en5=1;
                printf(" [Dice 5]: %d",endvar5);

                myscore = var11+var12+var13+var14+endvar5;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    printf("\n\n Drop Dead!\n");

    en1=0;
    en2=0;
    en3=0;
    en4=0;
    en5=0;
    var11=0;
    var12=0;
    var13=0;
    var14=0;
    var15=0;
    endvar1=0;
    endvar2=0;
    endvar3=0;
    endvar4=0;
    endvar5=0;

    return totalsend;          //returns the final total score to the main functions to calculate the total scores at the final
}


int play_user()                                                                                                          // PLAY_USER FUNCTION
{
    srand(time(0));

    int var1l =1;
    int var2l=1;
    int var3l=1;
    int var4l=1;
    int var5l=1;

    int en1 =0;
    int en2 =0;
    int en3 =0;
    int en4 =0;
    int en5 =0;

    int var11;
    int var12;
    int var13;
    int var14;
    int var15;

    int endvar1;
    int endvar2;
    int endvar3;
    int endvar4;
    int endvar5;

    int totcomp;
    int myscore;

    int dice1comp = 0, dice2comp = 0, dice3comp = 0, dice4comp = 0, dice5comp = 0;
    int num_vars = 5;
    int totalsend=0;

    while (num_vars > 1) {   // I created this while loop to detect the numbers which are 2 or 5 and display the numbers which are rolled by the dice
        int num;

        printf("\n\nYou got --> ");
        if (dice1comp != 2 && dice1comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var11=num;
            printf("[Dice 1]: %d ", num);

            if (num == 2 || num == 5) {
                dice1comp = num;
                num_vars--;
                en1 = 1;
                var1l =0;
                var11=0;

            }
        }

        if (dice2comp != 2 && dice2comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var12=num;
            printf("[Dice 2]: %d ", num);

            if (num == 2 || num == 5) {
                dice2comp = num;
                num_vars--;

                en2=1;

                var2l=0;
                var12=0;

            }
        }

        if (dice3comp != 2 && dice3comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var13=num;
            printf("[Dice 3]: %d ", num);

            if (num == 2 || num == 5) {
                dice3comp = num;
                num_vars--;

                en3=1;

                var3l=0;
                var13=0;

            }
        }

        if (dice4comp != 2 && dice4comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var14=num;
            printf("[Dice 4]: %d ", num);

            if (num == 2 || num == 5) {
                dice4comp = num;
                num_vars--;
                en4=1;
                var4l = 0;
                var14=0;

            }
        }

        if (dice5comp != 2 && dice5comp != 5) {
            num = roll_a_dice() % 6 + 1;
            var15=num;
            printf("[Dice 5]: %d ", num);


            if (num == 2 || num == 5) {
                dice5comp = num;
                num_vars--;

                en5=1;

                var5l=0;
                var15=0;

            }
        }
        totcomp=scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,var15,totalsend );
        totalsend = totcomp;
        myscore = var11+var12+var13+var14+var15;
        if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
        {
            myscore=0;
        }

        printf("\nMy score: %d Total Score: %d",myscore,totalsend);       //here to display my score and total score

        excluded(en1,en2,en3,en4,en5);

        en1=0;
        en2=0;
        en3=0;
        en4=0;
        en5=0;

    }
    var11=0;
    var12=0;
    var13=0;
    var14=0;
    var15=0;


    if (var1l ==1)     // This if else if chain controls the last standing dice if it is 2 or 5
    {
        while(var1l==1)
        {
            printf("\n\nYou got -->");
            endvar1 = roll_a_dice();
            if (endvar1 !=2 && endvar1 !=5)
            {
                var1l=1;

                printf(" [Dice 1]: %d",endvar1);

                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar1,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar1;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);

            }
            else
            {
                var1l =0;
                en1=1;

                printf(" [Dice 1]: %d",endvar1);

                myscore = var11+var12+var13+var14+endvar1;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);




            }
        }
    }

    else if (var2l ==1)
    {
        while(var2l==1)
        {
            printf("\n\nYou got -->");
            endvar2 = roll_a_dice();
            if (endvar2 !=2 && endvar2 !=5)
            {
                var2l=1;


                printf(" [Dice 2]: %d",endvar2);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar2,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar2;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var2l =0;
                en2=1;

                printf(" [Dice 2]: %d",endvar2);

                myscore = var11+var12+var13+var14+endvar2;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);

            }
        }
    }

    else if (var3l ==1)
    {
        while(var3l==1)
        {
            printf("\n\nYou got -->");
            endvar3 = roll_a_dice();
            if (endvar3 !=2 && endvar3 !=5)
            {
                var3l=1;


                printf(" [Dice 3]: %d",endvar3);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar3,totalsend );
                totalsend = totcomp;
                myscore= var11+var12+var13+var14+endvar3;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var3l =0;
                en3=1;
                printf(" [Dice 3]: %d",endvar3);


                myscore = var11+var12+var13+var14+endvar3;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    else if (var4l ==1)
    {
        while(var4l==1)
        {
            printf("\n\nYou got -->");
            endvar4 = roll_a_dice();
            if (endvar4 !=2 && endvar4 !=5)
            {
                var4l=1;

                printf(" [Dice 4]: %d",endvar4);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar4,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar4;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var4l =0;
                en4=1;

                printf(" [Dice 4]: %d",endvar4);

                myscore = var11+var12+var13+var14+endvar4;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    else if (var5l ==1)
    {
        while(var5l==1)
        {
            printf("\n\nYou got -->");
            endvar5 = roll_a_dice();
            if (endvar5 !=2 && endvar5 !=5)
            {
                var5l=1;

                printf(" [Dice 5]: %d",endvar5);
                totcomp = scoresheet(en1,en2,en3,en4,en5,var11,var12,var13,var14,endvar5,totalsend );
                totalsend = totcomp;
                myscore = var11+var12+var13+var14+endvar5;

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
            else
            {
                var5l =0;
                en5=1;
                printf(" [Dice 5]: %d",endvar5);


                myscore = var11+var12+var13+var14+endvar5;
                if (en1==1 || en2==1 || en3==1 || en4==1 || en5==1)
                {
                    myscore=0;
                }

                printf("\nMy score: %d Total Score: %d",myscore,totalsend);
            }
        }
    }

    printf("\n\n Drop Dead!\n");

    en1=0;
    en2=0;
    en3=0;
    en4=0;
    en5=0;
    var11=0;
    var12=0;
    var13=0;
    var14=0;
    var15=0;
    endvar1=0;
    endvar2=0;
    endvar3=0;
    endvar4=0;
    endvar5=0;

    return totalsend;    //returns the final total score to the main functions to calculate the total scores at the final

}