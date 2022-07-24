#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
    int main()
{
    string s;
    int size=0, key=0, operation;
    char y;
    int *array;
    main:
    cout<<"program written by Jai Parkash\n";
    cout<<"Press 1 for Encryption \nPress 2 for Decryption\n";
    cout<<"Select Operation :";
    cin>>operation;
    switch(operation)
    {
        case 1:
            cout<<"Enter the message to Encrypt :-";
            cin>>s;
            cout<<"Enter key =>";
            cin>>key;
            size=s.length();
            array = new int[s.length()];
            cout<<"Data Encrypted Successfullyn :\n";
            for(int i=0; i<size; i++)
            *(array + i)=s[i]+key;
            for(int i=0; i<size; i++)
            {
            y=*(array+i);
            cout<<array[i]<<"\t"<<y<<endl;
            cout<<array[i]<<y<<endl;
            }
            delete []array;
            break;
        case 2:
            cout<<"Enter the Encrypted Message =>";
            cin>>s;
            cout<<"Enter the key =>";
            cin>>key;
            size=s.length();
            array=new int[s.length()];
            cout<<"Data Decrypted Successfully :\n";
            for (int i=0; i<size; i++)
            *(array+i)=s[i]-key;
            for (int i=0; i<size; i++)
            {
            y=*(array+i);
            cout<<array[i]<<"\t"<<y<<endl;
            }
            delete []array;
            break;
        default:
            {               
            cout<<"Invalid Input Try again \n";
            system("cls");
            goto main;
            }
            cout<<"\n\n\n";
        system("pause");                
    }   
}

