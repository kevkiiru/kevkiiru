#ifndef MAIN_H
#define MAIN_H


void gotoxy (int x, int y);
void setcolor(int Forgc);
void ClearColor();
void ClearConsoleToColors(int ForgC, int BackC);
void SetColorAndBackground(int ForgC, int BackC);
int check_leapYear(int year);
void increase_month(int *mm, int *yy);
void decrease_month(int *mm, int *yy);
int getNumberOfDays(int month, int year);
char *getName(int day);
void print_date(int mm, int yy);
int getDayNumber(int day, int mon, int year);
char *getDay(int dd, int mm, int yy);
int checkNote(int dd, int mm);
void printMonth(int mon, int year, int x, int y);
void AddNote();
void showNote(int mm);
int main();







#endif // MAIN_H
