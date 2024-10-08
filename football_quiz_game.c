#include <stdio.h> 

int main (){
    int i;
    int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0, point6 = 0, point7 = 0, point8 = 0, point9 = 0, point10 = 0;
    int totalPoints = 0;

    printf("   Welcome to football quiz game   \n\n");
    printf("Click 1 if you want to start\nClick 2 if you want to quit the game\n");
    printf("My choice is: ");
    scanf("%d", &i); 

    if(i == 2){
        printf("The game has stopped\n");
        return 0;  // Exit the program
    }
    else if(i == 1){
        printf("The game has started\n\n");
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    // Question 1
    printf("1) Which player has scored the fastest hat-trick in Premier League history?\n");
    printf("1) Sergio Aguero\n2) Sadio Mane\n3) Thierry Henry\n4) Harry Kane\n");
    printf("What's your answer: ");
    scanf("%d", &ans1);
    if (ans1 == 2) {
        printf("Your answer is correct!\n");
        point1 = 10;
    } else {
        printf("Wrong answer\n");
        point1 = 0;
    }
    totalPoints += point1;

    // Question 2
    printf("----------------------------------------------\n2) Which team has never been relegated from the English Premier League since its inception in 1992?\n");
    printf("1) Arsenal\n2) Manchester United\n3) Liverpool\n4) Everton\n");
    printf("What's your answer: ");
    scanf("%d", &ans2);
    if (ans2 == 1) {
        printf("Your answer is correct!\n");
        point2 = 10;
    } else {
        printf("Wrong answer\n");
        point2 = 0;
    }
    totalPoints += point2;

    // Question 3
    printf("----------------------------------------------\n3) Which club won the UEFA Champions League without losing a single match in the 1992-93 season?\n");
    printf("1) Olympique Marseille\n2) AC Milan\n3) Ajax\n4) Barcelona\n");
    printf("What's your answer: ");
    scanf("%d", &ans3);
    if (ans3 == 1) {
        printf("Your answer is correct!\n");
        point3 = 10;
    } else {
        printf("Wrong answer\n");
        point3 = 0;
    }
    totalPoints += point3;

    // Question 4
    printf("----------------------------------------------\n4) Who was the first goalkeeper to win the Ballon d'Or?\n");
    printf("1) Iker Casillas\n2) Oliver Kahn\n3) Lev Yashin\n4) Gianluigi Buffon\n");
    printf("What's your answer: ");
    scanf("%d", &ans4);
    if (ans4 == 3) {
        printf("Your answer is correct!\n");
        point4 = 10;
    } else {
        printf("Wrong answer\n");
        point4 = 0;
    }
    totalPoints += point4;

    // Question 5
    printf("----------------------------------------------\n5) Which player has scored the most goals in a single FIFA World Cup tournament?\n");
    printf("1) Just Fontaine\n2) Pele\n3) Gerd Muller\n4) Ronaldo Nazario\n");
    printf("What's your answer: ");
    scanf("%d", &ans5);
    if (ans5 == 1) {
        printf("Your answer is correct!\n");
        point5 = 10;
    } else {
        printf("Wrong answer\n");
        point5 = 0;
    }
    totalPoints += point5;

    // Question 6
    printf("----------------------------------------------\n6) Which player has won the most UEFA European Championship titles?\n");
    printf("1) Xavi\n2) Cristiano Ronaldo\n3) Andres Iniesta\n4) Michel Platini\n");
    printf("What's your answer: ");
    scanf("%d", &ans6);
    if (ans6 == 2) {
        printf("Your answer is correct!\n");
        point6 = 10;
    } else {
        printf("Wrong answer\n");
        point6 = 0;
    }
    totalPoints += point6;

    // Question 7
    printf("----------------------------------------------\n7) Which club has won the most FIFA Club World Cup titles?\n");
    printf("1) Barcelona\n2) Real Madrid\n3) Bayern Munich\n4) Manchester United\n");
    printf("What's your answer: ");
    scanf("%d", &ans7);
    if (ans7 == 2) {
        printf("Your answer is correct!\n");
        point7 = 10;
    } else {
        printf("Wrong answer\n");
        point7 = 0;
    }
    totalPoints += point7;

    // Question 8
    printf("----------------------------------------------\n8) Which African country was the first to reach the quarter-finals of the FIFA World Cup?\n");
    printf("1) Cameroon\n2) Senegal\n3) Ghana\n4) Nigeria\n");
    printf("What's your answer: ");
    scanf("%d", &ans8);
    if (ans8 == 1) {
        printf("Your answer is correct!\n");
        point8 = 10;
    } else {
        printf("Wrong answer\n");
        point8 = 0;
    }
    totalPoints += point8;

    // Question 9
    printf("----------------------------------------------\n9) Who holds the record for the most assists in a single Premier League season?\n");
    printf("1) Kevin De Bruyne\n2) Cesc Fabregas\n3) Mesut ozil\n4) Thierry Henry\n");
    printf("What's your answer: ");
    scanf("%d", &ans9);
    if (ans9 == 1) {
        printf("Your answer is correct!\n");
        point9 = 10;
    } else {
        printf("Wrong answer\n");
        point9 = 0;
    }
    totalPoints += point9;

    // Question 10
    printf("----------------------------------------------\n10) Which player has the most appearances in FIFA World Cup history?\n");
    printf("1) Lothar Matthaus\n2) Cafu\n3) Diego Maradona\n4) Miroslav Klose\n");
    printf("What's your answer: ");
    scanf("%d", &ans10);
    if (ans10 == 1) {
        printf("Your answer is correct!\n");
        point10 = 10;
    } else {
        printf("Wrong answer\n");
        point10 = 0;
    }
    totalPoints += point10;

    // Display total points
    printf("----------------------------------------------\n\nYour total score is: %d/100\n", totalPoints);

    return 0;
}
