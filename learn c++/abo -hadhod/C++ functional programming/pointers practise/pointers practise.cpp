#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
	int basement;
	basement = 300000;
	int home;
	home = 200000;
	int* Location;
	Location = &basement;
	//ana hena 3mlt save ll location bta3 el basement f variable esmo location 
	// y3ni mn el a5r el location bta3 el variable 3bara 3n data type byt5zn f continer esmo el pointer 
	//zy msln el arqam 3bara 3n data type btt5z nf continer esmo int 

	printf("The location of The basemenst in the memory is %p\n", Location);
	// tmam an keda 3ndi access 3l el location bta3 el basement  
	// lw 3ayz yb2a 3ndi access 3l el basement nfso b2a 
	printf("the basement value equal = %12d\n", basement);
	//ana hena keda 3mlt 7aga esmha derefrence y3ni y3tbr 4lt "&" mn abl el basement w b access el basement
	printf("the basement value equal = %12d\n", *Location);
	*Location = 50000000;
	printf("the basement value equal = %12d\n", *Location);
	printf("the basement value equal = %12d\n", basement);


	//refrences VS pointers
	
	// elfekra en ana lw 3mlt variabble refrence w edeto el value bta3t variable tani keda ana lesa 3ndi variabl wa7d bs 3mltlo alias
	//y3ni 4of keda
	// ************memory***********
	// LW 3mlt int &x=a;
	//					int a , x:
	//						value : 10 
	//						Location : 084hefh09 (msln d ay hbl)	
	//
	// howa nfs el variable b nfs el values b nfs el location bs leh esmen.
	// f ana hena m2dr4 b3d keda a5le &x =b 
	//

	int& altern = basement;

	printf("altern =%12d\n", altern);
	printf("altern Location =%p\n", &altern);

	// bos hena keda b2a 
	/*

	&altern = home; 

	*/
	//hena da error m4 hynf3 
	//el 7l enna nst5dm el pointer
	// ******************************************memory*********************************
	// 
	//		int basement , altern:
	//			value : 10								<------------
	//			Location : 084hefh09 (msln d ay hbl)				 |
	//																 |
	//																 |
	//															int* Location :
	//																 Value : 084hefh09 (Location el basement)
	//																 Location: 90udhw0ew0 (location mo5tlf )
	// 
	//															
	// 
	// 
	//		int home :
	//			value : 20
	//			Location : 009d7809wey (msln ay hbl )
	// 
	// *****************************************************************************************************
	//		
	//		int basement , altern:
	//			value : 10								
	//			Location : 084hefh09 (msln d ay hbl)				 
	//																 
	//																 
	//															int* Location :
	//																 Value : 009d7809wey (Location el home)
	//																 Location: 90udhw0ew0 (location mo5tlf )
	// 
	//																		|		
	//																		|
	//		int home :														|
	//			value : 20									<----------------
	//			Location : 009d7809wey (msln ay hbl )
	//
	// n2dr n5li nfs el pointer yt8yr w y4awr 3la 7agat mo5talfa 3ks el refrence bylz2 fl7aga el 4awr 3leha fl awl 

	Location = &home;

	printf("The location of The home in the memory is %p\n", Location);
	printf("the home value equal = %12d\n", *Location);
	return 0;
}
