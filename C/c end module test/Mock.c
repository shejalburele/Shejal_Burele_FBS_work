Name: Shejal Vijay Burele
FRN Number:FRN-16J0726/039
Set:B
Batch:July Hybrid Java

1. Write a program to count number of words in a string.
#include<stdio.h>
void main()
{
	char str[100];
	printf("Enter the String:");
	scanf("%s",str);
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("The count of words in a string is %d",count);
	
}


2. Write a program to print following series:
1 + 11+ 111+ 1111+ ….. + n times 1

#include<stdio.h>
void main()
{
	int range;
	printf("Enter the range:");
	scanf("%d",&range);
	int temp=0;
	for(int i=1;i<=range;i++)
	{
		temp=temp*10+1;
		printf("%d",temp);
		
		if(i<range)
			printf(" + ");
	}
}


3. Develop a program to manage a music library. Define a structure to
store song details (song ID, title, artist, and duration). Create a menudriven program to add new songs and display the song library. Use
functions to handle these operations.

struct Music
{
	int songId;
	char title;
	char artist;
	float duration;
};

//add new songs
void addSongs(struct Music music[], int *count)
{
	printf("Enter the songs you want to add:");
	scanf("%d", &music[*count].songId);
	
	printf("Enter the title:");
	scanf(" %[^\n]", music[*count].title);
	
	printf("Enter the artist:");
	scanf(" %[^]n]", music[*count0].artist);
	
	printf("Enter the duration:");
	scanf("%f", &music[*count].duration);
	
	(*count)++;
	
	printf("-------song add successfully-------");
}

// display the songs
void displaySong(struct Music music[], int count)
{
	int id;
	printf()
}


int main()
{
	int id;
	int choice;
	printf("Enter the song id you want to search:");
	
	switch
	case1(choose==1)
	printf("artist name":);
	scanf("%d")
	
}


 