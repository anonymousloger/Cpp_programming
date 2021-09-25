/*
Pallindrome, Check Prime, List Prime, Factorial,check perfect, List perfect,check Armstrong, List Armstrong
calculator,Check leap year, List Leap year,Permutation, Combination.
Linear Search, Binary Search, Bubble Sort, Quick Sort, Select Sort
*/
#include<iostream>
#include<conio.h>
#include<math.h>
#define CNT 25
using namespace std;
class math
{
	private:
		int no,f,sum,rev,i,up,lwr;
		float a,b;
	protected:
		class calcop
		{
			public:
				float add(float x,float y)
				{
					return x+y;
				}
				float sub(float x,float y)
				{
					return x-y;
				}
				float mul(float x,float y)
				{
					return x*y;
				}
				float div(float x,float y)
				{
					return x/y;
				}
				int mod(float x,float y)
				{
					return int(x)%int(y);
				}
		};
		int fact(int x)
		{
			f=1;
			for(i=1; i<=x; ++i)
				f*=i;
			return f;
		}
		int factor(int x,int y)
		{
			if((x%y)==0)
				return 1;
			else
				return 0;
		}
		int prime(int x)
		{
			if(x==1 || x==0)
				return 0;
			else
				{
					for(i=2; i<x; ++i)
						if(factor(x,i))
							return 0;
					return 1;
				}
		}
		int perfect(int x)
		{
			sum=0;
			for(i=1; i<x; ++i)
				if(factor(x,i))
					sum+=i;
			if(sum==x)
				return 1;
			return 0;
		}
		int digitcount(int x)
		{
			f=0;
			while(x!=0)
				{
					f++;
					x/=10;
				}
			return f;
		}
		int armstrong(int x)
		{
			f=digitcount(x);
			no=x;
			sum=0;
			while(x!=0)
				{
					sum+=(pow(x%10,f));
					x/=10;
				}
			if(sum==no)
				return 1;
			return 0;
		}
		int leapyear(int x)
		{
			if((x%4==0 && x%100!=0) || (x%400==0))
				return 1;
			return 0;
		}

	public:
		void factorial()
		{
			cout<<"\nEnter the Number:";
			cin>>no;
			cout<<"Factorial of "<<no<<"="<<fact(no);
			cout<<"\n";
			getch();
		}
		void pallindrome()
		{
			cout<<"\nEnter the Number:";
			cin>>no;
			f=no;
			rev=0;
			while(f!=0)
				{
					rev=(rev*10)+(f%10);
					f/=10;
				}
			if(no==rev)
				cout<<no<<" is Pallindrome";
			else
				cout<<no<<" is not Pallindrome";
			cout<<"\n";
			getch();
		}
		void checkPerfect()
		{
			/*Check whether zero is perfect or not and correct
			the programe accordingly*/
			cout<<"\nEnter the Number:";
			cin>>no;
			if(perfect(no))
				cout<<no<<" is a Perfect Number";
			else
				cout<<no<<" is not a Perfect Number";
			cout<<"\n";
			getch();

		}
		void listPerfect()
		{
			cout<<"\nLower and Upper Limit:";
			cin>>lwr>>up;
			cout<<"Perfect Numbers between "<<lwr<<" & "<<up<<":\n";
			for(f=lwr; f<=up; ++f)
				if(perfect(f))
					cout<<f<<" ";
			cout<<"\n";
			getch();
		}
		void checkPrime()
		{
			cout<<"\nEnter the Number:";
			cin>>no;
			if(prime(no))
				cout<<no<<" is Prime";
			else
				cout<<no<<" is not Prime";
			cout<<"\n";
			getch();
		}
		void listPrime()
		{
			cout<<"\nLower and Upper Limit:";
			cin>>lwr>>up;
			cout<<"Prime Numbers between "<<lwr<<" & "<<up<<":\n";
			for(f=lwr; f<=up; ++f)
				if(prime(f))
					cout<<f<<"  ";
			cout<<"\n";
			getch();
		}
		void checkArmstrong()
		{
			cout<<"\nEnter the Number:";
			cin>>no;
			if(armstrong(no))
				cout<<no<<" is a Armstrong Number";
			else
				cout<<no<<" is not a Armstrong Number";
			cout<<"\n";
			getch();
		}
		void listArmstrong()
		{
			cout<<"\nLower and Upper Limit:";
			cin>>lwr>>up;
			cout<<"Armstrong Numbers between "<<lwr<<" & "<<up<<":\n";
			for(i=lwr; i<=up; ++i)
				if(armstrong(i))
					cout<<i<<"  ";
			cout<<"\n";
			getch();
		}
		void calculator()
		{
			do
			{
				class calcop co;
				cout<<"\nEnter Numbers:";
				cin>>a>>b;
				cout<<"1-Addition\n2-Substraction\n3-Multplication\n4-Division\n5-Modulus\nYour option:";
				cin>>up;
				switch(up)
				{
					case 1 :
						cout<<a<<"+"<<b<<"="<<co.add(a,b)<<"\n";
						break;
					case 2 :
						cout<<a<<"-"<<b<<"="<<co.sub(a,b)<<"\n";
						break;
					case 3 :
						cout<<a<<"*"<<b<<"="<<co.mul(a,b)<<"\n";
						break;
					case 4 :
						if(b==0)
							cout<<"Cannot divide by zer..!\n";
						else
							cout<<a<<"/"<<b<<"="<<co.div(a,b)<<"\n";
						break;
					case 5 :
						cout<<a<<"%"<<b<<"="<<co.mod(a,b)<<"\n";
					case 6 :
						break;
					default:
						cout<<"Wrong Option choosed..!!\n";
				}
				cout<<"Continue(1/0):";
				cin>>f;
			}while(f!=0);
			cout<<"\n";
		}
		void checkLeapyear()
		{
			cout<<"\nEnter the year:";
			cin>>f;
			if(leapyear(f))
				cout<<f<<" is a Leap Year";
			else
				cout<<f<<" in not a Leap year";
			cout<<"\n";
			getch();
		}
		void listLeapyear()
		{
			cout<<"\nLower and Upper Limit:";
			cin>>lwr>>up;
			cout<<"Leap years between "<<lwr<<" & "<<up<<":\n";
			for(i=lwr; i<=up; ++i)
				if(leapyear(i))
					cout<<i<<"  ";
			cout<<"\n";
			getch();
		}
		void permutation()
		{
			cout<<"\nValues of n and r:";
			cin>>lwr>>up;
			cout<<lwr<<"P"<<up<<"="<<fact(lwr)/fact(lwr-up);
			cout<<"\n";
			getch();
		}
		void combination()
		{
			cout<<"\nValues of n and r:";
			cin>>lwr>>up;
			cout<<lwr<<"C"<<up<<"="<<fact(lwr)/(fact(lwr-up)*fact(up));
			cout<<"\n";
			getch();
		}
};
class sortandsearch
{
	private:
		int arr[20],count,key,flag,i,j,start,middle,end,*ptr;
	protected:
		void swap(int *x,int *y)
		{
			flag=*x;
			*x=*y;
			*y=flag;
		}
		int* bubbleSort(int* p,int n)
		{
			for(i=0; i<n-1; ++i)
				for(j=0; j<n-1-i; ++j)
					if(*(p+j)>*(p+j+1))
						swap((p+j),(p+j+1));
			return p;
		}
		int* quickSort(int a[],int first,int last)
		{
			int pivot,i,j;
			if(first<last)
			{
				pivot=first;
				i=first;
				j=last;
				while(i<j)
				{
					while(a[i]<=a[pivot] && j<last)
						j++;
					while(a[j]>a[pivot])
						j--;
					if(i<j)
						swap(&a[i],&a[j]);
				}
				swap(&a[pivot],&a[j]);
				quickSort(a,first,j-1);
				quickSort(a,j+1,last);
			}
			return a;
		}
		int* selectionSort(int* p,int n)
		{
			for(i=0; i<n; ++i)
			{
				start=i;
				for(j=i+1; j<n; ++j)
					if(*(p+j)<*(p+start))
						start=j;
				swap((p+start),(p+i));
			}
			return p;
		}
		int linearSearch(int* p,int n,int key)
		{
			for(i=0; i<n; ++i)
				if(*(p+i)==key)
					return 1;
			return 0;
		}
		int binarySearch(int* p,int n,int key)
		{
			p=bubbleSort(p,n);
			start=0;
			end=n-1;
			while(start<=end)
			{
				middle=(start+end)/2;
				if(key>*(p+middle))
					start=middle+1;
				else if(key<*(p+middle))
					end=middle-1;
				else
					return 1;
			}
			return 0;
		}
		int* readArray()
		{
			cout<<"\nNumber of elements:";
			cin>>count;
			cout<<"Enter Elements:";
			for(i=0; i<count; ++i)
				cin>>arr[i];
			*(arr+CNT)=count;
			return arr;
		}
		void display(int* p,int n)
		{
			for(i=0; i<n; ++i)
				cout<<*(p+i)<<" ";
		}
	public:
		void search(int op)
		{
			ptr=readArray();
			cout<<"\nElement to Search:";
			cin>>key;
			if(op==1)
				flag=linearSearch(ptr,*(ptr+CNT),key);
			else
				flag=binarySearch(ptr,*(ptr+CNT),key);
			if(flag)
				cout<<key<<" is Present";
			else
				cout<<key<<" is not Present";
			cout<<"\n";
			getch();
		}
		void sort(int op)
		{
			ptr=readArray();
			cout<<"\nSorted Array:\n";
			if(op==1)
				display(bubbleSort(ptr,*(ptr+CNT)),*(ptr+CNT));
			else if(op==2)
				display(quickSort(ptr,0,*(ptr+CNT)-1),*(ptr+CNT));
			else
				display(selectionSort(ptr,*(ptr+CNT)),*(ptr+CNT));
			cout<<"\n";
			getch();
		}
};
class mainMenu
{
	private:
		int ch;
		class math m;
		class sortandsearch ss;
	protected:
		void mathMenu()
		{
			do
			{
				cout<<"\n";
				cout<<"Mathematical Operations\n";
				cout<<"1-Calculator\n2-Permutation\n3-Combination\n4-Factorial";
				cout<<"\n5-Close\nOption:";
				cin>>ch;
				switch(ch)
				{
					case 1 :
						m.calculator();
						break;
					case 2 :
						m.permutation();
						break;
					case 3 :
						m.combination();
						break;
					case 4 :
						m.factorial();
					case 5 :
						break;
					default:
						cout<<"Wrong Option choosed..!!";
				}
			}while(ch!=5);
			cout<<"\n";
		}
		void spNumMenu()
		{
			do
			{
				cout<<"\n";
				cout<<"Numbers with specail Properties..!!\n";
				cout<<"1-Check Whether a Number is Amstrong or Not\n2-List Armstrong Numbers Between Given Range\n3-Check Whether a number is Prime or Not\n4-List Prime Numbers Between Given Range";;
				cout<<"\n5-Check Whether a number is Perfect or Not\n6-List Perfect Numbers Between Given Range\n7-Check Whether a number is Pallindrome or Not";
				cout<<"\n8-Check whether Leap year or not\n9-List Leap Year Between Given Range";
				cout<<"\n10-Close\nOption:";
				cin>>ch;
				cout<<"\n";
				switch(ch)
				{
					case 1 :
						m.checkArmstrong();
						break;
					case 2 :
						m.listArmstrong();
						break;
					case 3 :
						m.checkPrime();
						break;
					case 4 :
						m.listPrime();
						break;
					case 5 :
						m.checkPerfect();
						break;
					case 6 :
						m.listPerfect();
						break;
					case 7 :
						m.pallindrome();
						break;
					case 8 :
						m.checkLeapyear();
						break;
					case 9 :
						m.listLeapyear();
					case 10:
						break;
					default:
						cout<<"Wrong Option choosed..!!";
				}
			}while(ch!=10);
			getch();
			cout<<"\n";
		}
		void sortmenu()
		{
			do
			{
				cout<<"\n";
				cout<<"--Sort--";
				cout<<"\n1-Bubble Sort\n2-Quick Sort\n3-Selection Sort\n4-Close";
				cout<<"\nOption:";
				cin>>ch;
				cout<<"\n";
				switch(ch)
				{
					case 1 :
						cout<<"--Bubble Sort--";
						ss.sort(1);
						break;
					case 2 :
						cout<<"--Quick Sort--";
						ss.sort(2);
						break;
					case 3 :
						cout<<"--Selection Sort--";
						ss.sort(3);
					case 4 :
						break;
					default:
						cout<<"Wrong option chosed..!!";
				}
			}while(ch!=4);
			cout<<"\n";
		}
		void searchmenu()
		{
			do
			{
				cout<<"\n";
				cout<<"--Search--";
				cout<<"\n1-Linear Search\n2-Binary Search\n3-Close";
				cout<<"\nOption:";
				cin>>ch;
				cout<<"\n";
				switch(ch)
				{
					case 1 :
						cout<<"--Linear Search--";
						ss.search(1);
						break;
					case 2 :
						cout<<"--Binary Search--";
						ss.search(2);
					case 3 :
						break;
					default:
						cout<<"Wrong option chosed..!!";
				}
			}while(ch!=3);
			cout<<"\n";
		}
	public:
		void menu()
		{
			do
			{
				cout<<"\n";
				cout<<"Main Menu\n";
				cout<<"1-Mathematical Operations\n2-Special Numbers\n3-Sort an Array\n4-Search a Number in an Array ";
				cout<<"\n5-Close\nOption:";
				cin>>ch;
				switch(ch)
				{
					case 1 :
						mathMenu();
						break;
					case 2 :
						spNumMenu();
						break;
					case 3 :
						sortmenu();
						break;
					case 4 :
						searchmenu();
					case 5 :
						break;
					default:
						cout<<"Wrong Option Choosed...!";
				}
			}while(ch!=5);
		}
};

int main()
{
	class mainMenu m;
	m.menu();
	return 0;
}
