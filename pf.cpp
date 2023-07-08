/////////////////////////////////////////////////////////// headerfiles
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/////////////////////////////////////////////////////////// global variables
//variables deleration
int id,phone,fe,no_cour;
float CGPA;
string name,email,address,password;
/////////////////////////////////////////////////////////// functions
//function decleratiom of UMT Registration system
void login();
void registr();
void cGPA();
void pre_rag_course();
void fee();
//function decleration for registraton window
void fee_check();
void pre_rag_check();
void no_course();
//function decleration for student information window  
void search();
void delet();
void update();
/////////////////////////////////////////////////////////// main
//main function
int main (){
    int choice;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<"\n************************ UMT Registration system ************************"<<endl;
    cout<<"* press 1 to login:                                                     *";
    cout<<"\n* press 2 for registration:                                             *";
    cout<<"\n* press 3 for fee defaulters:                                           *";
    cout<<"\n* press 4 for GPA:                                                      *";
    cout<<"\n* press 5 for course:                                                   *";
    cout<<"\n* press 6 Exit:                                                         *";
    cout<<"\n*************************************************************************"<<endl;
    cout<<endl;
    cout<<"Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        fee();
        break;
    case 4:
        cGPA();
        break;
    case 5:
        pre_rag_check();
        main();
        break;
    case 6:
        return 0;
        break;
    default:
        cout << endl;
		cout <<"**************** wrrog selected choice ****************\n";
		system("pause");
		main();
        break;
    }
}
/////////////////////////////////////////////////////////// definations
//defination of all functions
void pre_rag_course(){
    int choice;
    cout<<"The Pre Requisite course";
    cout<<"\nprogramming fundamental (pf) is pre requisite course of Object Orented programming "<<endl;
    cout<<"Enter 1 if you are pass in programing fundamental (pf)"<<endl;
    cin>>choice;
    if( choice == 1){
        no_course();
    }else{
        cout<<"\nCan not registor in OOP :( !!! "<<endl;
        system("pause");
    }
    main();
}
void pre_rag_check(){
    int pass_check;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nPrograming fundamental (PF) is pre reguisite course of Object Oriented Programing (OOP)"<<endl;
    cout<<"\nIf you are passed in Programing fundamental press 1: "<<endl;
    cout<<"\nEnter your choice: ";
    cin>>pass_check;
    if (pass_check == 1 ){
        cout<<endl;
        cout<<"\nSuccessfuly registered in OOP !!!!!!"<<endl;
        cout<<endl;
    }else{
        cout<<endl;
        cout<<"\nYou are Not registered :( !!!!!!"<<endl;
        cout<<endl;
    } 
}
void no_course(){
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nEnter your CGPA: ";
    cin >>CGPA;
    if( CGPA >= 3.0 && CGPA <= 4.0){
        cout<<"\ncongragulation you are successfuly registered in all courses !!!!!!!!"<<endl;
        no_cour = 5;
    }else if (CGPA >= 2.0){
        cout<<"\ncongragulation you are successfuly registered in three (3) courses !!!!!!!!"<<endl;
        no_cour = 3;
    }else{
        cout<<"\ncongragulation you are successfuly registered in two (2) courses !!!!!!!!"<<endl;
        no_cour = 2;
    }
    system("pause");      
}
//using concept of file handling searching
void fee(){
    string line,f;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nThe Name and ID's of fee defaulters are as follows: "<<endl;
    fstream fee_defaulters("fee.txt");
    while (fee_defaulters >> f)
    {
        while(getline(fee_defaulters,line)){ 

            cout<<"\n************< student data >************"<<endl;
            cout <<"\n"<<f<<' '<<line<<endl; 
            cout<<endl;
            cout << "****************************************\n";
            cout<<endl;
        }
    }
    cout<<endl;
    system("pause");
    main();
}
void registr(){
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nEnter your ID: ";
    cin>>id;
    cout<<"\nEnter your Name: ";
    cin>>name;
    cout<<"\nEnter your CGPA: ";
    cin>>CGPA;
    cout<<"\nEnter your Email: ";
    cin>>email;
    cout<<"\nEnter your Phone: ";
    cin>>phone;
    cout<<"\nEnter your Address: ";
    cin>>address;
    cout<<"\nEnter your Password: ";
    cin>>password;    
    cout<<"\nEnter your fee status as 1 for paid othewise notpaid: ";
    cin>>fe;
    if(fe == 1){
        fstream student_data;
        student_data.open("studentdata.txt",ios::app);
        student_data << ' '<<id <<' '<< name <<' '<< phone <<' '<<address <<' '<<email<<' '<<CGPA<<' '<<fe<<endl;
        fstream reg;
        reg.open("login_data.txt",ios::app);
        reg << id <<' '<<password<<endl;
        fstream GPA;
        GPA.open("CGPA.txt",ios::app);
        GPA << id <<' '<< CGPA<<endl;
        cout<<"\nSuccessfuly registered!!!!!!"<<endl;
        main();
    }else{
        cout<<"\nYou are a fee defulter, Not registored :(";
        fstream fee_defaulters;
        fee_defaulters.open("fee.txt",ios::app);
        fee_defaulters << id <<' '<<name<<' '<<"fee_defaulter"<<endl;
        main();
    }
}
void login(){
	int exist = 0,u;
	string  log_pass, p;
	system("cls");
	cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout << endl;
	cout << "Enter you student ID : ";
	cin >> id;
	cout << endl;
	cout << "Enter your password : ";
	cin >> log_pass;
	ifstream file("login_data.txt");
	while (file >> u >> p)
	{
		if (u == id && p == log_pass)
		{
			exist = 1;
		}
	}
	file.close();
	if (exist == 1)
	{
        int choice;
        cout<<endl;
		cout << "\nLogin Successfully!" << endl;
		cout << endl;
		system("pause");
		system("cls");
        cout<<endl;
        cout<<endl;
        cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
        cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
        cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
        cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
        cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
        cout<<endl;
        cout<<endl;
		cout << endl;
		cout << "**************************** welcome ***************************** \n";
		cout << endl;
		cout << "******************************************************************";
        cout<<"\n*                                                                *";
        cout<<"\n*   press 1 for registration window:                             *";
        cout<<"\n*   press 2 for student information window:                      *";
        cout<<"\n*                                                                *";
        cout<<"\n******************************************************************";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\n*********************** Registration Window ***********************";
                //fee_defaulter_check

                ////////////////
                // pass_check
                pre_rag_check();
                //////////////////////
                //course registration check
                no_course();
                main();
            break;
        case 2:
            int ch;
            cout<<"\n******************* student information Window ********************";
            cout << endl;
			cout << "\nselect 1 to search student by its ID. \n";
			cout << endl;
			cout << "select 2 if you want to delete student record.\n";
			cout << endl;
            cout << "select 3 if you want to update of student record.\n";
			cout << endl;
			cout << "select 4 for main menu.\n";
			cout << endl;
			cout << "Enter your choice : ";
			cin >> ch;
			switch (ch) {																		// SWITCH FOR SEARCHING DATA
			    case 1: {
                    search();
                    main();
				    break;
			    }
			    case 2: {
                    delet();
                    main();
                    break;
	    		}
               case 3:
                    update();
                    break;
			    case 4:
			    {
				    system("cls");
				    main();
				    break;
			    }
			    default:
			    {
				    cout << endl;
				    cout << "**************** wrrog selected choice ****************\n";
				    system("pause");
				    main();
				    break;
			    }
            
            }
        }
    }
	else
	{
		cout << "\n*** Login ERROR ***\n";
		cout << endl;
		system("pause");
		main();
	}    
}
void search(){
    string line;
    int id,f_id;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout <<"\nEnter the ID: ";
    cin>>id;
    fstream studentdata("studentdata.txt");
    if(studentdata.is_open())
    {
        while(!studentdata.eof())
        {      
            while (studentdata >> f_id)
            {
                getline (studentdata,line);//
                if(id == f_id ) // this was my theory for searching records but does not display anything to the console
                {
                    cout<<"\n************< student data >************"<<endl;
                    cout<<"\n"<<id <<' '<< line <<endl;
                    cout<<endl;
                    cout << "****************************************\n";
                    system("pause");
                    break;
                }
            }
                         
        }
        studentdata.close();
    }
    else{
        cout << "File error\n";
    }
}
void cGPA (){
    string line;
    int id,f_id;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"||    //\\\\    || ||====== ||       ||====== ||======|| ||\\\\        //||"<<endl;
    cout<<"||   //  \\\\   || ||       ||       ||       ||      || || \\\\      // ||"<<endl;
    cout<<"||  //    \\\\  || ||====== ||       ||       ||      || ||  \\\\    //  ||"<<endl;
    cout<<"|| //      \\\\ || ||       ||       ||       ||      || ||   \\\\  //   ||"<<endl;
    cout<<"||//        \\\\|| ||====== ||====== ||====== ||======|| ||    \\\\//    ||                  599 Edition"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nonly the non fee defaulter can see his//her CGPA"<<endl;
    cout <<"\nEnter the ID: ";
    cin>>id;
    fstream CGPA("CGPA.txt");
    if(CGPA.is_open())
    {
        while(!CGPA.eof())
        {      
            while (CGPA >> f_id)
            {
                getline (CGPA,line);//
                if(id == f_id ) // this was my theory for searching records but does not display anything to the console
                {
                    cout<<"\n************< student CGPA >************"<<endl;
                    cout<< "\n"<<id <<' '<< line <<endl;
                    cout<<endl;
                    cout << "****************************************\n";
                    system("pause");
                    break;
                }
            }
                         
        }
        CGPA.close();
    }
    else{
        cout << "File error\n";
    }
    main();
}
//logical issues
void delet(){
    fstream studentdata("studentdata.txt");
    int id,i;
    string line1,line, deleteline;
    cout << endl;
    cout << " Enter the ID that you want to delete : ";
    cin >> id;
    while(!studentdata.eof())
    {      
        while (studentdata >> i)
        {
            getline (studentdata,line);//
            if(id != i ) // this was my theory for searching records but does not display anything to the console
            {
                fstream temp("temp.txt",ios::app);
                temp.open("temp.txt");
                if(temp.is_open()){
                    cout<<"\nupdating..."<<endl;
                    temp << i <<' '<<line <<endl;
                    cout<<"\ntemp open"<<endl;
                }else{
                    cout<<"\ntemp not open"<<endl;
                }
            }else{
                cout<<"\nDATA DELETED"<<endl;
            }
        }                  
    } 
    studentdata.close();
    system("pause");
    //remove("studentdata.txt");
    //rename("temp.txt","studentdata.txt");
}
void update(){
    fstream studentdata("studentdata.txt");
    fstream temp("temp.txt",ios::app);
    temp.open("temp.txt");
    int id,i;
    string line1,line, deleteline;
    cout << endl;
    cout << " Enter the ID that you want to update : ";
    cin >> id;
    while(!studentdata.eof())
    {      
        while (studentdata >> i)
        {
            getline (studentdata,line);//
            if(id != i ) // this was my theory for searching records but does not display anything to the console
            {
                if(temp.is_open()){
                    cout<<"\nupdating..."<<endl;
                    temp << i <<' '<<line <<endl;
                    cout<<"\ntemp open"<<endl;
                }else{
                    cout<<"\ntemp not open"<<endl;
                }
            }else{
                cout<<endl;
                cout<<endl;
                cout<<"\nEnter your ID: ";
                cin>>id;
                cout<<"\nEnter your Name: ";
                cin>>name;
                cout<<"\nEnter your CGPA: ";
                cin>>CGPA;
                cout<<"\nEnter your Email: ";
                cin>>email;
                cout<<"\nEnter your Phone: ";
                cin>>phone;
                cout<<"\nEnter your Address: ";
                cin>>address;
                cout<<"\nEnter your Password: ";
                cin>>password;    
                cout<<"\nEnter your fee status as 1 for paid othewise notpaid: ";
                cin>>fe;
                if(fe == 1){
                    temp << ' '<<id <<' '<< name <<' '<< phone <<' '<<address <<' '<<email<<' '<<CGPA<<' '<<fe<<endl;
                    fstream reg;
                    reg.open("login_data.txt",ios::app);
                    reg << id <<' '<<password<<endl;
                    fstream GPA;
                    GPA.open("CGPA.txt",ios::app);
                    GPA << id <<' '<< CGPA<<endl;
                    cout<<"\nSuccessfuly updated!!!!!!"<<endl;
                    main();
                }else{
                    cout<<"\nYou are a fee defulter, Not updated :(";
                    fstream fee_defaulters;
                    fee_defaulters.open("fee.txt",ios::app);
                    fee_defaulters << id <<' '<<name<<' '<<"fee_defaulter"<<endl;
                    main();
                }
            }
        }                  
    } 
    cout<<"\ncheck2"<<endl;
    temp.close();
    studentdata.close();
    system("pause");
    //remove("studentdata.txt");
    //rename("temp.txt","studentdata.txt");

}
/////////////////////////////////////////////////////////// the end
