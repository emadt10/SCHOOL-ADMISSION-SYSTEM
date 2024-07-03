# include <iostream>	
# include <fstream>
# include <string>
using namespace std;

void Get_Student_Data();

void Input_Data();

    //START OF MAIN BODY
    
int main()
{
   
   //INTRODUCTION 
   
   cout<<"                       &&           &            @               @                            "<<endl;
   cout<<"                      &  &          & &        &    &&&&& &&&&&     &&&&&&  &     &           "<<endl;
   cout<<"                     &    &         & &&      && &  &     &      &  &    &  & &   &           "<<endl;
   cout<<"                    &&&&&&&&   &&&&&& & &    & & &  &&&&& &&&&&  &  &    &  &  &  &           "<<endl;
   cout<<"                   &        &  &    & &  &  &  & &      &     &  &  &    &  &   & &           "<<endl;
   cout<<"                  &          & &&&&&& &    &   & &  &&&&& &&&&&  &  &&&&&&  &    &&           "<<endl<<endl<<endl; 
   
   cout<<"                       &&&&&&&                                                                 "<<endl;
   cout<<"                       &         &    &  &&&&&& &&&&&&&&& &&&&&&&  &         &                 "<<endl;
   cout<<"                       &          &  &   &          &     &        & &     & &                 "<<endl;
   cout<<"                       &&&&&&&      &    &&&&&&     &     &&&&&&&  &  &   &  &                 "<<endl;
   cout<<"                             &     &          &     &     &        &   & &   &                 "<<endl;
   cout<<"                       &&&&&&&    &      &&&&&&     &     &&&&&&&  &    &    &                 "<<endl<<endl;
   cout<<"..............................................................................................."<<endl;
   cout<<"   ........................................................................................    "<<endl;
   cout<<"       ................................................................................        "<<endl;
   cout<<"                                                                                               "<<endl;
   cout<<"                                          PRESENTED BY                                         "<<endl;
   cout<<"                                           Emad Tariq                                          "<<endl;
   cout<<"                                           Ammarah Ali                                         "<<endl;
   cout<<"                                           Ahsan Naeem                                         "<<endl;
   cout<<"                                                                                               "<<endl;  
   cout<<"       ................................................................................        "<<endl; 
   cout<<"   ........................................................................................    "<<endl;
   cout<<"..............................................................................................."<<endl<<endl;  
    
   
   
    //START OF THE PROGRAM
	
	//asking username and password for security of the system and data
	
	string username="bahria22";
	
	string password="bimcs";
	
	string input1;
	
	string input2;
	
	cout<<"ENTER USERNAME AND PASSWORD FOR ACCESSING THE SYSTEM"<<endl<<endl;
	
	cout<<"USERNAME=";
	
	cin>>input1;
	
	cout<<"PASSWORD=";
	
	cin>>input2;
	
	if(username==input1 && password==input2)
	{
			
			//SELECTION OF FUNCTION OR OF TASK WHICH IS GOING TO BE PERFORMED
			
	char select;
	
    string fileName;
    
    cout<<endl<<"PRESS E FOR NEW ADMISSION OR PRESS F FOR VIEWING STUDENT DATA"<<endl;
    
    cin>>select;
    
    // USING IF ELSE TO SPECIFY THE CONDITION
    
    if(select=='E' || select=='e')
    {
         		
         		
        Input_Data();  //ffunction calling which is described below and already mentioned above
   
	}
	
	else if (select=='F' || select=='f')
	{
		
	    cout<<"To Get Info"<<endl; 
		Get_Student_Data();    // function calling which is described below and already mentioned before main
		
	}
	
    else
	{
    	
    	cout<<"Please Enter Correct Option..!!";
    	
	}
}
    else{
    	
    	cout<<"INCORRECT CREDINTELS";
    	
	}
	
return 0;	
}

   //END OF MAIN BODY
   
   
   //START OF FIRST FUNCTION
   
  
   //FUNCTION FOR STORING STUDENT DATA

void Input_Data()
{
	
	//USING ARRAY TO STORE THE DATA OF SPECIFIC AMOUNT OF STUDENTS
	
	char student_data[3000];
	string  fileName,temp;	
	getline(cin,temp);
	
	//USING FILING TO STORES THAT ARRAY INTO A PARTICULAR FILE
	
    cout<<"......................."<<endl;
   		cout<<"Enter Student Roll#=";
        getline(cin,fileName);
   ofstream rw(fileName.c_str());           // writes data out to a data file.

    //HERE WE CALLED FILE NAME AS FILENAME.C
    
    
	//STORING NAME OF STUDENT
    

	cout<<"Enter Student name=";
	cin.getline(student_data, 2000);
    rw<<"Name : "<<student_data<<endl;
    
    
	//STORING FATHERS NAME OF STUDENT
    
    
	cout<<"Enter The father name=";
	cin.getline(student_data, 2000);
    rw<<" Father Name : "<<student_data<<endl;
    
	
	//STUDENTS CNIC
	
    
    cout<<"Enter the CNIC=";
	cin.getline(student_data, 2000);
    rw<<"CNIC :"<<student_data<<endl;
    
   
    //STUDENTS DATE OF BIRTH 
    
    
    cout<<"Enter the date of birth=";
	cin.getline(student_data, 2000);
    rw<<"Date of birth:"<<student_data<<endl;
    
	//STORING ADDRESS OF STUDENT 
	
	
	cout<<"Enter Address =";
	cin.getline(student_data, 2000);
    rw<<"Address :"<<student_data<<endl;

	//STUDENTS CONTACT NUMBER
	
		
	cout<<"Enter Contact No =";
	cin.getline(student_data, 2000);
    rw<<"Phone :"<<student_data<<endl;
    
    
	//STUDENTS RELIGION
	
    
    cout<<"Enter the religion  =";
	cin.getline(student_data, 2000);
    rw<<"religion :"<<student_data<<endl;
    
    
	//STUDENTS BLOOD GROUP
	
    
    cout<<"Enter the blood group  =";
	cin.getline(student_data, 2000);
    rw<<"blood group :"<<student_data<<endl;
    
    
	//TOTAL MARKS IN LAST CLASS WHICH HE PASSED
	
    
    cout<<"Total marks=";
	cin.getline(student_data, 2000);	
    rw<<"Total last class marks= :"<<student_data<<endl;
    
   
    //OBTAINED MARKS IN LAST CLASS
    
    
	cout<<"Marks Obtained =";
	cin.getline(student_data, 2000);
    rw<<"Marks Obtained:"<<student_data<<endl;
    
    
    
	//STUDENT EMAIL ADRESS
	
    
    cout<<"Enter the email address =";
	cin.getline(student_data, 2000);
    rw<<"email address :"<<student_data<<endl;
    
   
    //STUDENT ADMISSION DATE FROM WHEN HIS REGISTRATION IS COMPLETED
    
    
    cout<<"Enter the admission date =";
	cin.getline(student_data, 2000);
    rw<<"Admission date :"<<student_data<<endl;
    
    
	//FOR WHICH CLASS the student IS TAKING ADMISSION
	
    
 	cout<<"class=";
	cin.getline(student_data, 2000);
    rw<<"class :"<<student_data<<endl;
    
   
    //FEE PER MONTH
    
    
	cout<<"Enter Fees Per Month=";
	cin.getline(student_data, 2000);
    rw<<"Fees Per Month=:"<<student_data<<endl;
    
    
	//MESSAGE
	
    
    cout<<endl<<"Data recorded successfull"<<endl<<endl;
    
   
    //FILING CLOSE
    
    //FUNCTION CLOSE
    
    rw.close();
    
    //DATA STORATION BODY COMPLETED
    
    
    
    // AGAIN REPEATING THAT IF ELSE BODY TO CHECK WHETHER IF 
	//ADMIN IS GOING TO ENTER ANOTHER STUDENT OR ELSE HE WANTS
	//TO VIEW THE RECORD OF THE PREVIOUS STUDENT HE SAVED
	
	
	char select;
	 
    cout<<"PRESS E FOR NEW ADMISSION OR PRESS F FOR VIEWING STUDENT DATA"<<endl;
    cin>>select;
    if(select=='E' || select=='e')
    {
         		
        Input_Data();  //ffunction calling 	
   
	}
	else if (select=='F' || select=='f')
	{
	    cout<<"To Get Info"<<endl; 
		Get_Student_Data();    // function calling
	}
    else{
    	
    	cout<<"Please Enter Correct Option..!!";
	}
	
}


//START OF SECOND FUNCTION


void Get_Student_Data()
{
	
	//CALLING THAT ABOVE FILE AGAIN TO READ DATA FROM IT
	
    ifstream rw;               // that reads in data from a data file
    
	string lines;
	
	string fileName,temp ;
	
    getline(cin,temp);
    
 
 cout<<"......................."<<endl;
 
 
   
   //ROLL NUMBER WILL ENTERED TO MATCH WITH THE DATA STORED RECENTLY IN ABOVE FILE
   
   
 cout<<"Enter Student Roll to find#=";
        getline(cin,fileName);
 
    
	//OPENING FILE TO READ DATA
    
   
   rw.open(fileName.c_str());	
   
   
    //NOW THAT IF ELSE CHECK WHETHER THE ENTERD ROLL NUMBER MATCHED OR NOT
    
    
    //IF ROLL NUMBER MATCHED THEN PRINT THAT ROLL NUMBERS WHOLE DATA HERE
    
	if(rw.is_open())
	{
		
		while (getline(rw,lines))
		{
			
			cout<<lines<<endl<<endl<<endl;
			
		}
		
	}
	else{
		
		cout<<"NO STUDENT FOUND";
		
		
	 }
	
	 rw.close();  //FILE CLOSED
	 
	 
	 cout<<"THANK YOU!";
	 
}
    //END OF SECOND FUNCTION
    
    //NOW WE PUT ALL THESE FUNCTIONS IN ABOVE MAIN BODY TO PERFROM TASKS
    

