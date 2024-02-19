#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

void print_task(string tasks[], int task_count)
{
    cout<<"---TASKS TO DO-----"<<endl;
    cout<<"--------------------------------"<<endl;

    for(int i=0;i<task_count;i++)
    {
        cout<<"TASKS"<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"--------------------------------"<<endl;
}

int main(){
    system("color a");
    string tasks[10]={""};
    
     // counter variable for know how many tasks we have
    int task_count=0;
    int option=-1;
    while(option != 0)
    {
        // writing menu for todo list
        cout<<"-----------TO DO LIST-------------"<<endl;
        cout<<"1-----T0 ADD NEW TASK ------"<<endl;
        cout<<"2-----TO VIEW THE TASK-------"<<endl;
        cout<<"3-----T0 DELETE TASK ------"<<endl;
        cout<<"0-----T0 EXIT TASK ----------"<<endl;
        cin>>option;


        switch(option)
        {
            case 1 : 
            {
                if(task_count>9)
                {
                    cout<<"----TASK LIST IS FULL-----"<<endl;
                }
                else{
                    cout<<"----ADD NEW TASK-----"<<endl;
                    cout<<"Enter the task name : ";
                    cin>>tasks[task_count];
                    task_count++;
                }
                break;
            }
            case 2 :
             {
                system("cls");
                print_task(tasks,task_count);
                break;
            }
            case 3 :
            {
                int del_task=0;
                cout<<"-----ENTER A TASK TO DELETE ------"<<endl;
                cin>>del_task;
                if(del_task<0 || del_task>9){
                    cout<<"-----INVALID TASK N0.-----"<<endl;
                    break;
                }
                for (int i=del_task; i<task_count; i++)
                {
                    tasks[i]=tasks[i+1];
                }
                task_count=task_count-1;
                break;
                
            }
            case 0 :
            {
                cout<<"-----TERMINATING THE TASK------"<<endl;
                break;
                default :
                cout<<" ------YOU HAVE ENTERED INVALID VALUE------"<<endl;


            }
        }
    
    }

}