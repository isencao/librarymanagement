#include <iostream>
#include <string>
#include "Students.h"
#include "Book.h"
#include "Book.cpp"
#include "Students.cpp"
#define N 30
#include <conio.h>


bool login=false;
using namespace std;
void Wait()
{
    cout << "Press any button to continue"<<endl;
    _getch();
}
void MainMenu(Students _student){
	Students student= _student;
	Book book[N];
		Book book1("Novel","The Pilgrim’s Progress","John Bunyan");
		Book book2("Novel","Robinson Crusoe","Daniel Defoe");
		Book book3("Novel","Gulliver's Travels","Jonathan Swift");
		Book book4("Novel","Clarissa","Samuel Richardson");		
		Book book5("Novel","Frankenstein","Mary Shelley");
		Book book6("Documentary","Man's Search for Meaning","Viktor E. Frankl");
		Book book7("Documentary","Sapiens","Yuval Noah Harari");
		Book book8("Documentary","Shoe Dog","Phil Knight");
		Book book9("Documentary","Bad Blood","John Carreyrou");
		Book book10("Documentary","Educated","Tara Westover");
		Book book11("History","A Study of History","Arnold J. Toynbee");
		Book book12("History","The Mediterranean and the Mediterranean World in the Age of Philip II","Fernand Braudel");
		Book book13("History","The Guns of August","Barbara Tuchman");
		Book book14("History","SPQR: A History of Ancient Rome","Mary Beard");
		Book book15("History","What Is History?","E.H.Carr");
		Book book16("Philosophy","Meditations","Marcus Aurelius");
		Book book17("Philosophy","The Art of War","Sun Tzu");
		Book book18("Philosophy","The Republic","Plato");
		Book book19("Philosophy","Zen and the Art of Motorcycle Maintenance","Robert M. Pirsig");
		Book book20("Philosophy","A History of Western Philosophy","Bertrand Russell ");
		Book book21("Politics","The Republic","Plato");
		Book book22("Politics","The Prince","Nicolo Machiavelli");
		Book book23("Politics","Leviathan","Thomas Hobbes");
		Book book24("Politics","Two Treatises of Government","John Locke");
		Book book25("Politics","The Social Contract","Jean-Jacques Rousseau");
		Book book26("Scientific","Brief History of Time","Stephen Hawking");
		Book book27("Scientific","Cosmos","Carl Sagan");
		Book book28("Scientific","A Short History of Nearly Everything","Bill Bryson");
		Book book29("Scientific","The Selfish Gene","Richard Dawkins");
		Book book30("Scientific","Gödel, Escher, Bach","Douglas R. Hofstadter");
		book[0]=book1;
		book[1]=book2;
		book[2]=book3;
		book[3]=book4;
		book[4]=book5;
		book[5]=book6;
		book[6]=book7;
		book[7]=book8;
		book[8]=book9;
		book[9]=book10;
		book[10]=book11;
		book[11]=book12;
		book[12]=book13;
		book[13]=book14;
		book[14]=book15;
		book[15]=book16;
		book[16]=book17;
		book[17]=book18;
		book[18]=book19;
		book[19]=book20;
		book[20]=book21;
		book[21]=book22;
		book[22]=book23;
		book[23]=book24;
		book[24]=book25;
		book[25]=book26;
		book[26]=book27;
		book[27]=book28;
		book[28]=book29;
		book[29]=book30;
	cout<<"1- Show the books "<<endl;
	cout<<"0- Exit "<<endl;
	string select;
	cout<<"Select your process that you want "<<endl;
	cin>>select;
	if(select=="1"){
		bool control=true;
		while(control){
			if(login){
			system("cls");
			cout<<"Welcome to the library "<<student.getName()<<endl;
			cout<<"Please choose your type of the book that you want to read"<<endl<<endl<<endl;
			cout<<"Novel"<<endl;
			cout<<"Documentary"<<endl;
			cout<<"History"<<endl;
			cout<<"Philosophy"<<endl;
			cout<<"Politics"<<endl;
			cout<<"Scientific"<<endl;
			string choice;
			cout<<"Your choice is: "<<endl;
			cin>>choice;
			if(choice =="Novel"){
				system("cls");
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="Novel"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
						
					}
				}
				Wait();
				
			}
				if(choice =="Documentary"){
				system("cls");	
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="Documentary"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
						
					}
				}
				Wait();
			}
				if(choice =="History"){
				system("cls");
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="History"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
						
					}
				}
			}
				if(choice =="Philosophy"){
				system("cls");
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="Philosophy"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
					
					}
				}
				Wait();
			}
				if(choice =="Politics"){
				system("cls");
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="Politics"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
						
					}
				}
				Wait();
			}
				if(choice =="Scientific"){
				system("cls");
				for(int i=0; i<30 ;i++){
					string type=book[i].getType();
					if(type=="Scientific"){
						cout<<"Author of the books: "<<book[i].getAuthor()<<endl;
						cout<<"Name of the books: "<<book[i].getName()<<endl<<endl;
					
					}
				}
				Wait();
			}
		}
		}
	}


	if(select=="0"){
		system("exit");
		
	}
}
void LoginMenu(Students _student){
	string select;
	Students student= _student;

while(true){
	cout<<"**  Welcome to the Library  **"<<endl<<endl<<endl<<endl;
	cout<<"1- Sign up "<<endl;
	cout<<"2- Sign in "<<endl;
	cout<<"3- Forgot my password "<<endl;
	cout<<"0- Quit "<<endl<<endl<<endl<<endl;
	cout<<"Select your process that you want"<<endl;
	cin>>select;
 	if(select=="1"){
 		system("cls");
 		string id, password,name,surname;
 		int idcode;
 		cout<<"Please, enter an id: "<<endl;
 		cin>>id;
 		cout<<"Please, enter a password: "<<endl;
 		cin>>password;
 		cout<<"Please, enter a name: "<<endl;
 		cin>>name;
 		cout<<"Please, enter a surname: "<<endl;
 		cin>>surname;
 		cout<<"Please, enter an idcode: "<<endl;
 		cin>>idcode;
		student.setName(name);
		student.setSurname(surname);
		student.setId(id);
		student.setPassword(password);
		student.setIdCode(idcode);
 		cout<<"Your account has succesfully been created."<<endl;
 		system("cls");
 		
 		
	 }	
	if(select=="2"){
		system("cls");
		string id,password;
		cout<<"Please, enter an id: "<<endl;
		cin>>id;
 		cout<<"Please, enter a password: "<<endl;
 		cin>>password;
 		if(student.getId()==id && student.getPassword()==password){
 			login=true;
 			cout<<"You have succesfully logged in."<<endl;
 			break;
		 }
		 else{
			cout<<"Id or password is incorrect. "<<endl;
			system("cls");
		 }
		
	}	
	if(select=="0"){
		system("cls");
		cout<<"You are leaving out of the system. "<<endl;
		break;
		system("cls");
	}
	if(select=="3"){
		system("cls");
		int idcode;	
		cout<<"Please, enter your idcode: "<<endl;
		cin>>idcode;
		if(student.getIdCode()==idcode){
			cout<<"Your informations is correct. Please, enter your new password: "<<endl;
			string password;
			cin>>password;
			student.setPassword(password);
			cout<<"Your password has succesfully changed."<<endl;
			system("cls");
			
		}
		else{
			cout<<"Your idcode is incorrect. You return back to the main menu."<<endl;
			system("cls");
		}
	}
	}
}
int main() {
Students student;

		
		LoginMenu(student);
		if(login){
			MainMenu(student);
		}
		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
