#include <iostream>
#include "IRClientTCP.h"
#include <windows.h>
#include "DMXTCP.h"
using namespace std;

main()
{
   DMXTCP monDMXTCP;
   int pan;

   while(true)
   {
	   cout<<"Saisir la valeur du premier canal : ";
	   cin>>pan;

	   monDMXTCP.ModifierCanal(1,pan);
	   monDMXTCP.Envoyer("172.20.21.14", 4123);
   }
  return 0;
}