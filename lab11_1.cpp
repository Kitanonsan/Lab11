#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; 
	string grade;
	int N = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << N << "]: ";
		cin >> grade; 
		if(grade == "A") {
			count[0] = count[0] + 1;
			N++;
		}

		else if(grade == "B") {
			count[1] = count[1] + 1;
			N++;
		}
		else if(grade == "C") {
			count[2] = count[2] + 1;
			N++;
		}

		else if(grade == "D") {
			count[3] = count[3] + 1;
			N++;
		}

		else if(grade == "F") {
			count[4] = count[4] + 1;
			N++;
		}

		else if(grade == "0") 
			break;
		
		else{ 
			cout << "Wrong input. Please input again."<< endl;
		} 
		
	}while(true);
	
	cout << "In total " << N-1  << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	
	return 0;
}
