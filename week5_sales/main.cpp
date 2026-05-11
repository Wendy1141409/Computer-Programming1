#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double sales[5][6]={0},pertotal[5]={0},prototal[6]={0};
	int person,product;
	cout << "Enter the salesperson (1 - 4), product number (1 - 5), and total sales.\n";
    cout << "Enter -1 for the salesperson to end input.\n";
	while(cin>>person && person!=-1){
		cin>>product;
		cin>>sales[person][product];
		pertotal[person]+=sales[person][product];
		prototal[product]+=sales[person][product];
	}
	cout << fixed << setprecision(2);

    cout << "\nThe total sales for each salesperson are displayed at the end of each row,\n";
    cout << "and the total sales for each product are displayed at the bottom of each column.\n\n";

    cout<<setw(8)<<" ";
    for(int i=1;i<=5;i++)
		cout<<setw(10)<<i;
		cout<<setw(10)<<"Total"<<endl;
    for(int i=1;i<=4;i++){
    	cout<<setw(8)<<i; 
		for(int j=1;j<=5;j++){
			cout<<setw(10)<<sales[i][j]; 
		} 
		cout<<setw(10)<<pertotal[i]<<endl;}
		cout<<setw(8)<<"Total";
		for(int j=1;j<=5;j++)
		   cout<<setw(10)<<prototal[j];
	return 0;
}

