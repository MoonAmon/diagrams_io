int main(int argc, char const *argv[])
{
	int dem=1;
	int num=1;

    printf("insira um numero:");
    scanf("%d", &num);

    for (size_t i = 1; i <= 10; i++)
	{
		int x = num * dem;
		printf("%d*%d=%d\n",num,dem,x);
		++dem;
	}
	
	/*{	
		int x = num * dem;
		printf("%d*%d=%d\n",num,dem,x);
		++dem;
	} while (dem<=10);*/
	
    

    return 0;
}
