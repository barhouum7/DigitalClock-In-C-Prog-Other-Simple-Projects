#include<stdio.h>
#include <windows.h>

int niceColorFul();
int originalColor();

int main(void){

niceColorFul();

printf("\n\n");
getch();
return 0;
}

int niceColorFul(){
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;

  /* Save current attributes */
  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

  // /* Restore original attributes */
  // SetConsoleTextAttribute(hConsole, saved_attributes);
  // printf("Back to normal");

  return printf("This is some nice COLORFUL text, isn't it?");
}
/* ------------------- Restore the original Color ----------------------------- */
int originalColor(){
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;

  /* Save current attributes */
  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;
  SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);

  return printf("Back to normal");
}
