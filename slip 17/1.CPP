/* create c++ class mymatrix. write c++ program to accept and display
matrix. overload binary"-" opeartor to calculate of 2 matrix. */


#include<iostream.h>
#include<conio.h>

class matrix
{
	int a[3][3];
	public:
		void get();
		void put();
		void operator-(matrix z);
};

void matrix::get()
{
	int i,j;
	cout<<"\nEnter matrix elements : \n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cin>>a[i][j];
	}
	}
}

void matrix::put()
{
	int i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cout<<a[i][j];
	cout<<"\t";
	}
	}
}

void matrix::operator -(matrix z)
{
	int mat[3][3],i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	mat[i][j]=a[i][j]-z.a[i][j];
	}
	}

	cout<<"\n\nSubtraction of matrix is \n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cout<<mat[i][j];
	cout<<"\t";
	}
	}
}

void main()
{
	matrix m,n;
	clrscr();
	m.get();
	n.get();
	cout<<"\nMatrix 1 is : \n";
	m.put();
	cout<<"\n\nMatric 2 is : \n";
	n.put();
	m-n;
	getch();
}