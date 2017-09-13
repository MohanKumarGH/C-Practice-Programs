#include<stdio.h>
int main(int argc, char *a[])
{
    int len,plen,i,j;
    char str[200],pstr[200];
    
    printf("Enter a line (char < 200)\n");
    scanf("%[^\n]s",str);
    printf("Entered line:%s\n",str); 
    for (len=0;str[len];len++);// to find the length of the entered line
    printf("Enter a line to insert in front of the line(char < 200)\n");
    scanf(" %[^\n]s",pstr); // Space should be there between " and %
    printf("Entered 2nd line:%s\n",pstr);
    for(plen=0;pstr[plen];plen++);// to find the length of second line printf("plen=%d\n",plen);
    
    for(i=0;i<plen;i++)
    {
        for(j=len;j>(i-1);j--)
        {
            str[j+1]=str[j];
        }
        len++;
        str[i]=pstr[i];
        if(i==(plen-1))
        {
            for(j=len;j>(i-1);j--)
                str[j+1]=str[j];
            str[i+1]='\n';
        }
    }
    printf("the required output is:\n");
    printf("%s\n",str);
    //Write code here
   
}

i/p:
Hi Mohan Kumar N
Hello Techgig


o/p:
Hello Techgig
Hi Mohan Kumar N