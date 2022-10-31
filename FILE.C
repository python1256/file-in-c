#include<stdio.h>
void main()
{
FILE *fp;
int i,quantity,number;
float price,value;
char items[10],filename[10];
printf("enter file name");
scanf("%s",filename);

fp=fopen(filename,"w");
printf("\nenter data in inventary");
printf("\n itemname  number  price quantity");
for(i=1;i<=3;i++)
{
  fscanf(stdin,"%s%d%f%d",items,&number,&price,&quantity);
  fprintf(fp,"\n%s  \t %d \t %f   \t %d\n",items,number,price,quantity);
  }
  fclose(fp);
  fprintf(stdout,"\n\n");
  fp=fopen(filename,"r");
  printf("\nitemname  number  price  quantity  value\n");
  for(i=1;i<=3;i++)
  {
  fscanf(fp,"%s%d%f%d",items,&number,&price,&quantity);
  value=price*quantity;
  fprintf(stdout,"%s   \t%d    \t%f   \t%d   \t%f\n",items,number,price,quantity,value);
  }
  fclose(fp);
  }