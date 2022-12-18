#include <iostream>
using namespace std;
template <class ls>
int *add_el(ls *list,ls ele){
     int length=sizeof(list)/sizeof(ls);
     list[length]=ele;
}
int main(){

}
