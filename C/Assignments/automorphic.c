// automorphic 
#include<stdio.h>
void main()
{
	int no=5;
	int ori_no=no;
	int sq,ld;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	int i=1;
	int res=1;
	while(i<=count)
	{
		res=res*10;
	i++;
    }
	sq=ori_no*ori_no;
	ld=sq%res;
	if(ld==ori_no)
	    printf("automorphic");
	else
	    printf("not automorpic");
	
}
