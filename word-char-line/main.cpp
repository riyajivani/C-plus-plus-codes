/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
     char ch,arr[100];
     int i=0,line=0,word=0,character=0;
     
     cout << "enter your paragraph(enter # for stoping):\n";
     
     do{
          cin.get(ch);
          arr[i]=ch;
          i++;
     }
     while(ch!='#');
     
     arr[i]='\0';
     
     for(i=0;arr[i]!='\0';i++)
     {
          if(arr[i]=='\n')
          {
               line+=1;
          }
          
          if(arr[i]==' '||arr[i]=='\n')
          {
               word+=1;
          }
          else
               character+=1;
     }
     
     cout << "your string is : "<< arr <<endl;
     cout << "no. of lines  : " << line <<endl;
     cout << "no. of words  : " << word <<endl;
     cout << "no. of character  : " << character-1 <<endl;
     
    return 0;
}