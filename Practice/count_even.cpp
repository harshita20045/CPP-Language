# include<iostream>
using namespace std;

int main()
{
      int n;
  cout<<"Enter the number :";
  cin>>n;

    int i=1;
    int count = 2;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
           
            cout<<count<<"   ";
           count = count +2;

           j=j+1;
          
        }
        cout<<endl;
        i = i+1;
    }
   
    return 0;
}
