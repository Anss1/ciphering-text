#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
//****************************************************************************************

int binary_to_dec(string _c)
{
    string dec = string(_c);
    int bin[5] ,decimal=0;
    int count1 = 4;
    while(count1>=0)
    {
        if(dec[count1] == 'a')
        {
            bin[count1] = 0;
        }
        else
        {
            bin[count1] = 1;
        }
        count1--;
    }
    for(int i=4;i>=0;i--)
    {
        decimal+=(bin[i])*(pow(2,4-i));
    }
    return decimal;
}

//**************************************************************************

string decToBinary(char _c)
{
    int dec = int(_c);
    string bin = "00000";
    int count1 = 4;
    while(dec != 0||count1>=0)
    {
        if(dec %2 == 0)
        {
            bin[count1] = 'a';
        }
        else
        {
            bin[count1] = 'b';
        }
        dec /= 2 ;
        count1--;
    }
    return bin;
}
//****************************************************************************
void cipher_0(int val)
{
   string temp0={'a','b','c','d','e',
                'f','g','h','i','j',
                'k','l','m','n','o',
                'p','q','r','s','t',
                'u','v','w','x','y','z'};

if(val!=3)
 {
     int con,x0,a,b,c;
        while(con!=1)
       {

        cout<<"Note : You Must Remember The Three Keys When Decryption and Encryption ."<<endl<<endl;
        cout<<"Note : (First key * Third key) % 26 Must = 1\n\n";
        cout<<"Enter First key = ";
        cin>>a;
        cout<<"\nEnter Second key = ";
        cin>>b;
        cout<<"\nEnter Third key = ";
        cin>>c;
        con=(a*c)%26;
        system("cls");

       }

   if(val==1)
    {

        string n0,str0,a0;

    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n0);
    for(unsigned int i0=0;i0<n0.length();i0++)
    {
        for(int y0=0;y0<26;y0++)
        {
            if(n0[i0]==temp0[y0])
            {
                x0=(a*y0+b)%26;
                a0=temp0[x0];
                str0.append(a0);
                break;
            }
        }
    }
    cout<<"\nThe Text after Encryption : "<<str0<<endl;

    }

//decipher..................................................

    if(val==2)
    {

        string n0,str0,a0;

    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n0);
    for(unsigned int i0=0;i0<n0.length();i0++)
    {
        for(int y0=0;y0<26;y0++)
        {
           if(n0[i0]==temp0[y0])
           {
               x0=(( c *( y0 - b )) % 26);
                a0=temp0[x0];
                str0.append(a0);
                break;
           }
        }
    }
    cout<<"\nThe Text after Encoding : "<<str0<<endl;

    }

 }
 else
 {
     cout<<"The Program Ends ..."<<endl;
 }
}
//******************************************************************************
void cipher_1(int val)
{


  string  temp1={'a','b','c','d','e',
                'f','g','h','i','j',
                'k','l','m','n','o',
                'p','q','r','s','t',
                'u','v','w','x','y','z'};

if(val!=3)
  {
      if(val==1)
    {
        int n_shift,sub1;
    string n1,str1="";

    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n1);
cout<<endl<<"Enter Number of shift = ";
    cin>>n_shift;
    for(unsigned int i1=0;i1<n1.size();i1++)
        {
           for(int y=0;y<26;y++)
           {
               if(n1[i1]==temp1[y])
               {
                   sub1=y-n_shift;
                   if(sub1<0)
                   {
                       sub1=26+sub1;
                   }
                   str1+=temp1[sub1];
               }
           }
        }
        cout<<"\nThe Text after Encryption : "<<str1<<endl;

    }
//decipher..................................................
    if(val==2)
    {
        int n_shift,sub1;
    string n1,str1;
   cin.ignore();
   cout<<"Enter your plain text : ";
   getline(cin,n1);
cout<<endl<<"Enter Number of shift = ";
    cin>>n_shift;
for(unsigned int i1=0;i1<n1.size();i1++)
    {
      for(int y=0;y<26;y++)
      {
        if(n1[i1]==temp1[y])
            {
                sub1=y+n_shift;
                if(sub1>25)
                {
                    sub1=sub1-26;
                }
                str1+=temp1[sub1];
            }
        }
    }
        cout<<"\nThe Text after Encoding : "<<str1<<endl;
  }
}
else
{
    cout<<"The Program Ends ..."<<endl;
}

}
//****************************************************************************************
void cipher_2(int val)
{

if(val!=3)
{
   if(val==1)
    {
        string n2,a2,str2;
    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n2);

        for(unsigned int i2=0;i2<n2.length();i2++)
            {
                if(1)
                {
                    a2=char((122-int(n2[i2]))+97);
                    str2.append(a2);
                }
            }
        cout<<"\nThe Text after Encryption : "<<str2<<endl;
    }
//decipher..................................................
    if(val==2)
    {
        string n2,a2,str2;
    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n2);

        for(unsigned int i2=0;i2<n2.length();i2++)
            {
                if(1)
                {
                    a2=char((122-int(n2[i2]))+97);
                    str2.append(a2);
                }
            }
         cout<<"\nThe Text after Encoding : "<<str2<<endl;
    }
}
else
{
    cout<<"The Program Ends ..."<<endl;
}
}
//***************************************************************************************
void cipher_3(int val)
{

if(val!=3)
 {
      if(val==1)
     {
         string n3,a3,str3;
    cin.ignore();
    cout<<"Enter your plain text : ";
   getline(cin,n3);

     for(unsigned int i3=0;i3<n3.length();i3++)
    {
        if(int(n3[i3]) > 109)
        {
            a3=char(int(n3[i3])-13);
            str3.append(a3);
        }
        else
        {
            a3=char(int(n3[i3])+13);
            str3.append(a3);
        }
    }
    cout<<"\nThe Text after Encryption : "<<str3<<endl;
    }
//decipher..................................................
    if(val==2)
    {
          string n3,a3,str3;
    cin.ignore();
    cout<<"Enter Your Plain Text : ";
   getline(cin,n3);

     for(unsigned int i3=0;i3<n3.length();i3++)
    {
        if(int(n3[i3]) > 109)
        {
            a3=char(int(n3[i3])-13);
            str3.append(a3);
        }
        else
        {
            a3=char(int(n3[i3])+13);
            str3.append(a3);
        }
    }
    cout<<"\nThe Text After Encoding : "<<str3<<endl;
    }
 }
 else
 {
     cout<<"The Program Ends ..."<<endl;
 }

}
//********************************************************************************
void cipher_4(int val)
{

if(val!=3)
{

   if(val==1)
    {
        string out, n4, str4,temp4={'a','b','c','d','e',
                                    'f','g','h','i','j',
                                    'k','l','m','n','o',
                                    'p','q','r','s','t',
                                    'u','v','w','x','y','z'};

   cin.ignore();
   cout<<"Enter Your Plain Text : ";
   getline(cin,n4);

    for(unsigned int i4=0;i4<n4.size();i4++)
    {
        for(int y4=0;y4<26;y4++)
        {
           if(n4[i4]==temp4[y4])
           {
              out=decToBinary(y4);
              str4.append(out);
              str4.append(" ");
           }
        }
    }
    cout<<"\nThe Text after Encryption : "<<str4<<endl;

    }
//decipher..............................................
    if(val==2)
    {

         string n4,n04="",test,str4="",temp4={'a','b','c','d','e',
                                            'f','g','h','i','j',
                                            'k','l','m','n','o',
                                            'p','q','r','s','t',
                                            'u','v','w','x','y','z'};


int out;
   cin.ignore();
   cout<<"Enter Your Plain Text : ";
   getline(cin,n4);
   for(unsigned int i=0 ;i<n4.size();i++)
   {
       if(n4[i]==' ')
        {continue;}
       else
        {n04+=n4[i];}
   }

    for(unsigned int i4=0;i4<n04.size();i4+=5)
    {
        for(int y4=0;y4<5;y4++)
        {
            test.push_back(n04[i4+y4]);
        }
        out=binary_to_dec(test);
        str4+=temp4[out];
        test.clear();
    }
    cout<<"\nThe Text After Encoding : "<<str4<<endl;
    }
}
else
{
    cout<<"The Program Ends ..."<<endl;
}

}
//************************************************************************************
void cipher_5(int val)
{
if(val!=3)
  {

   string n5,temp5={'a','b','c','d','e',
                    'f','g','h','i','j',
                    'k','l','m','n','o',
                    'p','q','r','s','t',
                    'u','v','w','x','y','z'};

    int i=0;
    string key,a5,newtemp,str5;
    cout<<"Enter your secret key contain of (5) character : ";
    cin>>key;
    newtemp=key;

        for(int y=0 ;y<26;y++)
        {
            if(temp5[y]!=newtemp[i]&&temp5[y]!=newtemp[i+1]&&temp5[y]!=newtemp[i+2]&&temp5[y]!=newtemp[i+3]&&temp5[y]!=newtemp[i+4])
            {
                newtemp.push_back(temp5[y]);
            }
        }
if(val==1)
{


    cin.ignore();
    cout<<"\nEnter Your Plain Text : ";
    getline(cin,n5);

     for(unsigned int i5=0;i5<n5.size();i5++)
    {
        for(int y5=0;y5<26;y5++)
        {
           if(n5[i5]==temp5[y5])
           {
               str5.push_back(newtemp[y5]);
           }
        }
    }
     cout<<"\nThe Text after Encryption : "<<str5<<endl;
}

    if(val==2)
    {
         cin.ignore();
        cout<<"\nEnter Your Plain Text : ";
        getline(cin,n5);

         for(unsigned int i5=0;i5<n5.size();i5++)
    {
        for(int y5=0;y5<26;y5++)
        {
           if(n5[i5]==newtemp[y5])
           {
               str5.push_back(temp5[y5]);
           }
        }
    }
    cout<<"\nThe Text After Encoding : "<<str5<<endl;

    }
  }
  else
 {
     cout<<"The Program Ends ..."<<endl;
 }
}
//***************************************************************************************
void cipher_6(int val)
{

if(val!=3)
 {
      if(val==1)
    {
        string n6,str6,k1,k2, temp6={'a','b','c','d','e',
                                    'f','g','h','i','j',
                                    'k','l','m','n','o',
                                    'p','q','r','s','t',
                                    'u','v','x','y','z'};
        cout<<"Enter your plain text : ";
        cin.ignore();
        getline(cin,n6);

        cout<<"\nEnter your secret key contain of (5) numbers : ";
    for(int x = 0;x<5;x++)
            {
                cin>>k1[x];
            }
            for(int o = 0;o<5;o++)
            {
                k2[o]=k1[o];
            }

cout<<endl;

  for(unsigned int i = 0 ;i<n6.size();i++)
    {
        for(int y = 0;y<25;y++)
        {
            if(n6[i]==temp6[y])
            {
                if(y<=4)
                {
                    str6.push_back(k1[0]);
                    str6.push_back(k2[y]);
                }
                if(y>4&&y<=9)
                {
                      str6.push_back(k1[1]);
                    str6.push_back(k2[y-5]);
                }
                if(y>9&&y<=14)
                {
                    str6.push_back(k1[2]);
                    str6.push_back(k2[y-10]);
                }
                if(y>14&&y<=19)
                {
                      str6.push_back(k1[3]);
                    str6.push_back(k2[y-15]);
                }
                if(y>19&&y<=24)
                {
                      str6.push_back(k1[4]);
                    str6.push_back(k2[y-20]);
                }
            }
        }
    }
    cout<<"\nThe Text after encryption : "<<str6<<endl;
    }
//decipher..........................................................
    if(val==2)
    {
        int y=0,x=0,out1,out2;

        string n6,k1,k2,str6;char temp6[5][5]={ {'a','b','c','d','e'},
                                                {'f','g','h','i','j'},
                                                {'k','l','m','n','o'},
                                                {'p','q','r','s','t'},
                                                {'u','v','x','y','z',} };



cout<<"Enter your plain text : ";
    cin>>n6;
cout<<endl;

cout<<"\nEnter your secret key contain of (5) numbers : ";
for(int x = 0;x<5;x++)
            {
                cin>>k1[x];
            }
            for(int o = 0;o<5;o++)
            {
                k2[o]=k1[o];
            }
cout<<endl;


    for(unsigned int i6=0;i6<n6.size();i6+=2)
    {
       while(y<5||x<5)
       {
           if(n6[i6]==k1[y])
           {
               out1=y;
           }
           if(n6[i6+1]==k2[x])
           {
               out2=x;
           }
           y++;
           x++;
       }

       str6.push_back(temp6[out1][out2]);
       y=0;
       x=0;
    }
   cout<<"\nThe text after decoding : "<<str6<<endl;
    }

 }
 else
 {
     cout<<"The Program Ends ..."<<endl;
 }
}
//*********************************************************************************************
void cipher_7(int val)
{
    string n7,a7,str7, temp07[81]={".-","-...","-.-.","-..",".",
                                    "..-.","--.","....","..",".---",
                                    "-.-",".-..","--","-.","---",
                                    ".--.","--.-",".-.","...","-",
                                    "..-","...-","-..-",".--","-.--","--.."};
    string temp7={'a','b','c','d','e',
                    'f','g','h','i','j',
                    'k','l','m','n','o',
                    'p','q','r','s','t',
                    'u','v','w','x','y','z'};
if(val==1)
{


     cin.ignore();
     cout<<"Enter your plain text : ";
     getline(cin,n7);

    for(unsigned int i7=0;i7<n7.size();i7++)
    {
        for(int y7=0;y7<27;y7++)
        {
           if(n7[i7]==temp7[y7])
           {
               str7.append(temp07[y7]);
               if(n7[i7+1]==' ')
               {
                   str7.push_back('   ');
               }
               else
               {
                   str7.push_back(' ');
               }
           }
        }
    }
  cout<<"\nThe Text after encryption : "<<str7<<endl;
}
if(val==3)
{
    cout<<"The Program Ends ..."<<endl;
}



}
//******************************************************************************************
void cipher_9(int val)
{
    if(val==1)

    {
        string text;
  string firstCode = "";
  string lastCode  = "";
  int key ;
  cout << "Please, enter your plain text: ";
  cin.ignore();
  getline (cin,text);
  cout << "Please, enter your key consists of (1) positive number : ";
  cin>>key;
  for(unsigned int i = 0;i < text.size();i++)
  {
	  if(text[i] != ' ')
	  {
		 firstCode += text[i];
	  }
  }
  int N = key;
  int M = firstCode.size();
  char** arr = new char*[N];
  for(int i = 0; i < N; ++i)
      arr[i] = new char[M];
  for(int i = 0;i < N;i++)
  {
	  for(int j = 0;j < M;j++)
	  {
		   arr[i][j] = 0;
	  }
  }
  int row = 0;
  int col = 0;
  int type = 0 ;
  while(col < M)
  {
	  arr[row][col] = firstCode[col];
	  if(type == 0){
		  row += 1;
		  if(row == (N-1))
		  {
			  type = 1;
		  }
	  }else if(type == 1){
		  row -= 1;
		  if(row == 0)
		  {
			  type = 0;
		  }
	  }
	  col++;
  }
  for(int i = 0;i < N;i++)
  {

	  for(int j = 0;j < M;j++)
	  {
		  if(arr[i][j] != 0)
		  {
			  lastCode +=  tolower(arr[i][j]);
		  }
	  }
  }
  cout<<"\nThe text after decoding : "<<lastCode<<endl;
  for(int i = 0; i < N; ++i)
    {
        delete [] arr[i];
        delete [] arr;
    }
 }
 if(val==3)
 {
     cout<<"The Program Ends ..."<<endl;
 }
}






int main()
{



    int type,val;

    cout<<"Ahlan ya user ya habibi (;\n\n";
    cout<<"Encryption Types :\n\n";

    cout<<setw(31)<<"0 ==> Affine Cipher.\t\t";
    cout<<"1 ==> Caesar Cipher.\n"<<endl;
    cout<<setw(31)<<"2 ==> Atbash Cipher.\t\t";
    cout<<"3 ==> ROT13 Cipher.\n"<<endl;
    cout<<setw(33)<<"4 ==> Baconian Cipher.\t\t";
    cout<<"5 ==> Simple Substitution Cipher.\n"<<endl;
    cout<<setw(39)<<"6 ==> Polybius Square Cipher.\t";
    cout<<"7 ==> Morse Code.\n"<<endl;
    cout<<"\t\t\t9 ==> Rail-fence Cipher.\n\n"<<endl;


    cout<<"Choose Encryption Type you want : ";
    cin>>type;
    system("cls");

    while(val!=3)
    {cout<<endl;

    cout<<"What do you like to do today ?\n"<<endl;
    cout<<"1- Cipher a message.\n" << "2- Decipher a message.\n" << "3- End.\n\n";
    cout<<"Choose the type of process you want : ";
    cin>>val;
    system("cls");

    if(type==0)
    {cipher_0(val);}

    if(type==1)
    {cipher_1(val);}

    if(type==2)
    {cipher_2(val);}

    if(type==3)
    {cipher_3(val);}

    if(type==4)
    {cipher_4(val);}

    if(type==5)
    {cipher_5(val);}

    if(type==6)
    {cipher_6(val);}

    if(type==7)
    {cipher_7(val);}

    if(type==9)
    {cipher_9(val);}


    }


    return 0;
}
