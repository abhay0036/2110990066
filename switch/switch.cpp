#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    switch(x)
	    {
	        case 1:
	            cout<<"one"<<"\n";
	            break;
	        case 2:
	            cout<<"two"<<"\n";
	            break;
	        case 3:
	            cout<<"three"<<"\n";
	            break;
			case 6:
	            cout<<"six"<<"\n";
	            break;
	        case 7:
	            cout<<"seven"<<"\n";
	            break;
	       
	        
	        default:
	         cout<<"not in range"<<"\n";
	    }
	}
	return 0;
}