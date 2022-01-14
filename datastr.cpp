#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int val) {
   if(top >= n-1)
      cout<<""<<endl;
   else {
      top++;
      stack[top] = val;
   }
}
void pop() {
   if(top <= -1)
      cout<<"uploaded"<<endl;
   else {
      cout<<"delete video is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>= 0) {
      cout<<"Stack elements are:";
      for(int i = top; i>= 0; i--)              
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"no video";
}
int main() {
   int ch, val; 
                                                          //cout<<"                                                           ____     __    __ "<<endl; 
 cout<<"         _                      _ _     "<<endl;  //cout<<"    _        _    ________    _____     ________         / ____ \   | |   | | "<<endl;
 cout<<"        | |                     (_) |   "<<endl;  //cout<<"    \ \     / /  (  _____ )  (  ___|    |  _____|       / /    \_\  | |   | | "<<endl;
 cout<<"     ___| |__   __ _ _ __ ___    _| |_  "<<endl;  //cout<<"     \ \   / /   | (    ) |  | |        | |_____        \ \         | |___| | "<<endl;                      
 cout<<"    / __| '_ \ / _` | '__/ _ \__| | __|  "<<endl; //cout<<"      \ \/ /     | |    | |  | |  ____  | |____|    __   \ \        |  ____ |  "<<endl;
 cout<<"    \__ \ | | | (_| | | |  __/--| | |_  "<<endl;  //cout<<"       |  |     | (____) |  | |__|  |  | |_____    \ \___\ \       | |   | |  "<<endl;
 cout<<"    |___/_| |_|\__,_|_|  \___|  |_|\__| "<<endl;  //cout<<"       |  |     (________)  (_______)  |_______|    \______/       | |   | |  "<<endl;         
                                                          //cout<<"       |_|                                                        |_|   |_|  "<<endl;
   
cout<<"                                                          ______             "<<endl; 
cout<<"    _       _     ________    _____     ________         / ____ \   __    __ "<<endl;   
cout<<"    \ \    / /   (  _____ )  (  ___|    |  _____|       / /    \_\  | |   | |"<<endl; 
cout<<"     \ \  / /    | (    ) |  | |        | |_____        \ \         | |___| |"<<endl; 
cout<<"      \ \/ /     | |    | |  | |  ____  | |____|    __   \ \        |  ___  |"<<endl;
cout<<"       |  |      | (____) |  | |__|  |  | |_____    \ \___\ \       | |   | |"<<endl;
cout<<"       |__|      (________)  (_______)  |_______|    \______/       |_|   |_|"<<endl; 

   cout<<"0)enter into share it"<<endl; 
   cout<<"1) video upload "<<endl;
   cout<<"2) video delete"<<endl;
   cout<<"3) Display videos"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
      	case 0:{
      		cout<<"Sucessfully entered"<<endl;
			break;
		  }
         case 1: {
            cout<<"upload video:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"sucessfully upload"<<endl;
         }
      }
   }while(ch = 4);
   return 0;
}
