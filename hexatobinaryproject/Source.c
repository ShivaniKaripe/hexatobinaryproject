#include<stdio.h>
#include<math.h>
int btod(int);
void dtoh(int);
void htob(int);
int main()
{
	int ch, n, num;
	printf_s("choose the options \n 1.convert binary to hexa decimal \n 2. convert hexadecimal to binary \n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:
		printf_s("enter the binary number which contains only 0's and 1's");
		scanf_s("%d", &n);
		num = btod(n);

		dtoh(num);
		break;

	case 2:

		printf_s("enter the hexa decimal number to convert it into binary");
		scanf_s("%x", &num);
		htob(num);


		break;
	default:
		printf_s("enter the valid option");
	}
	scanf_s("%d", &num);


}
int btod(int x)
{
	int rev = x, n = 0, sum = 0, rem = x;
	while (rev != 0)
	{
		rem = rev % 10;
		sum = sum + rem*(int)pow(2, n);
		n++;
		rev = rev / 10;
	}
	return sum;
}
void dtoh(int x)
{
	int rev, rem;
	rev = x;
	rem = x;
	if (x <= 0)
	{
		printf_s("0");
	}
	else
	{
		dtoh(x / 16);
		rem = rev % 16;
		if (x <= 9)
		{
			printf_s("%d", rem);

		}
		else
		{
			printf_s("%c", rem - 10 + 'A');
		}

	}
}
void htob(int x)
{

	int mask;
	int flag = 0x000f;
	int m = 0x0000;
	if (x <= 0)
		printf_s("");
	else
	{
		htob(x >> 4);

		mask = (x & flag);
		switch (mask)
		{
		case 0:
			printf_s("0000");
			break;
		case 1:
			printf_s("0001");
			break;
		case 2:
			printf_s("0010");
			break;
		case 3:
			printf_s("0011");
			break;
		case 4:
			printf_s("0100");
			break;
		case 5:
			printf_s("0101");
			break;
		case 6:
			printf_s("0110");
			break;
		case 7:
			printf_s("0111");
			break;
		case 8:
			printf_s("1000");
			break;
		case 9:
			printf_s("1001");
			break;
		case 10:
			printf_s("1010");
			break;
		case 11:
			printf_s("1011");
			break;
		case 12:
			printf_s("1100");
			break;
		case 13:
			printf_s("1101");
			break;
		case 14:
			printf_s("1110");
			break;
		case 15:
			printf_s("1111");
			break;


		default:
			break;
		}

	}
}

