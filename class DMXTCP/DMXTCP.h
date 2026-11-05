
   #include "IRClientTCP.h"
   class DMXTCP
{
private :
	char trame[512] ;
	IRClientTCP mon_Client;

public :
	DMXTCP() ;
	void ModifierCanal(unsigned short canal, unsigned short valeur) ;
	void Envoyer(char IP[16], unsigned short port) ;
	void FullOn();
	void FullOff();
	void Demonstration();
} ;