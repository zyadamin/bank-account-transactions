/*
zyad mohamed amin ........   20180111
manar atef sayed .........   20180290

*/


#include <iostream>
#include <cstring>
using namespace std;
void print();
void ch1(char name[20][20],int balance[20],int n);
void ch2(char name[20][20], char y[10],int balance[20] ,int n);
void ch3(char name[20][20], char y[10],int balance[20] ,int n);
void ch4(char name[20][20],int balance[10],int n);
void ch5(char name[20][20],char city[22][20],char address[20][20],int balance[20],char y[10],int n );
void ch6(char address[20][20],char y[10],int n);

int main(){

 int n,lenth=1,count;
 char name[20][20],address[20][20]={""},add[80][10],test[20];
 char city[22][20]={"cairo","giza","alexandria","aswan","asyut","beheira","beniSuef","dakahlia","ismailia","luxor","matruh","Monufia","sharqia","sohag","suez","fayoum","Damietta","qena","minya","gharbia","qalyubia","kafrel-Sheikh"};
 int  balance[20];
 char a[10],b[10],c[10],d[10];

 cout<<"Please enter number of customers"<<endl;
 cin>>n;


 while(n<=0||n>20){
    cout<<"Please enter number of customers again"<<endl;
    cin>>n;

}

for(int i=0;i<n;i++){
    cout<<"Please enter name of the "<<i+1<<" customer"<<endl;
    cin>>name[i];

count=0;
while(count!=lenth){
cout<<"Please enter address"<<endl;
cin>>a>>b>>c>>d>>test;
lenth=strlen(test);
for(int i=0;i<22;i++){
    for(int j=0;j<lenth;j++){

      if(test[j]==city[i][j]){count+=1;}

    }
    if(count==lenth){break;}
    if(count!=lenth){count=0;}
}
}

for(int j=0;j<lenth;j++){
    address[i][j]=test[j];
}

char trans,again;
 int ntrans,c=1;

balance[i]=0;

 do{
    cout<<"Please enter "<<name[i]<<"\'s account transactions"<<endl;
     cin>>trans>>ntrans;
     while(ntrans<0){
      cout<<"Please enter valid transaction"<<endl;
      cin>>trans>>ntrans;
     }
if(trans=='d'||trans=='D'){balance[i]+=ntrans;}
  else if(trans=='w'||trans=='W'){balance[i]-=ntrans;}

     if(c==10){break;}
      c+=1;
cout<<"Do you need transaction again ?!"<<endl;
    cin>>again;
  }while(again=='y'||again=='Y');


}
char els;
do{

print();

int choice;
char y[10];


cin>>choice;
while(choice<1||choice>6){
    cout<<"enter a valid number"<<endl;
    cin>>choice;

}


if(choice==1){
ch1(name,balance,n );
  }

if(choice==2){
ch2(name,y,balance,n);
}


if(choice==3){
ch3(name,y,balance,n);
        }



if(choice==4){
    ch4(name,balance,n);

    }




    if(choice==5){
ch5(name,city,address,balance,y,n);

    }

if(choice==6){
ch6(address,y,n);

}




cout<<"do you need any thing else"<<endl;
cin>>els;
}while(els=='y'||els=='Y');
    return 0;
}
void print(){
cout<<endl;
cout<<"Hello in bank management system please enter your choice\n\n";
cout<<"1) To print all names and account balances\n";
cout<<"2) To print specific customer\'s account balance\n";
cout<<"3) To edit customer transactions\n";
cout<<"4) To show customer with highest balance\n";
cout<<"5) To change customer\'s name, transactions, balance, or address\n";
cout<<"6) To show how many customers in one city\n";
};

void ch1(char name[20][20],int balance[20],int n){

    for(int i=0;i<n;i++){
    cout<<name[i]<<endl;
    cout<<balance[i]<<endl;
cout<<"\n";
     }

};

void ch2(char name[20][20], char y[10],int balance[20] ,int n){
    int lenth=1,count1=0,q;

    cout<<"Please enter name of customer\n";
    cin>>y;
lenth=strlen(y);
    for(int j=0;j<n;j++){
    for(int i=0;i<lenth;i++){
        if(name[j][i]==y[i]){count1+=1;}

        }
    if(count1==lenth){
    q=j;
    break;

    }
    else{count1=0;}

    }

 cout<<balance[q]<<endl;
    };



void ch3(char name[20][20], char y[10],int balance[20] ,int n){
    int lenth=1,count1=0,q;

    cout<<"Please enter name of customer\n";
    cin>>y;
lenth=strlen(y);
    for(int j=0;j<n;j++){
    for(int i=0;i<lenth;i++){
        if(name[j][i]==y[i]){count1+=1;}

        }
    if(count1==lenth){
    q=j;
    break;

    }
    else{count1=0;}

    }
char trans,again;
 int ntrans, c1=1;
 do{
 cout<<"Please enter "<<name[q]<<"\'s account transactions"<<endl;

     cin>>trans>>ntrans;
     while(y<0){
      cout<<"Please enter valid transaction"<<endl;
        cin>>trans>>ntrans;
     }
if(trans=='d'||trans=='D'){balance[q]+=ntrans;}
  else if(trans=='w'||trans=='W'){balance[q]-=ntrans;}

     if(c1==10){break;}
      c1+=1;
cout<<"Do you need transaction again ?!"<<endl;
    cin>>again;
  }while(again=='y'||again=='Y');


}

void ch4(char name[20][20],int balance[10],int n){

int max=balance[0];
int value=0;

    for(int i=1;i<n;i++){
            if(max<=balance[i]){
             max=balance[i];
            value=i;
            }

    }
    cout<<name[value]<<endl;
    cout<<max<<endl;

}


void ch5(char name[20][20],char city[22][20],char address[20][20],int balance[20],char y[10],int n ){
int m,t;

cout<<"enter number of the customer"<<endl;
cin>>m;

 while(m<1||m>20){
    cout<<"Please enter number of customer again"<<endl;
 cin>>m;
 }


cout<<"1- to change customer\'s name"<<endl;
cout<<"2- to change customer\'s address"<<endl;
cout<<"3- to change customer\'s transactions"<<endl;
cin>>t;

while(t<1||t>3){
    cout<<"enter a valid number"<<endl;
    cin>>t;
}



if(t==1){
   cout<<"enter the new name"<<endl;
    cin>>name[m-1];
}

if(t==2){
 int count=0, lenth=1;
char a[10],b[10],c[10],d[10],test[20];
while(count!=lenth){
cout<<"Please enter new address"<<endl;
cin>>a>>b>>c>>d>>test;
lenth=strlen(test);
for(int i=0;i<15;i++){
    for(int j=0;j<lenth;j++){

      if(test[j]==city[i][j]){count+=1;}

    }
    if(count==lenth){break;}
    if(count!=lenth){count=0;}
}
}

for(int j=0;j<lenth;j++){
    address[m-1][j]=test[j];
}

}


if(t==3){

balance[m-1]=0;
char trans,again;
 int ntrans, c1=1;
 do{
    cout<<"enter the new transactions "<<endl;
     cin>>trans>>ntrans;
     while(y<0){
      cout<<"Please enter valid transaction"<<endl;
        cin>>trans>>ntrans;
     }
if(trans=='d'||trans=='D'){balance[m-1]+=ntrans;}
  else if(trans=='w'||trans=='W'){balance[m-1]-=ntrans;}

     if(c1==10){break;}
      c1+=1;
cout<<"Do you need transaction again ?!"<<endl;
    cin>>again;
  }while(again=='y'||again=='Y');}

};

void ch6(char address[20][20],char y[10],int n){
int samecity=0;
int count1=0,lenth;
cout<<"Please enter name of city\n";
cin>>y;
lenth=strlen(y);
    for(int j=0;j<n;j++){
    for(int i=0;i<lenth;i++){
        if(address[j][i]==y[i]){count1+=1;}

        }
    if(count1==lenth){samecity+=1;}
    count1=0;

    }
cout<<samecity<<endl;

};

