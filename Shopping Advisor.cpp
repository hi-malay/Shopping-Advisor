#include<stdio.h>
#include<string.h>                                               // Nitish kumar  //
int main()                                                        //  K17TFB54  //
{
	int age,expenditure,gender,ocassion,lifestyle;
	float height;
	char ps[10],colour[20];
	printf("\n             *******************SHOPPING ADVISOR****************\n");
	printf("\n Enter your age : ");
	scanf("%d",&age);
	printf("\n Enter your height in inches : ");
	scanf("%f",&height);
	printf("\n Enter your gender - 1 for Male , 2 for Female : ");
	scanf("%d",&gender);
	if(gender!=1||gender!=2)
	{
		goto a;
	}
	printf("\n Enter your lifestyle from give options -");
	printf("\n '1 for Trending' , '2 for Old fashioned' : ");
	scanf("%d",&lifestyle);
	printf("\n Enter ocassion for buying -");
	printf("\n '1 for Sports' , '2 for Daily wear' , '3 for Party wear' : ");
	scanf("%d",&ocassion);
	printf("\n Enter your physical state -");
	printf("\n 'Thin' , ' Fit' , 'Fat' : ");
	scanf("%s",&ps);
	if(ps!="Thin"||ps!="Fit"||ps!="Fat")
	{
		goto b;
	}
	printf("\n Enter your favourite colour : ");
	scanf("%s",&colour);
	printf("\n Enter your expenditur strength in rupees : ");
	scanf("%d",&expenditure);
	printf("\n----------YOU CAN GO FOR -----------\n");
	if(gender==1)// male
	{
		if(age<=15)	
		{  
		
			if(expenditure<=1500)
			{
				if(lifestyle==1)//trending
				{	
					if(ocassion==1)// sports
					{
						if(strcmpi(ps,"thin")==0)                    
						{
						printf("\n Slim fit, cheks, %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck ,%s t-shirt with plain capri",colour);
						printf("\n Stripped, %s t-shirt with shorts",colour);
						printf("\n Slim fit, printed, %s, sleevless t-shirt with printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit ,cheks, %s t-shirt with pencil fit trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with  plain capri",colour);
						printf("\n Checks, %s t-shirt with shorts",colour);
						printf("\n Slightly loose, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with cheks loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Checks, %s t-shirt with printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}	
					}	
					else if(ocassion==2)  // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit ,cotton, cheks, %s shirt with jeans ",colour);	
						printf("\n Cotton ,printed, %s t-shirt with capri",colour);
						printf("\n Cotton, printed, %s shirt with cotton jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, cheks, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, printed %s shirt with capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with capri",colour);	
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton ,plain, %s shirt with cotton jeans ",colour);	
						printf("\n Cotton ,plain, %s shirt with printed capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with trouser",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
					}
					else if(ocassion==3)                // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks ,%s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom, pencil fit jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain, %s shirt with denium jeans ",colour);	
						printf("\n Checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt and coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");						}
					}
				}
					
				else if(lifestyle==2)  // old fashioned
				{
					if(ocassion==1)  // sports
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, Plain, %s t-shirt with plain ,slim fit trouser",colour);   
						printf("\n Plain, round neck, %s t-shirt with plain  capri",colour);
						printf("\n Large checks, %s t-shirt with  trouser",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Skinny fit, Plain, %s t-shirt with plain  trouser",colour);
						printf("\n Plain, round neck, %s t-shirt with plain capri",colour);
						printf("\n Plain, %s, sleevless t-shirt with short pant",colour);	
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain %s t-shirt with plain ,loose trouser",colour);
						printf("\n Slightly losse, plain ,round neck, %s t-shirt with plain capri",colour);
						printf("\n Loose, plain, %s sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}	
					}	
					else if(ocassion==2)  // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser",colour);	
						printf("\n Cotton plain, %s shirt with jeans",colour);
						printf("\n Cheks,, %s shirt with jeans",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser ",colour);	
						printf("\n Cotton ,plain, %s shirt with jeans",colour);
						printf("\n Printed ,%s, round neck t-shirt with trouser",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Sightly loose ,cotton, plain, %s t-shirt with trouser ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Loose, Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
					}
					else if(ocassion==3) // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain ,%s shirt t-with bel bottom jeans ",colour);	
						printf("\n  Large, checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
					}
				}
				
			}
			else if(expenditure>1500)
			{
			if(lifestyle==1) // trending
			{
				if(ocassion==1)      // sports
				{
					if(strcmpi(ps,"thin")==0)                    
					{
						printf("\n Slim fit, cheks, %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Stripped, %s t-shirt with shorts",colour);
						printf("\n Slim fit, printed, %s, sleevless t-shirt with printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit ,cheks %s t-shirt with pencil fit trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with  plain capri",colour);
						printf("\n Checks, %s t-shirt with shorts",colour);
						printf("\n Slightly loose, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with cheks, loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Checks, %s t-shirt with printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}	
					}	
				else if(ocassion==2)                 // daily use
				{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cotton, cheks, %s shirt with skinny jeans ",colour);	
						printf("\n Cotton, printed, %s t-shirt with capri",colour);
						printf("\n Cotton, printed, %s shirt with denium jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit ,cotton ,cheks, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, printed, %s shirt with capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with shorts",colour);	
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s shirt with cotton jeans ",colour);	
						printf("\n Cotton, plain, %s shirt with printed capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
					}
				else if(ocassion==3)                // party wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom, pencil fit jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed ,%s t-shirt with bel bottom jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain, %s shirt with denium jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt and coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");	
						}
					}
				}
				else if(lifestyle==2) // old fashioned
				{
					if(ocassion==1) // sports
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, Plain, %s t-shirt with plain ,slim fit trouser",colour);   
						printf("\n Plain round neck, %s t-shirt with plain  chafri",colour);
						printf("\n Large checks,, %s t-shirt with  trouser",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Skinny fit, Plain, %s t-shirt with plain  trouser",colour);
						printf("\n Plain, round neck ,%s t-shirt with plain capri",colour);
						printf("\n Plain,, %s sleevless t-shirt with short pant",colour);	
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with plain, loose trouser",colour);
						printf("\n plain, round neck, %s t-shirt with plain capri",colour);
						printf("\n Loose, plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}	
					}	
					else if(ocassion==2) // daily wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Cheks, %s shirt with shorts",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
					    else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Printed, %s, round neck t-shirt with capri",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s t-shirt with trouser ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Loose, Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
					}
					else if(ocassion==3)  // party wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit ,plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks ,%s shirt with denium jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n  Slightly Loose, Plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n  Large checks, %s shirt with denium jeans",colour);
						printf("\n %s shirt and coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
					}
				}
				
			}
	}  
		else if(age>15)	
		{  
		
			if(expenditure<=1500)
			{
				if(lifestyle==1)//trending
				{	
					if(ocassion==1)// sports
					{
						if(strcmpi(ps,"thin")==0)                    
						{
						printf("\n Slim fit, cheks,, %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed ,round neck ,%s t-shirt with plain capri",colour);
						printf("\n Stripped ,%s t-shirt with shorts",colour);
						printf("\n Slim fit, printed, %s ,sleevless t-shirt with printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s t-shirt with pencil fit trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with  plain capri",colour);
						printf("\n Check,s %s t-shirt with shorts",colour);
						printf("\n Slightly loose, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with cheks, loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Checks, %s t-shirt with printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}	
					}	
					else if(ocassion==2)  // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cotton, cheks, %s shirt with jeans ",colour);	
						printf("\n Cotton, printed, %s t-shirt with capri",colour);
						printf("\n Cotton, printed, %s shirt with cotton jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, cheks, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, printed, %s shirt with capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with shorts",colour);	
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s shirt with cotton jeans ",colour);	
						printf("\n Cotton, plain, %s shirt with printed capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
					}
					else if(ocassion==3)                // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom,pencil fit jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit ,cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain, %s shirt with pencil fit jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt and coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");						}
					}
				}
					
				else if(lifestyle==2)  // old fashioned
				{
					if(ocassion==1)  // sports
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, Plain, %s t-shirt with plain ,slim fit trouser",colour);   
						printf("\n Plain ,round, neck, %s t-shirt with plain  capri",colour);
						printf("\n Large, checks, %s t-shirt with  trouser",colour);
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Skinny fit Plain %s t-shirt with plain  trouser",colour);
						printf("\n Plain, round, neck, %s t-shirt with plain capri",colour);
						printf("\n Plain, %s, sleevless t-shirt with short pant",colour);	
						printf("\n Brands according to your expenditure -: 'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain, %s t-shirt with plain, loose trouser",colour);
						printf("\n Slightly loose, plain,, round, neck, %s t-shirt with plain capri",colour);
						printf("\n Loose ,plain,sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");	
						}	
					}	
					else if(ocassion==2)  // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Cheks %s shirt with capri",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, plain ,%s t-shirt with trouser ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Printed, %s, round neck t-shirt with trouser",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s t-shirt with trouser ",colour);	
						printf("\n Cotton plain, %s shirt with jeans",colour);
						printf("\n Loose, Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");
						}
					}
					else if(ocassion==3) // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, plain ,%s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks ,%s shirt with ankel length jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s shirt t-with bel bottom jeans ",colour);	
						printf("\n Large checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt and coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Duke','Killer','Brothers'");
						}
					}
				}
				
			}
			else if(expenditure>1500)
			{
			if(lifestyle==1) // trending
			{
				if(ocassion==1)      // sports
				{
					if(strcmpi(ps,"thin")==0)                    
					{
						printf("\n Slim fit, cheks, %s t-shirt with plain slim fit trouser",colour);   
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Stripped, %s t-shirt with shorts",colour);
						printf("\n Slim fit, printed, %s, sleevless t-shirt with printed capri",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s t-shirt with pencil fit trouser",colour);
						printf("\n Printed round neck %s t-shirt with  plain capri",colour);
						printf("\n Checks, %s t-shirt with shorts",colour);
						printf("\n Slightly loose, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with cheks, loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with plain capri",colour);
						printf("\n Checks, %s t-shirt with printed shorts",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}	
					}	
				else if(ocassion==2)                 // daily use
				{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cotton, cheks, %s shirt with jeans ",colour);	
						printf("\n Cotton, printed, %s t-shirt with capri",colour);
						printf("\n Cotton, printed, %s shirt with pencil fit jeans ",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, cheks, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, printed, %s shirt with capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with trouser",colour);	
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s shirt with cotton jeans ",colour);	
						printf("\n Cotton, plain %s, shirt with printed capri",colour);
						printf("\n Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
					}
				else if(ocassion==3)                // party wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed, %s t-shirt with bel bottom,pencil fit jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with ankel length jeans ",colour);	
						printf("\n Printed ,%s t-shirt with bel bottom jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slim fit, plain, %s shirt with low waist jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt nd coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");	
						}
					}
				}
				else if(lifestyle==2) // old fashioned
				{
					if(ocassion==1) // sports
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, plain, %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Plain, round neck, %s t-shirt with plain  capri",colour);
						printf("\n Large cheks, %s t-shirt with  trouser",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Skinny fit, plain, %s t-shirt with plain  trouser",colour);
						printf("\n Plain, round neck, %s t-shirt with plain capri",colour);
						printf("\n Plain, %s, sleevless t-shirt with short pant",colour);	
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with plain, loose trouser",colour);
						printf("\n plain, round neck, %s t-shirt with plain capri",colour);
						printf("\n Loose, plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}	
					}	
					else if(ocassion==2) // daily wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cotton, plain, %s t-shirt with trouser",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Cheks, %s shirt with jeans",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
					    else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cotton, plain, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Printed, %s, round neck t-shirt with trouser",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, cotton, plain, %s t-shirt with jeans ",colour);	
						printf("\n Cotton, plain, %s shirt with jeans",colour);
						printf("\n Loose, Cheks, %s, round neck t-shirt with capri",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
					}
					else if(ocassion==3)  // party wears
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands  according to your expenditure -:  'Diesel','Levis','Zara'");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slightly loose, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n Checks, %s shirt with deniun jeans",colour);
						printf("\n %s shirt with coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n  Slightly Loose, plain, %s t-shirt with bel bottom jeans ",colour);	
						printf("\n  Large checks, %s shirt with deniun jeans",colour);
						printf("\n  %s shirt and coat and formal pant ",colour);
						printf("\n Brands according to your expenditure -: 'Diesel','Levis','Zara'");
						}
					}
				}
				
			}
	}  
	}
		if(gender==2) // feamle
	{
		if(age<=15)	
		{ 
		
			if(expenditure<=1500)
			{
				if(lifestyle==1) // trending
				{	
					if(ocassion==1)  // sports
					{
						if(strcmpi(ps,"thin")==0)                    
						{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s,  short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with capri",colour);
						printf("\n Printed, %s ,sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain trouser",colour);
						printf("\n Printed, round neck, %s, short t-shirt with printed capri",colour);
						printf("\n Slightly loose, %s, short t-shirt with cheks trouser",colour);
						printf("\n Plain ,%s, sleevless t-shirt with printed shorts",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s , short t-shirt with cheks trouser",colour);
						printf("\n Plain ,%s ,sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}	
					}	
					else if(ocassion==2)  // daily use
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Printed, long ,%s t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Slightly loose,%s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks, %s shirt with capri",colour);
						printf("\n Slightly loose, %s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
					}
					else if(ocassion==3)                // party wear
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed ,long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed ,short, %s t-shirt with short skirt",colour);
							printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed  %s t-shirt with long skirt",colour);	
						printf("\n Printed, long ,%s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
				}
					
				else if(lifestyle==2) // old fashioned
				{
					if(ocassion==1)  // sports
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s , short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with capri",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain  trouser",colour);
						printf("\n Printed, round neck, %s short t-shirt with printed  chafri",colour);
						printf("\n Slightly loose, %s, short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s ,sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed ,round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s , short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}	
					}	
					else if(ocassion==2) // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton,, plain %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Slightly loose, %s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks, %s shirt with capri",colour);
						printf("\n Slightly loose, %s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
					else if(ocassion==3) // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed ,long %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n Slightly loose, printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed , %s t-shirt with long skirt",colour);	
						printf("\n Printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
				}
				
			}
			else if(expenditure>1500)
			{
			if(lifestyle==1) // trending
			{
				if(ocassion==1) // sports
				{
					if(strcmpi(ps,"thin")==0)                    
					{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s , short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with caprir",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain  trouser",colour);
						printf("\n Printed, round neck, %s, short t-shirt with printed  capri",colour);
						printf("\n Slightly loose, %s, short t-shirt with cheks trouser",colour);
						printf("\n Plain %s sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s,  short t-shirt with cheks trouser",colour);
						printf("\n Plain %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}	
					}	
				else if(ocassion==2)                 // daily use
				{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n %s Printed, long, t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks %s shirt with capri",colour);
						printf("\n Slightly loose, %s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks %s shirt with capri",colour);
						printf("\n Slightly loose,%s printed, long, t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
					}
				else if(ocassion==3)                // party wear
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed, long %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n S,lightly loose printed,  %s t-shirt with long skirt",colour);	
						printf("\n Printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					}
				}
				else if(lifestyle==2)  // old fashioned
				{
					if(ocassion==1)   // sports
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s,  short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with capri",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain  trouser",colour);
						printf("\n Printed, round neck, %s, short t-shirt with printed  capri",colour);
						printf("\n Slightly loose ,%s, short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed ,round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s,  short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}	
					}	
					else if(ocassion==2)
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks %s shirt with capri",colour);
						printf("\n Printed, long,%s t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					    else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain ,%s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with chafri",colour);
						printf("\n Slightly loose,%s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks %s shirt with capri",colour);
						printf("\n Slightly loose,%s printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
					}
					else if(ocassion==3)
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed, long %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed, long %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n slightly loose, printed,  %s t-shirt with long skirt",colour);	
						printf("\n printed, long %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					}
				}
				
			}
	} 
		else if(age>15)	
		{ 
		
			if(expenditure<=1500)
			{
				if(lifestyle==1) // trending
				{	
					if(ocassion==1)  // sports
					{
						if(strcmpi(ps,"thin")==0)                    
						{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s,  short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with caprir",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain  trouser",colour);
						printf("\n Printed ,round neck, %s, short t-shirt with printed  capri",colour);
						printf("\n Slightly loose, %s short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed ,round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s,  short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}	
					}	
					else if(ocassion==2)  // daily use
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n slim fit ,short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks %s shirt with capri",colour);
						printf("\n Printed, long,%s t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Slightly loose ,%s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose ,printed %s t-shirt with shorts ",colour);	
						printf("\n Cheks, %s shirt with capri",colour);
						printf("\n Slightly loose,%s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
					}
					else if(ocassion==3)                // party wear
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed ,long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, chek,s %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed ,long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expendiyure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n slightly loose, printed , %s t-shirt with long skirt",colour);	
						printf("\n printed ,long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
				}
					
				else if(lifestyle==2) // old fashioned
				{
					if(ocassion==1)  // sports
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s , short t-shirt with shorts",colour);
						printf("\n  %s t-shirt with capri",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed, %s t-shirt with plain  trouser",colour);
						printf("\n Printed, round neck, %s, short t-shirt with printed  capri",colour);
						printf("\n Slightly loose, %s, short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain ,loose trouser",colour);
						printf("\n Printed, round neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s , short t-shirt with cheks trouser",colour);
						printf("\n Plain %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}	
					}	
					else if(ocassion==2) // daily wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks %s shirt with capri",colour);
						printf("\n Printed, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Slightly loose, %s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n %s Cheks shirt with capri",colour);
						printf("\n Slightly loose, %s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
					else if(ocassion==3) // party wears
					{
					if(strcmpi(ps,"thin")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n slightly loose, printed,  %s t-shirt with long skirt",colour);	
						printf("\n printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Rocker girl' , 'Liza' , 'Farah' ");
						}
					}
				}
				
			}
			else if(expenditure>1500)
			{
			if(lifestyle==1) // trending
			{
				if(ocassion==1) // sports
				{
					if(strcmpi(ps,"thin")==0)                    
					{
						printf("\n Slim fit, Printed,  %s t-shirt with plain, slim fit trouser",colour);   
						printf("\n Printed, round neck, %s , short t-shirt with shorts",colour);
						printf("\n Plain, %s t-shirt with capri",colour);
						printf("\n Printed, %s, sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed ,%s t-shirt with plain  trouser",colour);
						printf("\n Printed ,round neck ,%s, short t-shirt with printed  capri",colour);
						printf("\n Slightly loose, %s ,short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed, round, neck, %s t-shirt with printed  capri",colour);
						printf("\n Checks, %s , short t-shirt with cheks trouser",colour);
						printf("\n Plain, %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}	
					}	
				else if(ocassion==2)                 // daily use
				{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks %s shirt with capri",colour);
						printf("\n %s Print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n Slightly loose, %s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks, %s shirt with capri",colour);
						printf("\n Slightly loose ,%s print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
					}
				else if(ocassion==3)                // party wear
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n printed ,long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed, short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed ,short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n slightly loose, printed , %s t-shirt with long skirt",colour);	
						printf("\n printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					}
				}
				else if(lifestyle==2)  // old fashioned
				{
					if(ocassion==1)   // sports
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, Printed , %s t-shirt with plain ,slim fit trouser",colour);   
						printf("\n Printed ,round neck, %s  short t-shirt with shorts",colour);
						printf("\n  %s cheks t-shirt with caprir",colour);
						printf("\n Printed, %s sleevless t-shirt with  printed capri",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, printed ,%s t-shirt with plain  trouser",colour);
						printf("\n Printed, round neck, %s short t-shirt with printed  capri",colour);
						printf("\n Slightly loose, %s short t-shirt with cheks trouser",colour);
						printf("\n Plain ,%s sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");		
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, %s t-shirt with plain, loose trouser",colour);
						printf("\n Printed, round neck ,%s t-shirt with printed  capri",colour);
						printf("\n Checks, %s , short t-shirt with cheks trouser",colour);
						printf("\n Plain %s, sleevless t-shirt with  printed shorts",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}	
					}	
					else if(ocassion==2)
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n slim fit, short, cotton, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cotton, cheks, %s shirt with capri",colour);
						printf("\n %s printed ,long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					    else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, short, cotton, plain, %s t-shirt with shorts ",colour);	
						printf("\n Cotton ,cheks, %s shirt with capri",colour);
						printf("\n Slightly loose ,%s printed ,long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n Slightly loose, printed, %s t-shirt with shorts ",colour);	
						printf("\n Cheks, %s shirt with capri",colour);
						printf("\n Slightly loose,%s  print, long t-shirt with skinny jeans",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					}
					else if(ocassion==3)
					{
					if(strcmpi(ps,"thin")==0)
					{
						printf("\n Slim fit, cheks ,%s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n %s print, long  t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
						else if(strcmpi(ps,"fit")==0)
						{
						printf("\n Slim fit, cheks ,%s  shirt with pencil fit,ankel length jeans ",colour);	
						printf("\n  Slightly loose, printed long ,%s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, printed short, %s t-shirt with short skirt",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");	
						}
						else if(strcmpi(ps,"fat")==0)
						{
						printf("\n slightly loose, printed , %s t-shirt with long skirt",colour);	
						printf("\n printed, long, %s t-shirt with skinny jeans",colour);
						printf("\n Slim fit, cheks, %s  shirt with pencil fit,ankel length jeans ",colour);
						printf("\n Brands according to your expenditure -: 'Zara' , 'VS girl' , 'Stevis' ");
						}
					}
				}
				
			}
	} 
	}
	printf("\n\n ---------------  THANK YOU  ------------");
	a: b:
	printf("\n*******************  VISIT AGAIN  ******************");
	return(0);
}
	

