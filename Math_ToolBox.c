#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//--------------------------------------------------------1st Function [Area Calculator]-------------------------------------------------------------

void area() {

int a,b,r;
char op;
float c,d,PI;



fflush(stdin);

printf("\t\t\t                               ***Maths's Toolbox***  \n\n");
printf("                    ---------------------------------------------------------------------------------------------                    \n\n");
AREA:
printf("\t\t\t                          ---Welcome to Area Calculator--- \n\n");
printf("Enter The Operant, That Calculation You Want For      \n\n");

printf(":-> Enter 1 For Area of Triangle \n");
printf(":-> Enter 2 For Perimeter of Square \n");
printf(":-> Enter 3 For Area of Square \n");
printf(":-> Enter 4 For Diagonal of a Square \n");
printf(":-> Enter 5 For Area of Circle \n");
printf(":-> Enter 6 For Circumference of a Circle \n");
printf(":-> Enter 7 For Total Surface Area of a Cube \n");
printf(":-> Enter 8 For Volume of cube \n");
printf(":-> Enter 9 For Perimeter of cube \n");
printf(":-> Enter 0 For Volume of cylinder \n");
printf("    Enter Your Choice : ");
scanf("%c",&op);


{ if (op =='0' || op =='1' || op =='2' || op =='3' || op =='4' || op =='5' || op =='6' || op =='7' || op =='8' || op =='9') {

                                                             printf(" \n");  }

else { system("cls");
        printf(" You Entered Wrong Choice!! \n\n"); 
        goto AREA; }        }



//                   New If-Else statement
if(op =='1') {
   printf(" Enter Base of Triangle: ");
   scanf("%d",&a);
   printf(" Enter Height of Triangle: ");
   scanf("%d",&b);
   c=(a*b)/2;
   printf(" The area of triangle : %.3f units",c); }

    
else if(op =='2' || op =='3' || op =='4') {
   printf(" Enter The Side of a Square : ");
   scanf("%d",&a);
                //  ++Iteration of if-else starts++
     if(op =='2') {
        c = 4*a;
        printf(" The Perimeter Of a Square is : %.2f units",c); }

      else if(op =='3') {
        c = a*a;
        printf(" The Area Of a Square is : %.2f units",c); }

      else if(op =='4') {
        c = a* sqrt(2);
        printf(" The Diagonal of a Square is : %.2f units",c); }      //++Iteration Ends Here++
}


else if(op =='5') {
    printf(" Enter the Radius of Circle: ");
    scanf("%d",&r);
    PI=3.14;
    c=PI*r*r;
    printf(" The area of Circle is: %.3f units",c); }


else if(op == '6') {
    printf(" Enter the value of Radius :");
    scanf("%d",&r);
    PI=3.14;
    c=2*PI*r;
    printf(" The Circumference of circle is : %.3f units",c); }


else if(op == '7' || op == '8' || op == '9') {
    printf(" Enter the Side of a Cube : ");
    scanf("%d",&a);

  if(op == '7') {
    c = 6*a*a;
    printf(" The Total Surface Area of a Cube is : %.3f",c); } 

  else if(op == '8') {
    c = a*a*a;
    printf(" The Volume of a Cube is : %.3f",c); }

  else if(op == '9') {
    c = 12*a;
    printf(" The Perimeter of a Cube is : %.3f",c); }       
}

   
else if(op =='0') {
    printf(" Enter the value of Radius : ");
    scanf("%d",&r);
    printf(" Enter the height of Cylinder : ");
    scanf("%d",&a);
    PI = 3.14;
    c = PI*r*r;
    d = c*a;
    printf(" The Volume of a Cylinder is : %.3f",d); }

}


//--------------------------------------------------------2nd Function [Temp Calculator]-------------------------------------------------------------

void temp() {

int a;
char op;
float C,F;

fflush(stdin);

printf("\t\t\t                               ***Maths's Toolbox***  \n\n");
printf("                    ---------------------------------------------------------------------------------------------                    \n\n");
TEMP:

printf("\t\t\t                      ---Welcome to Temperature Calculator--- \n\n");
printf("Enter The Operant, That Calculation You Want For \n\n");

printf(":-> Enter 1 to convert Celsius into Farenheit \n");
printf(":-> Enter 2 to convert Farenheit into Celsius \n");
printf("    Enter Your Choice : ");
scanf("%c",&op);

if(op == '1' || op == '2' ) {
         printf("\n");

//  +++iteration Starts from here+++

if(op == '1') {
        printf(" Enter the temp. in Celsius :");
        scanf("%f",&C);
        F = (C*1.8)+32;
        printf(" The temp in Farenheit is %.2f",F);     }

else if(op == '2') {
         printf(" Enter the temp in Farenheit :");
         scanf("%f",&F);
         C = (F-32)*5/9;
         printf(" The temp in Celsius is %.2f",C);  }     //+++Iteration Ends Here+++
}


else {
       system("cls");
       printf(" You Entered Wrong Choice!! \n\n");
       goto TEMP;    }

}


//--------------------------------------------------------3rd Function [Interest Calculator]-------------------------------------------------------------

void interest() {

char op;
float P,T,R,SI,CI,a;

fflush(stdin);

printf("\t\t\t                               ***Maths's Toolbox***  \n\n");
printf("                    ---------------------------------------------------------------------------------------------                    \n\n");

Interest:
printf("\t\t\t                         ---Welcome to Interest Calculator--- \n\n");
printf("Enter The Operant, That Calculation You Want For \n\n");

printf(":-> Enter 1 to Calculate Simple Interest \n");
printf(":-> Enter 2 to Calculate Compound Interest \n");
printf("    Enter Your Choice : ");
scanf("%c",&op);

{ 
   if(op == '1' || op == '2' ) {
        printf("\n"); }

   else {
        system("cls");
        printf(" You Entered Wrong Choice!! \n\n");
        goto Interest;    }
}



if (op == '1') {
       printf(" Enter principle (amount): ");
       scanf("%f",&P);

       printf(" Enter time: ");
       scanf("%f",&T);

       printf(" Enter rate: ");
       scanf("%f",&R);

       SI = (P*R*T) / 100;
       printf(" Simple Interest = %.2f", SI);     }


else if(op == '2') {
        printf(" Enter principle (amount): ");
        scanf("%f",&P);

        printf(" Enter time: ");
        scanf("%f",&T);

        printf(" Enter rate: ");
        scanf("%f",&R);

        a = P* (pow((1 + R / 100),T));
        printf(" Total Amount is  = %.2f \n", a);      
        
        CI = a-P;
        printf(" Compound Interest is = %.2f", CI);  }

}



//--------------------------------------------------------4th Function [Conversion Calculator]-------------------------------------------------------------


void conversion() {

char op;
float a,c,m,km,cm,mm;

fflush(stdin);

  printf("\t\t\t                               ***Maths's Toolbox***  \n\n");
  printf("                    ---------------------------------------------------------------------------------------------                    \n\n");
  Conversion:
  
  printf("\t\t\t                      ---Welcome to Conversion Calculator--- \n\n");
  printf("Enter The Operant, That Calculation You Want For \n\n");

  printf(":-> Enter 0 to convert MM. into CM. \n");
  printf(":-> Enter 1 to convert CM. into M. \n");
  printf(":-> Enter 2 to convert M. into KM. \n");
  printf(":-> Enter 3 to convert CM. into Inch. \n");
  printf(":-> Enter 4 to convert Inch. into Feet \n");
  printf(":-> Enter 5 to convert M. into Feet \n");
  printf(":-> Enter 6 to convert grm. into Kg. \n");
  printf(":-> Enter 7 to convert Kg. into Mc.Ton \n");
  printf(":-> Enter 8 to convert ml. into Liters \n");
  printf(":-> Enter 9 to convert km. into Miles \n");
  printf("    Enter Your Choice : ");
  scanf("%c",&op);
  fflush(stdin);


if (op =='0' || op =='1' || op =='2' || op =='3' || op =='4' || op =='5' || op =='6' || op =='7' || op =='8' || op =='9') {
     printf(" \n");  }

else {
        system("cls");
        printf(" You Entered Wrong Choice!! \n\n");
        goto Conversion; }        


//                          New if-else Ststement

{ 
if(op == '0') {
       printf(" Enter value in MM : ");
       scanf("%f",&mm);
       cm= mm/10;
       printf(" %.2f mm = %.2f cm",mm,cm); }
    
else if(op == '1') {
       printf(" enter length in cm: ");
       scanf("%f", &cm);
       m = cm / 100.0;
       printf(" length in mtrs = %.4f",m );  }

else if(op == '2') {
       printf(" Enter the distance (in meters): ");
       scanf("%f", &m);
       km = m / 1000;
       printf(" %.2f meters = %.2f Kilo meters", m, km); }

else if(op == '3') {
       printf(" Enter value in CM : ");
       scanf("%f",&cm);
       c = cm*0.39;
       printf(" %.4f cm = %.4f inch",cm,c); }

else if(op == '4') {
       printf(" Enter value in inch : ");
       scanf("%f",&a);
       c = a*0.083;
       printf(" %.2f inch = %.4f feet",a,c); }

else if(op == '5') {
       printf(" Enter value in M : ");
       scanf("%f",&m);
       c = m*3.28;
       printf(" %.2f m = %.3f feet",m,c); }

else if(op == '6') {
       printf(" Enter value in gm : ");
       scanf("%f",&a);
       c = a/1000;
       printf(" %.2f gm = %.2f kg",a,c); }

else if(op == '7') {
       printf(" Enter value in kg : ");
       scanf("%f",&a);
       c = a/1000;
       printf(" %.2f kg = %.2f ton",a,c); }

else if(op == '8') {
       printf(" Enter value in ml : ");
       scanf("%f",&a);
       c = a/1000;
       printf(" %.2f ml = %.2f L.",a,c); }

else if(op == '9') {
       printf(" Enter value in KM : ");
       scanf("%f",&km);
       c = km*0.6;
       printf(" %.2f km = %.2f miles",km,c); }   
}

}



//--------------------------------------------------------5th Function [Basic Calculator]-------------------------------------------------------------


void calculator() {

int a,b;
char op;
float division,per,c;

fflush(stdin);

printf("\t\t\t                               ***Maths's Toolbox***  \n\n");
printf("                    ---------------------------------------------------------------------------------------------                    \n\n");

Calculator:
printf("\t\t\t                           ---Welcome to Basic Calculator--- \n\n");
printf("Enter The Operant, That Calculation You Want For \n\n");

printf(":-> Enter +,-,*,/ for thier respective calculation \n");
printf(":-> Enter 1 to get power of any no. \n");
printf(":-> Enter 2 for all(+,-,*,/) \n");
printf(":-> Enter 3 for Percentage \n");
printf(":-> Enter 4 for Square Root  \n");
printf(":-> Enter 5 for Cube Root \n");
printf(":-> Enter 6 for table of any no. \n");
printf(":-> Enter 7 for Square of any no.  \n");
printf(":-> Enter 8 for Cube of any no.  \n");
printf("    Enter Operator : ");
scanf("%c",&op);


{  if (op =='+' || op =='-' || op =='*' || op =='/' || op =='1' || op =='2' || op =='3' || op =='4' || op =='5' || op =='6' || op =='7' || op =='8') {
     printf(" \n");  }

else { 
        system("cls");
        printf(" You Entered Wrong Choice!! \n\n");
        goto Calculator; }                              }


 //                                New If-Else statement

if(op =='+' || op =='-' || op =='*' || op =='/' || op =='2')  {
         printf(" Enter The First Value : ");
         scanf("%d",&a);
         printf(" Enter The Second Value : ");
         scanf("%d",&b);
                            //   ++iteration of if-else starts++
    if(op =='+') {
          printf(" The Addition of Two Numbers is : %d",a+b);  }
    else if(op =='-') {
          printf(" The Subtraction of Two Numbers is : %d",a-b); }
    else if(op =='*') {
          printf(" The Multiplication of Two Numbers is : %d",a*b); }
    else if(op =='/') {
          division = a/b;
          printf(" The Division of Two Numbers is : %.2f",division); }
    else if(op =='2') {
          printf(" The Addition of Two Numbers is : %d\n",a+b);
          printf(" The Subtraction of Two Numbers is : %d\n",a-b);
          printf(" The Multiplication of Two Numbers is : %d\n",a*b);
          division = a/b;
          printf(" The Division of Two Numbers is : %.2f",division); }    // ++iteration ended here++
}


else if(op =='3') {
         printf(" Enter Total Marks Obtained : ");
         scanf("%d",&a);
         printf(" Enter Total No. of Marks : ");
         scanf("%d",&b);
         per = (a*100)/b;
         printf(" The Percentage of Your Marks is : %.2f",per);   }


else if(op =='4') {
         printf(" Enter The No. Of which SQRT you want : ");
         scanf("%d",&a);
         c = sqrt(a);
         printf(" The Square Root of %d is = %.2f",a,c); }


else if(op =='1') {
        printf(" Enter The base no. : ");
        scanf("%d",&a);
        printf(" Enter The power of base : ");
        scanf("%d",&b);
        c = pow(a,b);
        printf(" The Result of %d ^ %d = %.2f",a,b,c);  }


else if (op =='5') {
        printf(" Enter the no. For CubeRoot : ");
        scanf("%d",&a);
        c = pow(a, 1.00/3.00) ;
        printf(" The Cube Root of %d is : %.2f",a,c);  }


else if (op =='6') {
        printf(" Enter any No. For Table : ");
        scanf("%d",&a);
        for(b=1; b<=10; b++) {
        c = a*b;
        printf(" %d*%d = %.2f \n",a,b,c);  }       }


else if (op =='7') {
        printf(" Enter Any to Find Square of that : ");
        scanf("%d",&a);
        c = a*a;
        printf(" The Square of %d is : %.2f",a,c);  }


else if (op =='8') {
        printf(" Enter Any no. to Find Cube of that : ");
        scanf("%d",&a);
        c = a*a*a;
        printf(" The Cube of %d is : %.2f",a,c);  }

}



//--------------------------------------------------------------Int main() Starts----------------------------------------------------------------------



int main() {

int Text,Background;
char want;
char restart;
char a,b,c,d,e;



system("cls");
Mid:
printf(" Hello...\n\n");
printf("\t\t           ========================================================================== \n\n");
printf("\t\t                               ***Welcome To Maths's Toolbox***  \n\n\n");


printf("Are you want to change Text/Background Color? \n");
printf("Enter Y for Yes [or] N for No : ");
scanf("%s",&a);

printf("\n\n\n");



 if(a == 'Y' || a == 'y') {

 Change:
  fflush(stdin);
  printf("\t\t                    ***What you want to change Text or Background Color***  \n\n");
  printf("Enter 1 For Text Color Change \n");
  printf("Enter 2 For Background Color Change : ");
  scanf("%s",&b);

  system("cls");


      if(b == '1') {

    Mid1:
fflush(stdin);
printf("\t\t           ========================================================================== \n\n");
     printf("\t\t                               ***Welcome To Maths's Toolbox***  \n\n\n");
     printf(" Changing Text Color :- \n");
     printf(" :-> Enter 1 For Blue Color Text \n");
     printf(" :-> Enter 2 For Green Color Text \n");
     printf(" :-> Enter 3 For Red Color Text \n");
     printf(" :-> Enter 4 For Purple Color Text \n");
     printf(" :-> Enter 5 For Yellow Color Text \n");
     printf("     Enter Your Choice : ");
     scanf("%d",&Text);

     switch (Text) {

      case 1:
	 system("color b");
	 break;

      case 2:
	 system("color a");
	 break;

      case 3:
	 system("color c");
	 break;

      case 4:
	 system("color 5");
	 break;

      case 5:
	 system("color e");
	 break;

      default:
  system("cls");
  printf("Wrong Input! Choose Correct input...\n\n");
	goto Mid1;
	break;
      }

    fflush(stdin);
   printf("\n\n Text Color Changed Successfully...\n");
   printf(" Press Enter to Continue [or] x to go on main window : ");
   scanf("%c",&c); 

if (c == 'x' || c == 'X') {
system("COLOR 0F");
    system("cls");
    goto Mid;     }

}



  else if(b == '2') {

    Mid2:

fflush(stdin);
printf("\t\t           ========================================================================== \n\n");
     printf("\t\t                               ***Welcome To Maths's Toolbox***  \n\n\n");
     printf(" Changing Background Color :- \n");
     printf(" :-> Enter 1 For Blue Coloured Background   \n");
     printf(" :-> Enter 2 For Green Coloured Background  \n");
     printf(" :-> Enter 3 For Red Coloured Backgrpound   \n");
     printf(" :-> Enter 4 For Purple Coloured Background \n");
     printf(" :-> Enter 5 For Yellow Coloured Background \n");
     printf("     Enter Your Choice : ");
     scanf("%d",&Background);

     switch (Background) {

    case 1:
      system("color 98");
      break;

    case 2:
      system("color a0");
      break;

    case 3:
      system("color c0");
      break;

    case 4:
      system("color d0");
      break;

    case 5:
      system("color eb");
      break;

    default:
  system("cls");
  printf("Wrong Input! Choose Correct input...\n\n");
	goto Mid2;
	break;
      }

   fflush(stdin);
   printf("\n\n Background Color Changed Successfully...\n");
   printf(" Press Enter to Continue [or] x to go on main window : ");
   scanf("%c",&c); 

if (c == 'x' || c == 'X') {
system("COLOR 0F");
    system("cls");
    goto Mid;     }

}


  else {
       printf("Invalid Input...!!! \n\n");
	 goto Change; }


}


else if (a == 'N' || a == 'n') {

   fflush(stdin);
  printf(" OK...Text/Background Color's reamin unchanged \n\n");
  printf(" Press Enter to Continue : ");
   scanf("%c",&c); 

}

else {
       system("cls");
  printf("Invalid Input...!!! \n\n\n\n");
  goto Mid; }

  system("cls");

START:

fflush(stdin);
printf("\t\t\t                                ***Main Menu***  \n\n");
printf("\t\t           =======================================================================                    \n\n");
printf("\t\t                          ***Enter what Calculations you Want For*** \n\n");

printf("\t\t\t\t\t\t 1. For all Area Calculations \n");
printf("\t\t\t\t\t\t 2. For Temperature Calculations \n");
printf("\t\t\t\t\t\t 3. For Interest Related Calculations \n");
printf("\t\t\t\t\t\t 4. For Conversion Related Calculations \n");
printf("\t\t\t\t\t\t 5. For Arithmetic Calculations \n");
printf("\t\t\t\t\t\t 6. To go on Start Menu \n");
printf("\t\t\t\t\t\t 7. To Exit the Program \n\n");
printf("\t\t           =======================================================================                    \n\n");
printf("\t\t\t        Enter Your Choice : ");
   scanf("%s",&want);

   system("cls");


{
if(want == '1') {


   fflush(stdin);
   
  printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");

  printf("\t\t\t                          ---Welcome to Area Calculator--- \n\n");

   printf("\n\n  !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto START;     }

    system("cls");

		 area();      }          



else if(want == '2') {

    fflush(stdin);
   
    printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");
    printf("\t\t\t                      ---Welcome to Temperature Calculator--- \n\n");

   printf("\n\n  !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto START;     }

    system("cls");

		 temp();      }       



else if(want == '3') {

    fflush(stdin);
   
    printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");
    printf("\t\t\t                         ---Welcome to Interest Calculator--- \n\n");

   printf("\n\n  !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto START;     }

    system("cls");
    
		 interest();  }        



else if(want == '4') {

      fflush(stdin);
   
    printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");
    printf("\t\t\t                      ---Welcome to Conversion Calculator--- \n\n");

   printf("\n\n  !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto START;     }

    system("cls");
    
		 conversion(); }       



else if(want == '5') {

      fflush(stdin);
   
    printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");
    printf("\t\t\t                           ---Welcome to Basic Calculator--- \n\n");

   printf("\n\n  !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto START;     }

    system("cls");
    
	    calculator();      }

else if(want == '6') {

 system("COLOR 0F");
    system("cls");

   goto Mid;
}

else if(want == '7') {

 system("COLOR 0F");
    system("cls");

   goto START1;
}


else {
        system("cls");
	      printf(" You Entered Wrong Choice...!!! \n\n");
	      goto START; }
} 

fflush(stdin);
printf("\n\n\n Press Enter to Continue : ");
scanf("%c",&d);


system("cls");
START1:

fflush(stdin);
printf("\t\t\t                               ***Maths's Toolbox***  \n\n\n");
printf("\n\n                Are You Want To Restart Math's ToolBox?... \n");
printf("   Enter Y for Yes [0r] N for No : ");
scanf("%s",&restart);

{
   if(restart == 'Y' || restart == 'y') {
    system("COLOR 0F");
    system("cls");
    goto Mid;                             }

   else if(restart == 'N' || restart == 'n') {
    printf("\n\n \t\t\t                       Thanks For Testing Our ToolBox...! \n");
    printf(" \t\t\t                           Lord Ram Bless You More !!       \n\n\n");  }

   else {
    system("cls");
    printf("\n You Entered Wrong Choice...!! \n\n\n");
    goto START1; }

}

  return 0;
}
