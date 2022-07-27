#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class Wordset{
public:
	void Vlist( char *argv ){
		string s;
		vector<string>vlist;
		for(int i = 0; i < vlist.size(); i++)
        	cout << vlist[i] << '\n';
		vector<string>::iterator it;
	
		//cout<<"Adding Members"<endl;
    		vlist.push_back("Bangalore");
		vlist.push_back("Hello");
    		for(string s :vlist)
     		cout<<s<<"  ";
    	
		
		vlist.pop_back();
		//cout<<"Deleting Member "<endl;
    		for(string s :vlist)
    		cout<<s<<"  "<<endl;
		
		
		cout<<"\nempty the vector vlist"<<endl;
		if (vlist.empty())
    		{
        	cout << "True";
    		}
    		else {
        	cout << "False";
    		}
		
		/*for (int i = 0; i < n; i++) { 

      		// Skip this element if already processed 
       		if (vlist[i] == true) 
            	continue; 
      		// Count frequency 
       		int count = 1; 
       for (int j = i + 1; j < n; j++) { 
           if (arr[i] == arr[j]) { 
               vlist[j] = true; 
               count++; 
              }  
      		} 
       		std::cout<<count<<" ";*/
		for(it=vlist.begin();it<vlist.end();++it)
     		cout<<endl<<*it<<"\t";
     
    	}
};

int main(int argc,char** argv)
{
	Wordset v1;

 	vector <string> vlist;


      	for(int i=1;i<argc;i++)
        {
             	stringstream check1(argv[i]);

		string intermediate;

	while(getline(check1, intermediate, ':'))
    	{
		vlist.push_back(intermediate);
    	}
  	//for(int i = 0; i < vlist.size(); i++)
       		//cout << vlist[i] << '\n';
                }
	
		v1.Vlist(*argv);
		//v1.addMember();
		//v1.deleteMember();
    
}

