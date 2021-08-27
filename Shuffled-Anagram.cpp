// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//Global variable
string str="", str1 = "";
int num,tests,countt = 0;


//Check function to check the occurence of desired Anagrams
int check (string anag)
{
    int flag=0;
    for(int i=0; i<(anag.length()); i++)
    {
        if (anag[i] == str1[i])
        {
            flag=1;
            break;
        }

    }
    if (flag==0)
    {
        cout<<"Case #"<<num<<": "<< anag<<endl;
        countt = countt + 1;
    }
    return 0;
}

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.

void permute(string a, int l, int r)
{
	if (countt >0)
    {
        return;
    }
	// Base case
	if (l == r)
		check(a);
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}



// Driver Code
int main()
{

	cout<<"Test Cases = ";
	cin>>tests;
	for(num=1;num<=tests;num++)
    {
        str="";
        cout<<"Enter String: ";
        cin>>str;
        countt=0;
        str1 = str;
        int n = str.size();
        permute(str, 0, n-1);
        if(countt==0)
        {
            cout<<"Case #"<<num<<": "<<"IMPOSSIBLE"<<endl;
        }
    }

	return 0;
}


