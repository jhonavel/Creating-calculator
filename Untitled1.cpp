# include <iostream>
using namespace std;

int main()
{
    char op;
    int a;
    float num1, num2;
    void exit();


    cout << "\n\n[1] Addition \n\n [2] Subtraction \n\n [3] Multiplication \n\n [4] Divide \n\n";
    cout << "Enter operator to be use:";
    cin >> op;

    cout << "\nEnter First Number:\n ";
    cin >> num1;
	cout << "Enter Second Number : ";
	cin>> num2;

    switch(op)
    {
        case '1':
            cout << "\n The answer is:"<<num1+num2;
            cout<<"\n\n Woud you like to go another Operator?\n 1[Yes] 2[No]";
            cin>>a;
            if (a==1){
			
			main();
		}
		else if(a==2){ 
	
		exit();
	}
            break;

        case '2':
            cout << "\n The answer is:"<<num1-num2;
            cout<<"\n\n Woud you like to go another Operator?\n 1[Yes] 2[No]";
            cin>>a;
            if (a==1){
			
			main();
		}
		else if(a==2){ 
	
		exit();
	}
            break;

        case '3':
            cout <<"\n The answer is:"<< num1*num2;
            cout<<"\n\n Woud you like to go another Operator?\n 1[Yes] 2[No]";
            cin>>a;
            if (a==1){
			
			main();
		}
		else if(a==2){ 
	
		exit();
	}
            break;

        case '4':
            cout << "\n The answer is:"<<num1/num2;
            cout<<"\n\n Woud you like to go another Operator?\n 1[Yes] 2[No]";
            cin>>a;
            if (a==1){
			
			main();
		}
		else if(a==2){ 
	
		exit();
	}
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }  
}
void exit()
{
	cout<<"\n \n The Program is Terminated .Thank you  !";
}


