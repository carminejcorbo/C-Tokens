#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 15

int main() {
  char phone_num[MAX_LENGTH];  // intialize string array to n + 1 characters where n is the length of the string.
  char *areaCodeToken;
  char *firstThree;
  char *lastFour;
  char fullNumber[8]; // allocate space for 7 characters plus null terminator
  int area_code;
  long phonenumber;
  
  printf("Enter a telephone number in the form (555) 555-5555: ");

  // Get user input and store it in phone_num
  fgets(phone_num, MAX_LENGTH, stdin);
  printf("You entered: %s\n", phone_num);
  
  //strcpy(phone_num, "(203) 756-2693"); // for testing only remove
  
  // Extract area code
  areaCodeToken = strtok(phone_num, "()");
  printf("%s\n", areaCodeToken); // for testing only
  
  // Continue to tokenize string
  firstThree = strtok(NULL, "- ");
  printf("%s\n", firstThree); // for testing only

  // Continue to tokenize string
  lastFour = strtok(NULL, "- ");
  printf("%s\n", lastFour); // for testing only

  // Concatenate firstThree with lastFour
  strcpy(fullNumber, firstThree); // copy firstThree to fullNumber
  strcat(fullNumber, lastFour); // concatenate lastFour to fullNumber

  // Convert char to int and long
  area_code = atoi(areaCodeToken);
  phonenumber = atoi(fullNumber);
  
  // print value
  printf("Area code: %d  Phone number: %ld \n", area_code, phonenumber);
  
  return 0;
}
