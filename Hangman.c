/* Hangman 
     Author: Mahim Hossain
     Date: 14/01/2020
*/

#include <stdio.h>

int main() {
    
    char guess;
    
    printf("***************************** \n");
    printf(" Welcome to the Hangman Game \n");
    printf("*****************************\n \n");
    printf("__ __ __ \n \n");
    printf("Please enter your guess \n");
    
    scanf("%1s", &guess);
    flushall();
    
    switch(guess) {
        
        case 'C': {
            
            printf("You guessed C \n \n");
            printf("C __ __ \n \n");
            scanf("%1s", &guess);
            
            
            if (guess == 'A') {
                
                printf("You guessed A \n \n");
                printf("C A __ \n \n");
                scanf("%1s", &guess);
                
                
                if (guess == 'T') {
                    
                    printf("You guesed T \n \n");
                    printf("C A T \n \n");
                    printf("You win! Press Enter to end the program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // END OF A IF
            
            if (guess == 'T') {
                
                printf("You guessed T \n \n");
                printf("C __ T \n \n");
                scanf("%1s", &guess);
                
                
                if (guess == 'A') {
                    
                    printf("You guessed A \n \n");
                    printf("C A T \n \n");
                    printf("You win! Press enter to end the program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // END OF T IF
            
        } // END OF CASE C 
        
        case 'A': {
            
            printf("You guessed A \n \n");
            printf("__ A __ \n \n");
            scanf("%1s", &guess);
            
            if (guess == 'C') {
                
                printf("You guessed C \n \n");
                printf("C A __ \n \n");
                scanf("%1s", &guess);
                
                if (guess == 'T') {
                    
                    printf("You guessed T \n \n");
                    printf("C A T \n \n");
                    printf("You Win!! Press Enter to end the program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // END C IF
            
            if (guess == 'T') {
                
                printf("You guessed T \n \n");
                printf("__ A T \n \n");
                scanf("%1s", &guess);
                
                if (guess == 'C') {
                    
                    printf("You guessed C \n \n");
                    printf("C A T \n \n");
                    printf("You win!! Press Enter to end the Program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // end T IF
            
        } // END OF CASE A
        
        case 'T': {
            
            printf("You guessed T \n \n");
            printf("__ __ T \n \n");
            scanf("%1s", &guess);
            
            if (guess == 'C') {
                
                printf("You guessed C \n \n");
                printf("C __ T \n \n");
                scanf("%1s", &guess);
                
                if (guess == 'A') {
                    
                    printf("You guessed A \n \n");
                    printf("C A T \n \n");
                    printf("You win!! Press Enter to end the program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // END C IF
            
            if (guess == 'A') {
                
                printf("You guessed A \n \n");
                printf("__ A T \n \n");
                scanf("%1s", &guess);
                flushall();
                
                
                if (guess == 'C') {
                    
                    printf("You guessed C \n \n");
                    printf("C A T \n \n");
                    printf("You win!! Press Enter to end the program \n \n \n \n");
                    
                } // WIN WIN WIN
                
            } // end IF A
            
        } // END CASE T
        
    } // END OF SWITCH
    
    getchar();
    return 0;
    
} // end MAIN
                