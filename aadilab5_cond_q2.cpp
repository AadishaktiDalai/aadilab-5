//Program to find maximum of the number
# include <iostream>
using namespace std;
int main(){
	// declaring variables 
	int a , b , c;
	//ask for three numbers
	cout<<"The three numbers are : ";
	cin>>a>>b>>c;
	//conditions
	if (a>b && a>c){
		cout<<"The maximum number is : "<<a<<endl;
		}
	else if(b>a && b>c){
		cout<<"The maximum number is : "<<b<<endl;
		}
	else{
		c>a && c>b;
		cout<<"The maximum number is : "<<c<<endl;
		}
return 3; 
}
