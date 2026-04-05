 #include <iostream>

 
 using namespace std;
int main(){

  int i,j,n;
    cout<<"Enter range of prime numbers:"<<endl;
    cin>>n;

for(i=3;i<=n;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }

        }
        if(i==j){
                cout<<"1"<<endl;
                cout<<i<<endl;

    }
}
}
