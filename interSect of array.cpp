#include<iostream>
using namespace std;

bool interSection(int arr[],int brr[],int n1,int n2)
{
	for(int i = 0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(arr[i]==brr[j])
			{
				return 1;
				brr[j]=-1;
				break;
			}
			
			}
		}
		return  0;
	}
	


int main()
{
	int arr[5]={1,2,3,4,5};
	int brr[3]= {9,3,6};
	bool inter = interSection(arr,brr,5,3);
	if(inter)
	{
		cout<<"intersect "<<endl;
	}
	else{
		cout<<" not intersecrt";
	}
	
}
