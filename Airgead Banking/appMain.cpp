#include "appMain.h"
#include <iostream.h>


//Keith Ellison
//Airgead Banking


//Declare variables
//--Initial investment
int iniInvest;

//--Monthly deposit
int monDepo;

//--Annual interest
int annInter;

//--Number of years -that the investment is planned to grow
int numYears;
int years = 1;
//’years’ counts UP towards the total number of years with one being the lowest possible

int anyKey = 0;


//Declare functions
int entryLoop();
int mainLoop();


//Begin the ENTRY loop
int entryLoop(

//Take user inputs here that appear on a similar page
cout << "********************************************”;
cout << “************** Data Input*********************”;
iniInvest = cin >> “Initial Investment Amount:”;
monDepo = cin >> “Monthly Deposit:”;
annInter = cin >> “Annual Interest:”;
numYears = cin >> “Number of Years:”;

cout << “********************************************”;
cout << “************** Data Input*********************”;
cout << “Initial Investment Amount:” << iniInvest;
cout << “Monthly Deposit:” << monDepo;
cout << “Annual Interest:” << annInter;
cout << “Number of Years:” << numYears;


anyKey = cin >> “Press any key to continue...”;

if(anyKey > 0){
	balanceANDInterest{};
}

)
return;

balanceANDinterest{

cout << “ Balance and Interest Without Additional Monthly Deposits”;
cout << “=============================================”;
cout << “Year” << “  Year End Balance  ” << “Year End Earned Interest”;
cout << “------------------------------------------------------------------------------”;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;

cout << “   Balance and Interest With Additional Monthly Deposits”;
cout << “=============================================”;
cout << “Year” << “  Year End Balance  ” << “Year End Earned Interest”;
cout << “------------------------------------------------------------------------------”;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
cout << numYears << yeBalance << yeInterest;
}
return;
