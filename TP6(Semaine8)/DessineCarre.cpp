for (i=1; i<=cote; i=i+1)
 {

     DessineLigne();
     
     if (nombre_max > n && !milieu)
     {
	 nombre_max = nombre_max - 1;
	 nombre_milieu = nombre_milieu - 1;
	 nombre = nombre - 1;
     }
     else
     {
	 if (nombre_max > n && milieu)
	 {
	     nombre_max = nombre_max + 1;
	     nombre_milieu = nombre_milieu + 1;
	     nombre = nombre + 1;
	 }
	 else
	 {
	     milieu = true;
	     nombre_max = nombre_max + 1;
	     nombre_milieu = nombre_milieu + 1;
	     nombre = nombre + 1;
	 }
     }
     cout << endl;
 }
