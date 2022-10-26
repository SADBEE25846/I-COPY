#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int guess,seed,target;
    seed=time(NULL);
    srand(seed);
    target=rand();
    while (target!=guess){
        cout<<"Input A Number"<<endl;
        cin>>guess;
        if (guess<target){
            cout<<"Too Small"<<endl;
        }
        else if (guess>target){
            cout<<"Too Big"<<endl;
        }
    }
    return 0;
}
