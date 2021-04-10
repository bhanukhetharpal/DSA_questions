#include<iostream>

using namespace std;
int Remove(int[]);
int Insert(int[],int);
void display_queue(int[],int,int);
int Pop(int[],int&);
int Push(int[],int&,int);
void display_stack(int[],int);
const int size=50;
int Queue[size],front=-1,rear=-1;
int Stack[size],item,top=-1,res;
int main()
{ int x,e; char ch='y';
  cout<<"Enter the first element"<<endl;
  cin>>x;
  if(rear==-1&&top==-1)
 {Insert(Queue,x);
  cout<<"QUEUE IS NOW:"<<endl;
  display_queue(Queue,front,rear);
}
while(ch=='y'||ch=='Y')
{ cout<<"Enter the next element you want to add"<<endl;
  cin>>e;
  if(e>=Queue[rear])
  {Insert(Queue,e);
  cout<<"element is inserted in Queue. Queue now is:"<<endl;
  	display_queue(Queue,front,rear);
  }
else if(top=-1||e<=Stack[top])
{Push(Stack,top,e);
 cout<<"element is pushed in stack. stack now is: "<<endl;
 display_stack(Stack,top);
}
else
{if(Stack[top]<Queue[front])
 {int r;
  r=Pop(Stack,top);
  Insert(Queue,r);
  cout<<""	

 }






}
cout<<"\n Want to insert more elements?(y/n)"<<endl;
cin>>ch;
}





return 0;}



int Insert(int Queue[],int ele)
{if(rear==size-1)
	return -1;
else if(rear==-1)
{ front=rear=0;
   Queue[rear]=ele;
}
else
{rear++;
 Queue[rear]=ele;
}
 return 0;
}
int Remove(int Queue[])
{ int ret;
  if (front==-1)
  return -1;
  else
  { ret=Queue[front];
    if(front==rear)
     front=rear=-1;
     else front++;
 }
 return ret;
}
void display_queue(int SQueue[], int front, int rear)
{if(front==-1) return ;
	for(int i=front;i<rear;i++)
	cout<<Queue[i]<<"<- ";
	cout<<Queue[rear]<<endl;
}
int Push(int Stack[],int &top,int ele)
{ if(top==size-1) return -1;
  else
  {top++;
   Stack[top]=ele;
   }
   return 0;
}	
int Pop(int Stack[],int &top)
{ int ret;
  if(top==-1) return -1;
  else
  { ret=Stack[top];
   top--;
  }
  return ret;
  }
  void display_stack(int Stack[],int top)
  { if(top==-1)return;
    cout<<Stack[top]<<"<--"<<endl;
    for(int i=top-1;i>=0;i--)
    cout<<Stack[i]<<endl;	
   }

