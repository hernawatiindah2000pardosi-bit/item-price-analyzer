#include <iostream>
using namespace std;
int main(){
	int number_items;
	cout<<"Enter the number of items : ";
	cin>>number_items;
	int total, average, max, min;
	int price[number_items];
	
	//input
	for(int a = 0; a < number_items; a++){
		cout<<"Enter the price of index - "<<a<<" : $ ";
		cin>>price[a];
	} system("cls");
	
	//output
	cout<<"The number of items = "<<number_items<<endl;
	cout<<"===================== LIST ====================="<<endl;
	for(int b = 0; b < number_items; b++){
		cout<<b+1<<". The price of index - "<<b<<" : $ "<<price[b]<<endl;
	}
	cout<<"====================================="<<endl;
	for(int c = 0; c < number_items; c++){
		total += price[c];
	}
	cout<<"Overall price = $ "<<total<<endl;
	average = total/number_items;
	cout<<"The average = "<<average<<endl<<endl;
	
	//comparison
	int maxIndex = 0;
	int minIndex = 0;
	max = price[0];
	min = price[0];

	for(int d = 0; d < number_items; d++){
	if (price[d] > max){
		max = price[d];
		maxIndex = d;
	} else if (price[d] < min){
		min = price[d];
		minIndex = d;
	}
}
	cout<<"Maximum price = $ "<<max<<" at the price index - "<<maxIndex<<endl;
	cout<<"Minimum price = $ "<<min<<" at the price index - "<<minIndex<<endl;
}
