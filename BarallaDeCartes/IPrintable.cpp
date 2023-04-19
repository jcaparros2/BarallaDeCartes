#include "IPrintable.h"

ostream& operator<<(ostream& os, IPrintable& pr) 
{  
	pr.print_me(os);  
	return os;  
};