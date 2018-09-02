#include <iostream>
using namespace std;

int main(){
	int Score;
	cout << "Please enter your score" << endl;
	cin >> Score;
	
	cout << "Your Grade Is : " << endl;
	if(Score <= 44){
		cout << "F : Fail" << endl;
	}
	
		else if(Score >=45 && Score <=49){
			cout << "E : Unsatisfactory" << endl;
		}
		
		else if(Score >= 50 && Score <=54){
			cout << "D : Weak Pass " << endl;
		}
		
		else if(Score >= 55 && Score <= 59){
			cout << "D + : Pass" << endl;
		}
		
		else if(Score >= 60 && Score <= 64){
			cout << " C : Fair" << endl;
		}
		
		else if(Score >= 65 && Score <= 69){
			cout << " C+ : Average" << endl;
		}
		
		else if (Score >= 70 && Score <= 74){
			cout << "B : Good" << endl;
		}
		
		else if (Score >= 75 && Score <= 79){
			cout << "B+ : Very Good" << endl;
		}
		
		else if (Score >80){
			cout << "A : Excellent" << endl;
		}
	

	system ("pause");
	return 0;
}
