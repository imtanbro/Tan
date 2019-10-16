#include<iostream>
using namespace std;

void str_length();
void str_copy();
void str_concat();
void str_reverse();
void str_palindrome();
void str_compare();
void sub_string();

char str1[10];
char str2[10];


int main()
{
   int ch;
   char ans;

   do
   {
      cout<<"\n\n ****Operations On String****";
      cout<<"\n 1. String Length";
      cout<<"\n 2. String Copy";
      cout<<"\n 3. String Concatenation";
      cout<<"\n 4. String Reverse";
      cout<<"\n 5. String Palindrome";
      cout<<"\n 6. String Compare";
      cout<<"\n 7. Sub-String";

      cout<<"\n\n\t Enter your Choice: ";
      cin>>ch;

      switch(ch)
      {
         case 1:    str_length();
		    break;

	 case 2:    str_copy();
		    break;

	 case 3:    str_concat();
		    break;

	 case 4:    str_reverse();
		    break;

	 case 5:    str_palindrome();
		    break;

	 case 6:    str_compare();
		    break;

	 case 7:    sub_string();
		    break;

	default:    cout<<"\n\n\t You've entered Wrong Choice!!!";
      }

      cout<<"\n\n\t Do you want to continue? (y/n) : ";
      cin>>ans;
   }while(ans == 'y');

   cout<<"\n\n";

   return 0;
}


void str_length()
{
    int i;

    cout<<"\n\n Enter the String: ";
    cin>>str1;

    i=0;
    while(str1[i] != '\0')
        i++;

    cout<<"\n\n\t Length of String: "<<i;

}


void str_copy()
{
    int i;

    cout<<"\n\n Enter the String: ";
    cin>>str1;

    i=0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout<<"\n\n\t New Copied string: "<<str2;

}


void str_concat()
{
    int i,j;

    cout<<"\n\n Enter the String 1: ";
    cin>>str1;

    cout<<"\n\n Enter the String 2: ";
    cin>>str2;

    cout<<"\n\n\t First String is: "<<str1;
    cout<<"\n\n\t Second String is: "<<str2;

    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }

    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';

    cout<<"\n\n\t Concatenated String: "<<str1;
}


void str_palindrome()
{
   int i,j,flag = 0;

   cout<<"\n\n Enter the String: ";
   cin>>str1;

   cout<<"\n\n\t Given String is: "<<str1;


   i=0;
   while(str1[i] != '\0')
   {
        i++;
   }

   j = 0;
   i = i-1;
   while(i >= 0)
   {
        str2[j] = str1[i];
        j++;
        i--;
   }
   str2[j] = '\0';

   cout<<"\n\n\t Reverse String is: "<<str2;


   for(i=0; str1[i] != '\0'; i++)
   {
         if(str1[i] != str2[i])
         {
            flag = 1;
            break;
         }
   }
   if(flag == 1)
       cout<<"\n\n\t String is Not Palindrome!!!";
   else
       cout<<"\n\n\t String is Palindrome!!!";

}


void str_reverse()
{
   int i,j;

   cout<<"\n\n Enter the String: ";
   cin>>str1;

   cout<<"\n\n\t Given String is: "<<str1;


   i=0;
   while(str1[i] != '\0')
   {
        i++;
   }

   j = 0;
   i = i-1;
   while(i >= 0)
   {
        str2[j] = str1[i];
        j++;
        i--;
   }
   str2[j] = '\0';

   cout<<"\n\n\t Reverse String is: "<<str2;

}


void str_compare()
{
   int i,j,len1,len2,flag = 0;

   cout<<"\n\n Enter the String 1: ";
   cin>>str1;

   cout<<"\n\n Enter the String 2: ";
   cin>>str2;

   cout<<"\n\n\t First String is: "<<str1;
   cout<<"\n\n\t Second String is: "<<str2;


   i = 0;
   while(str1[i] != '\0')
         i++;

   j = 0;
   while(str2[j] != '\0')
         j++;

   len1 = i;
   len2 = j;

   if(len1 == len2)
   {
      for(i=0; str1[i] != '\0'; i++)
      {
         if(str1[i] != str2[i])
         {
            flag = 1;
            break;
         }
      }
      if(flag == 1)
         cout<<"\n\n\t Strings are Not Equal!!!";
      else
         cout<<"\n\n\t Strings are Equal!!!";
   }
   else
   {
      cout<<"\n\n\t Strings are Not Equal!!!";
   }
}


void sub_string()
{
    int i,j,flag = 0;

    cout<<"\n\n Enter the Main String: ";
    cin>>str1;

    cout<<"\n\n Enter the Sub-String: ";
    cin>>str2;

    j = 0;
    for(i=0; str1[i] != '\0'; i++)
    {
       if(str1[i] == str2[j])
       {
           while(str2[j] != '\0')
           {
              i++;
              j++;
              if(str1[i] == str2[j])
              {
                 i++;
                 j++;
              }
              else
              {
                 flag = 1;
                 break;
              }
           }
        }
    }
    if(flag == 1)
       cout<<"\n\n\t String "<<str2<<" is not Sub-string of "<<str1;
    else
       cout<<"\n\n\t String "<<str2<<" is a Sub-string of "<<str1;

}
