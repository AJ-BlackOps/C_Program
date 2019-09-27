/* Writing a program to guarantee insurance to a person while satisfying the following conditions:
1. If a person is married (whether male or female), that person is guaranteed with the insurance
2. If a person is unmarried, then first we have to check whether the person is male or female. If a person is male, them he should be more than 30 years old for the insurance to be guaranteed. Same is the case for female but for 25 years. */

#include<stdio.h>
int main() 
{
	int age;
	char mary, gender;
	
	//Here we have to input the marital status of a particular person.
	
	printf("Your Marital Status M/U ? ");
	scanf("%c", &mary);
	
	//Now, here is the part if user inputs 'M' or  'm' means that "The is person is married".
	//Here, user is independent to input wether he can use capital or small case of alphabet.
	
	if(mary=='m'||mary=='M')
	{
		printf("You are eligible to apply for insurance.");
	}

	//User is applicable for insurance because he/she is married.
	//Now, here is the part if user inputs 'U' or  'u' means that "The is person is unmarried".

	else if(mary=='u' || mary=='U')
	{
		printf("Enter you gender M/F ? ");
		scanf(" %c", &gender);
		if(gender=='m'||gender=='M')
		
	//Now, if the person is Male
	//Then, he will further asked for the age
	
		{
			printf("Enter your age ? ");
			scanf("%d", &age);
			if(age>=30)
			{
				printf("You are eligible to apply for insurance.");
			}
			else
			{
				printf("You are not eligible for this insurance.");
			}
		}
		
	//Now, there comes the 'female' and then age
	
		else if(gender=='f'||gender=='F')
		{
			printf("Enter your age ? ");
			scanf("%d", &age);
			if(age>=25)
			{
				printf("You are eligible to apply for insurance.");
			}
			else
			{
				printf("You are not eligible for this insurance.");
			}
		}
		
	//If user inputs the value other than required, then our program states the following
		else
		{
			printf("Wrong Input!");
		}
	}
	else 
	{
		printf("Wrong Input!");
	}
	
	
	return 0;
}
