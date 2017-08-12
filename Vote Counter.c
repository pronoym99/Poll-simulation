//vote counter
#include <stdio.h>
int main()
{
  int votes[6]={0},i,n,max=votes[0],pos;
  char ch;
  printf("Enter no. of voters:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("Voter%d\n",i);
    printf("Cast your vote(A/B/C/D/E/NOTA):");
    scanf(" %c",&ch);
    switch(ch)
    {
      case 'A':votes[0]++;
               break;
      case 'B':votes[1]++;
               break;
      case 'C':votes[2]++;
               break;
      case 'D':votes[3]++;
               break;
      case 'E':votes[4]++;
               break;
      default:votes[5]++;
    }
  }
  for(i=0;i<5;i++)
  {
    if(votes[i]>max)
    {
      max=votes[i];pos=i;
    }
  }
  if(pos==0)
  {
    printf("Winner-Candidate A\n");
  }
  else if(pos==1)
  {
    printf("Winner-Candidate B\n");
  }
  else if(pos==2)
  {
    printf("Winner-Candidate C\n");
  }
  else if(pos==3)
  {
    printf("Winner-Candidate D\n");
  }
  else if(pos==4)
  {
    printf("Winner-Candidate E\n");
  }
  printf("No. of spare votes-%d",votes[5]);
  return 0;
}


