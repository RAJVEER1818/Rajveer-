#include <stdio.h>
int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputINRtoEuro; // User inputted for USD to EURO;
  int userinputINRtoJPY; // User inputted for USD to JPY;
  int userinputINRtoUSD; // User inputted for USD to RMB;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float INRtoEuro ; // varaible that stores the converted USD->EURO;
  float INRtoJPY; // stores the converted USD->JPY;
  float INRtoUSD; // stores the converted USD->RMB;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for INRtoEURO. \n");
      printf("Enter 2 for INRtoJPY. \n");
      printf("Enter 3 for INRtoUSD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoEuro);
          INRtoEuro = userinputINRtoEuro * 0.012;
          printf("Euro: %.2f",INRtoEuro); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoJPY);
          INRtoJPY = userinputINRtoJPY * 1.66;
          printf("JPY: %.2f",INRtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD * 0.013;
        printf("RMB: %.2f",INRtoUSD);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
