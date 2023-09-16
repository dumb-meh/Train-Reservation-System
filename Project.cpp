

#include<bits/stdc++.h>

#include"customDLL&Queue.h"

#include"login.h"

int main ()
{
    int choice;
    int a=0;
    int c=0;
    srand (time(NULL));
    time_t now=time(0);
    char* dt=ctime(&now);

    DLL *Dhaka=new DLL ();
    DLL *Rajshahi=new DLL();

    Dhaka->add (1130);
    Dhaka->add (1131);
    Dhaka->add (1132);
    Dhaka->add (1133);



    Rajshahi->add (1230);
    Rajshahi->add (1231);
    Rajshahi->add (1232);
    Rajshahi->add (1233);

    Queue *q=new Queue();

    int Parabat_Express[20];
    int Godhuli_express[20];

    for (int i=0;i<20;i++)
    {
     Parabat_Express[i]=0;
     Godhuli_express[i]=0;
    }


    while (a!=3)
    {
    int b;

    loginManager log;
    b=log.login();
    a++;
    c++;

 if (b==1)
 {
    while (choice!=3)
{
    cout<<"1.Reserve a ticket"<<endl;
    cout<<"2.Cancel ticket"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>choice;

    if (choice ==1)
    {
        int x;
        cout<<"From:\n1.Dhaka \n2.Rajshahi "<<endl;
        cin>>x;

        if (x==1)
        {
           int y;
          cout<<"Destination:\n1.Rajshahi \n2.Chottogram"<<endl;

          cin>>y;

          if (y==1)
          {   int z;
              cout<<"Available Trains: \n1.Godhuli Express"<<endl;

              cin>>z;
              if (z==1)
              {
                  int e;
                  cout<<"Select class: \n1.Shovon \n2.Ac coach \n3.Non-Ac coach" <<endl;
                  cin>>e;


                  if (e==1)
                  {
                    int f;
                    cout<<"Select Bogey: \n1.A \n2.D" <<endl;
                    cin>>f;


                    if (f==1)
                    {
                        int g, m;

                        cout<<"How many tikets do you want to buy"<<endl;
                        cin>>m;

                        for(int n=0;n<m;n++)
                        {


                        cout<<"Available seats"<<endl;
                        for (int k=0;k<5;k++)
                        {
                            if(Godhuli_express[k]==0)
                            {
                                cout<<" "<<k+1;
                            }
                        }
                        cout<<"\n\n Enter seat No:"<<endl;
                        cin>>g;
                       bool l= q->isEmpty();
                       if (l='True')
                       {
                           q->Enque(g);
                       }
                       else
                        {
                        cout<<"Seat is unavailable"<<endl;
                        }
                        Godhuli_express[g-1]=1;
                        }

                        cout<<"                        Ticket      "<<endl;
                        cout<<"Name:User"<<endl;
                        cout<<"Train:Godhuli Express"<<endl;
                        cout<<"From:Dhaka                         Destination:Rajshahi"<<endl;
                        cout<<"Departure time: 4 pm               Arrival time:12 am"<<endl;
                        cout<<"number of seats: "<<m<<"                 Price : "<<350*m<<" Taka"<<endl;
                        cout<<"Date &Time: "<<dt<<endl;
                        cout<<"Ticket no: "<<rand()%100000<<endl;
                        cout<<"\n\n";
                        q->Deque();
                    }

                  }
              }

          }
        }

    }
    if (choice==2)
    {
        int o;
        cout<<"Enter tickect No: "<<endl;
        cin>>o;
        cout<<"Ticket cancelled"<<endl;
    }
    else if (choice==3)
        {
            a=3;
            cout<<"Program ended successfully"<<endl;
        }

}
 }

    }
    if (c==3)
    {cout<<"Too many incorrect attempts"<<endl;}

}

