//example fakeChatbot code

#include <iostream>
using namespace std;
int main(){
string name;
string dino;
string color;
string food;
cout<<"Hi, what is your name?";
cin>>name;
cout<<"Wow! "<<name<<" is a really neat name. What is your fave dino?";
cin>>dino;
cout<<"Cool. I guess. /*example by Real-Mr-Wolford*/ But my dino would beat "<<dino<<"What color do you like?";
cin>>color;
cout<<"No way! "<<color<<" is my favorite as well! What food do you like?";
cin>>food;
cout<<food<<"sounds really neat. I can't eat because I'm a machine!";
}

//optimized code using one string variable declaration via CSD

//example fakeChatbot code

#include <iostream>
using namespace std;
int main(){
string name, dino, color, food;

cout<<"Hi, what is your name?";
cin>>name;
cout<<"Wow! "<<name<<" is a really neat name. What is your fave dino?";
cin>>dino;
cout<<"Cool. I guess. But my dino would beat "<<dino<<". What color do you like?";
cin>>color;
cout<<"No way! "<<color<<" is my favorite as well! What food do you like?";
cin>>food;
cout<<food<<" sounds really neat. I can't eat because I'm a machine!";
}

