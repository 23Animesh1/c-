# include <iostream>
# include <list>

using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    l.push_back(1);
    l.push_back(2);

    l.push_front(3);
    for (int i:l){
        cout<<i<<endl;
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;

    for (int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list"<<l.size()<<endl;
}