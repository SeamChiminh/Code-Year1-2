#include<iostream>
#include<conio.h>
#include<string.>
#include<iomanip>

using namespace std;

typedef struct { char id[6];
				 int qty;
				 char name[30];
				 double cost, price;
}PRO;
typedef struct { char id[6],name[20];
				 int qty,inv;
                 float cost,price;
                 float amount;	
}SALE;
SALE s[20];
PRO pro[20];
int invoice = 0;
int n, sn = 0;
void input(){
	n = 3;
	strcpy(pro[0].id,"A001");
	strcpy(pro[0].name,"Vital");
	pro[0].qty = 2;
	pro[0].cost = 3.4;
	pro[0].price = 3.5;
	strcpy(pro[1].id,"A002");
	strcpy(pro[1].name,"Sting");
	pro[1].qty = 5;
	pro[1].cost = 2;
	pro[1].price = 2.1;
	strcpy(pro[2].id,"A003");
	strcpy(pro[2].name,"Milk");
	pro[2].qty = 6;
	pro[2].cost = 3.8;
	pro[2].price = 3.9;
}
void output(){
	cout << left;
   	cout << setw(7) << "Id";
	cout << setw(15) << "Name";
	cout << setw(7) << "Qty"; 
	cout << setw(7) << "Cost";
	cout << setw(7) << "Pice";
	cout << endl;
	for(int i=0; i<n; i++){
  		cout << left;
		cout << setw(7) << pro[i].id;
      	cout << setw(15) << pro[i].name;
	    cout << setw(7) << pro[i].qty;
	    cout << setw(7) << pro[i].cost;
	    cout << setw(7) << pro[i].price;
	    cout << endl;
   }
   getch();
}
int main(){
	input();
	A: system("cls");
	
	cout << "1: Stock" << endl;
   	cout << "2: Sale" << endl; 
   	cout << "E: Exit" << endl;
   	switch(getch()){
   		case '1': cout << "Product in stock" << endl;
      			B: system("cls");
               cout << "1.Add product" << endl;
               cout << "2.Display product" << endl;
               cout << "3.Check stock" << endl;
               cout << "4.Edit product" << endl;
               cout << "Q.Quit" << endl;
        		switch(getch()){
               		case '1':
                  			char id[6];
                  			int qty;
                           	int i, found;
                           	found = 0;
                  			cout << "input id: ";
                           	fflush(stdin);
                           	cin >> id;
                           	for(i = 0; i<n; i++)
                           		if(stricmp(pro[i].id,id) == 0){
                              		cout << "Name: " << pro[i].name << endl;
                                 	cout << "input Qty: "; cin >> qty;
                                 	pro[i].qty = pro[i].qty + qty;
                                 	found = 1;
                            }
                          	if(found==0){
                           		strcpy(pro[n].id,id);
	                              cout << "name: "; cin >> pro[n].name;
	                              cout << "qty: "; cin >> pro[n].qty;
	                              cout << "cost: "; cin >> pro[n].cost;
	                              cout << "price: "; cin >> pro[n].price;
                           			n++;
                           }
                           printf("n = %d\n",n);
                           cout << "Saved..." << endl;
                           getch();
                           goto B;
                  case '2':
				  			output();
							goto B;
                  case 'q':
                  case 'Q':
				  			goto A;
               }
		case '2':
				C: system("cls");
				 cout << ("===>> Sale product <<===") << endl;
				 cout << ("1. Sale product") << endl;
	             cout << ("2. Show all invoice") << endl;
	             cout << ("3. Show invoice detail") << endl;
	             cout << ("4. Quit") << endl;
	             cout << endl;
				 switch(getch()){
	             	case '1':
	             			char id[6];
	             			int found,i,qty;
	             			invoice = invoice + 1;
	             			do{
	             				found = 0;
	             				
	             				cout << "input id: ";
	             				fflush(stdin);
	             				cin >> id;
	             				for(i=0; i<n; i++)
	             					if(stricmp(pro[i].id,id ) == 0){
	             						Y: system("cls");
	             						cout << "has founded" << endl;
	             						cout << "Name: " << pro[i].name << endl;
	             						cout << "input Qty: ";
	             						cin >> qty;
	             						if(qty > pro[i].qty){
	             							cout << "==> qty min krob , please input again." << endl;
	             							getch();
	             							goto Y;
										 }
	             						else
										{
											pro[i].qty = pro[i].qty - qty;
		             						strcpy(s[sn].id,pro[i].id);
		             						strcpy(s[sn].name,pro[i].name);
		             						s[sn].qty = qty;
				                        	s[sn].price = pro[i].price;
				                        	s[sn].inv = invoice;
				                        	found = 1;
				                            sn = sn + 1;
										}	
									 
									 if(found == 0)
									 cout << "not found" << endl;             			 
									 cout << " Enter to continue " << endl;
                        			 cout << " Enter [ESC] for back " << endl;
                        		}
							 }while(getch() == 13);
								goto C;
							 
					case '2': 
							puts("invoice\tId\tName\tQty\tPrice\tAmount");
                        	for(i=0; i<sn; i++){
	                        	cout <<s[i].inv << "\t" << s[i].id << "\t" << s[i].name << "\t";
	                            cout << s[i].qty << "\t" << s[i].price << "\t" << s[i].qty * s[i].price;
	                            cout << endl;
	                        }
	                        getch();
	                        goto C;
	                case '3': 
	                		puts("==>> Show invoice detail <<==");
	                		
	                		
	                		break;
	                case '4':
	                			goto A;
	                default:
	                		puts("Please, enter again.");
	                		getch();
	                		goto C;
	        	}
			
			
		case 'e':
	    case 'E': 
				return 0;
		default: 
				cout << "Please enter again.";
				getch();
				goto A;
	}
}