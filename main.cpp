#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
start:
system("cls");
int rasa,trait=0;
int st,pe,en,ch,in,ag,lk,sum=0;
int hp,ac,ap,carry,md,pr,rr,sq,hr,crit,sp=0;
int sguns,bguns,ewep,unarm,mele,thro,faid,doc,sneak,lockp,steal,traps,science,rep,pilot,speech,barter,gam,outdor;
int t1,t2;
string trait1,trait2;
printf("Wybierz ras�:\n1 - Cz�owiek\n2 - Mutant\n3 - Ghoul\n4 - P� Mutant\n5 - Wyj�cie\n");
scanf("%d",&rasa);
switch(rasa)
{
case 1: {
     hum:
     system("cls");
     printf("Cz�owiek\nPunkt�w do rozdysponowania: 40\n\n");
     st:
     printf("Podaj wsp�czynnik Si�y: ");scanf("%i",&st);
     if(st<1 ||st>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto st;}
     pe:
     printf("Podaj wsp�czynnik Percepcji: ");scanf("%i",&pe);
     if(pe<1 ||pe>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto pe;}
     en:
     printf("Podaj wsp�czynnik Wytrzyma�o�ci: ");scanf("%i",&en);
     if(en<1 ||en>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto en;}
     ch:
     printf("Podaj wsp�czynnik Charyzmy: ");scanf("%i",&ch);
     if(ch<1 ||ch>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto ch;}
     in:
     printf("Podaj wsp�czynnik Inteligencji: ");scanf("%i",&in);
     if(in<1 ||in>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto in;}
     ag:
     printf("Podaj wsp�czynnik Zr�czno�ci: ");scanf("%i",&ag);
     if(ag<1 ||ag>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto ag;}
     lk:
     printf("Podaj wsp�czynnik Szcz�cia: ");scanf("%i",&lk);
     if(lk<1 || lk>10){printf("Podany wsp�czynnik jest poza racjonalnymi warto�ciami\n");st=0;goto lk;}
     sum=st+pe+en+ch+in+ag+lk;hp=15+st+(2*en);ac=ag;ap=5+(ag/2);carry=25+(25*st);md=st-5;if(md<1){md=1;}
	 pr=5*en;rr=2*en;sq=2*pe;hr=en/3;crit=lk;sp=5+(2*in);sguns=5+(4*ag);bguns=2*ag;ewep=2*ag;unarm=30+(2*(ag+st));
	 mele=20+(2*(ag+st));thro=4*ag;faid=2*(pe+en);doc=5+pe+in;sneak=5+(3*ag);lockp=10+pe+ag;steal=3*ag;traps=10+pe+ag;
	 science=4*in;rep=3*in;pilot=2*(ag+pe);speech=5*ch;barter=4*ch;gam=5*lk;outdor=2*(en+in);
     system("cls");
     if(sum<40){printf("Rozdysponowane punkty: %i z 40\n\nNie wszystkie punkty zosta�y rozdysponowane, spr�buj ponownie\n\n",sum);system("PAUSE");goto hum;}
     if(sum>40){printf("Rozdysponowane punkty: %i z 40\n\nRozdysponowano za du�o punkt�w, spr�buj ponownie\n\n",sum);system("PAUSE");goto hum;}
	 wybor:
		 system("cls");
     printf("Ka�da posta� mo�e mie� do 2 umiej�tno�ci, s� to tak zwane smaczki dodaj�ce\nharakteru naszemu bohaterowi\nWybierz umiej�tno�ci\n1 - lista\n2 - wyb�r umiej�tno�ci\n3 - Pomi�/kontynuuj\n\n");scanf("%d",&trait);
     switch(trait){//traity lista
     case 1:{
     system("cls");
	 printf("1 - Ci�ka r�ka - Uderzasz mocniej, co nie znaczy �e lepiej.\n     Twoje ataki s� bardzo brutalne, ale brakuje im finezji.\n     Rzadko trafiasz krytycznie, ale w walce wr�cz zawsze zadajesz\n     wi�cej obra�e�.\n\n");
	 printf("2 - Dobrotliwo�� - W okresie dorastania twoja posta� uczy�a \n     si� rzeczy niezwi�zanych z walk�. Zaczynasz gr� z obni�onymi \n     umiej�tno�ciami bojowymi, ale Pierwsza pomoc, Lekarz i Handel \n     s� znacznie zwi�kszone.\n\n");
	 printf("3 - Drobna postura - Twoja posta� ma delikatn� budow� cia�a,\n     ale ci to nie przeszkadza. Nie mo�esz d�wiga� zbyt wiele, ale\n     masz wi�ksz� Zr�czno��.\n\n");
	 printf("4 - Fatum -  Wszystkim wok� ciebie bardzo cz�sto przytrafiaj�\n     si� krytyczne niepowodzenia w walce, ale niestety ciebie te� to\n     dotyczy!\n\n");
	 printf("5 - Finezja -  Atakujesz bardzo finezyjnie. Zadajesz mniej obra�e�,\n     ale za to cz�ciej uzyskujesz trafienia krytyczne.\n\n");
	 system("pause");
	 system("cls");
	 printf("6 - Jednor�czno�� - Jedna r�ka twojej postaci jest bardzo dominuj�ca. \n     �wietnie radzisz sobie z broni� jednor�czn�, ale bronie \n     dwur�czne sprawiaj� ci k�opot\n\n");
	 printf("7 - Kamikadze -  Poniewa� nie zwracasz uwagi na zagro�enie, zadajesz \n     znacznie powa�niejsze obra�enia. Twoja klasa pancerza jest \n     ograniczona tylko do zbroi, kt�r� nosisz, ale ka�dy tw�j \n     atak zadaje wi�cej obra�e�.\n\n");
	 printf("8 - Mi�niak - Dzia�asz troch� wolniej, ale masz za to wi�ksze rozmiary. \n     Mo�e nie trafiasz wrog�w zbyt cz�sto, ale za to poczuj� \n     si�� twoich cios�w! Liczba twoich punkt�w akcji zostaje \n     obni�ona, ale wzros�a twoja si�a\n\n");
	 printf("9 - Odporno�� a chemi� - Chemikalia dzia�aj� na ciebie tylko przez po�ow� \n     normalnego czasu, ale ryzyko, �e si� od nich uzale�nisz \n     tak�e jest o 50%% mniejsze.\n\n");
	 printf("10 - Podatno�� na chemi� - �atwiej uzale�niasz si� od chemikali�w. Szansa, \n     �e uzale�nisz si� od substancji chemicznych jest dwukrotnie \n     wy�sza, ale szybciej otrz�sasz si� z ich szkodliwych efekt�w.\n\n");
	 system("pause");
	 system("cls");
	 printf("11 - Szybki metablizm -  Masz dwukrotnie szybsz� przemian� materii. Oznacza to, \n     �e twoja posta� jest mniej odporna na promieniowanie \n     i trucizny, ale jej rany goj� si� szybciej\n\n");
	 printf("12 - Szybkostrzelno�� -  Nie masz czasu, by wykona� mierzony atak, poniewa� \n     strzelasz szybciej ni� przeci�tni ludzie. Atak z broni palnej \n     lub rzucanej kosztuje ci� o jeden punkt akcji mniej.\n\n");
	 printf("13 - Talent - Twoja posta� ma wielkie wrodzone zdolno�ci, wi�c nie sp�dza�a \n    zbyt wiele czasu na rozwijaniu swoich umiej�tno�ci. Wszystkie \n     podstawowe wsp�czynniki zostaj� zwi�kszone o 1, ale tracisz 10% w \n     ka�dej umiej�tno�ci i co poziom otrzymujesz o 5 punkt�w mniej na ich rozw�j.\n\n");
	 printf("14 - Wyszkolenie -  Poniewa� twoja posta� po�wi�ci�a wi�cej czasu ni� inni \n    na rozwijanie swoich umiej�tno�ci, co poziom otrzymuje 5 dodatkowych \n    punkt�w. Ale z tego te� powodu, nie zdobywasz tylu specjalnych \n     umiej�tno�ci co zwykle. Profity uzyskujesz o jeden poziom p�niej.\n\n");
	 system("pause");goto wybor;}
     case 2:{
     printf("wyb�r umiej�tno�ci\n");
	 printf("Podaj numer pierwszej umiej�tnosci: ");
	 scanf("%d",&t1);
	      switch(t1){
                case 0:{trait1="BRAK                   ";break;}
                case 1:{trait1="Ci�ka r�ka            ";md+=4;break;}
                case 2:{trait1="Dobrotliwo��           ";faid+=20;doc+=20;speech+=20;barter+=20;sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10;break;}
                case 3:{trait1="Drobna postura         ";ag++;carry=15+(15*st);break;}
                case 4:{trait1="Fatum                  ";break;}
                case 5:{trait1="Finezja                ";crit+=10;break;}
                case 6:{trait1="Jednor�czno��          ";break;}
                case 7:{trait1="Kamikadze              ";ac=0;sq+=5;break;}
                case 8:{trait1="Mi�niak               ";st+=2;ap-=2;break;}
                case 9:{trait1="Odporno�� a chemi�     ";break;}
                case 10:{trait1="Podatno�� na chemi�    ";break;}
                case 11:{trait1="Szybki metablizm       ";hr+=2;pr=0;rr=0;break;}
                case 12:{trait1="Szybkostrzelno��       ";break;}
                case 13:{trait1="Talent                 ";st++;pe++;en++;ch++,in++,ag++,lk++,sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10,thro-=10;faid-=10;doc-=10;sneak-=10;lockp-=10;steal-=10;traps-=10;science-=10;rep-=10;pilot-=10;speech-=10;barter-=10;gam-=10;outdor-=10;sp-=5;break;}
                case 14:{trait1="Wyszkolenie            ";sguns+=10;bguns+=10;ewep+=10;unarm+=10;mele+=10,thro+=10;faid+=10;doc+=10;sneak+=10;lockp+=10;steal+=10;traps+=10;science+=10;rep+=10;pilot+=10;speech+=10;barter+=10;gam+=10;outdor+=10;sp+=5;break;}
     }
	 printf("Podaj numer drugiej umiej�tnosci: ");
	 scanf("%d",&t2);
          switch(t2){
                case 0:{trait2="BRAK                   ";break;}
                case 1:{trait2="Ci�ka r�ka            ";md+=4;break;}
                case 2:{trait2="Dobrotliwo��           ";faid+=20;doc+=20;speech+=20;barter+=20;sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10;break;}
                case 3:{trait2="Drobna postura         ";ag++;carry=15+(15*st);break;}
                case 4:{trait2="Fatum                  ";break;}
                case 5:{trait2="Finezja                ";crit+=10;break;}
                case 6:{trait2="Jednor�czno��          ";break;}
                case 7:{trait2="Kamikadze              ";ac=0;sq+=5;break;}
                case 8:{trait2="Mi�niak               ";st+=2;ap-=2;break;}
                case 9:{trait2="Odporno�� a chemi�     ";break;}
                case 10:{trait2="Podatno�� na chemi�    ";break;}
                case 11:{trait2="Szybki metablizm       ";hr+=2;pr=0;rr=0;break;}
                case 12:{trait2="Szybkostrzelno��       ";break;}
                case 13:{trait2="Talent                 ";st++;pe++;en++;ch++,in++,ag++,lk++,sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10,thro-=10;faid-=10;doc-=10;sneak-=10;lockp-=10;steal-=10;traps-=10;science-=10;rep-=10;pilot-=10;speech-=10;barter-=10;gam-=10;outdor-=10;sp-=5;break;}
                case 14:{trait2="Wyszkolenie            ";sguns+=10;bguns+=10;ewep+=10;unarm+=10;mele+=10,thro+=10;faid+=10;doc+=10;sneak+=10;lockp+=10;steal+=10;traps+=10;science+=10;rep+=10;pilot+=10;speech+=10;barter+=10;gam+=10;outdor+=10;sp+=5;break;}
     }
     
     if(t1==t2){printf("Nie mo�na powt�rzy� umiej�tnosci!! Prosz� zmieni� jedn� umiej�tno��!\n");t2=0;system("pause");goto wybor;}
     goto wybor;
     case 3:{break;}
     }       
//tagi
}
system("cls");
	printf("\n\n\n\t+-------------+---------+---------+-----+--------------+--------+\n");
	printf("\t|Si�a         | %i\t|HP       | %i\t|Small guns    | %i%%\t|[ ]\n",st,hp,sguns);
	printf("\t|Percepcja    | %i\t|AC       | %i\t|Big guns      | %i%%\t|[ ]\n",pe,ac,bguns);
	printf("\t|Wytrzyma�os� | %i\t|AP       | %i\t|Energy weapons| %i%%\t|[ ]\n",en,ap,ewep);
	printf("\t|Charyzma     | %i\t|Carry    | %i\t|Unarmed       | %i%%\t|[ ]\n",ch,carry,unarm);
	printf("\t|Inteligencja | %i\t|MD       | %i\t|Melee weapons | %i%%\t|[ ]\n",in,md,mele);
	printf("\t|Zr�cznos�    | %i\t|PR       | %i\t|Throwing      | %i%%\t|[ ]\n",ag,pr,thro);
	printf("\t|Szcz�scie    | %i\t|RR       | %i\t|First aid     | %i%%\t|[ ]\n",lk,rr,faid);
	printf("\t+-------------+---------+Sequence | %i\t|Doctor        | %i%%\t|[ ]\n",sq,doc);
	printf("\t|%s|HR       | %i\t|Sneak         | %i%%\t|[ ]\n",trait1.c_str(),hr,sneak);
	printf("\t|%s|Crit     | %i\t|Lockpick      | %i%%\t|[ ]\n",trait2.c_str(),crit,lockp);
	printf("\t|\t\t\t|SP       | %i\t|Steal         | %i%%\t|[ ]\n",sp,steal);
	printf("\t+---------------------------------+-----+Traps         | %i%%\t|[ ]\n",traps);
	printf("\t|                                       |Science       | %i%%\t|[ ]\n",science);
	printf("\t|                                       |Repair        | %i%%\t|[ ]\n",rep);
	printf("\t|                                       |Pilot         | %i%%\t|[ ]\n",pilot);
	printf("\t|                                       |Speach        | %i%%\t|[ ]\n",speech);
	printf("\t|                                       |Barter        | %i%%\t|[ ]\n",barter);
	printf("\t|                                       |Gambling      | %i%%\t|[ ]\n",gam);
	printf("\t|                                       |Outdorsman    | %i%%\t|[ ]\n",outdor);
	printf("\t+---------------------------------------+--------------+--------+\n");
break;
     }
case 2: {

     printf("Mutant");
     
     
     break;
     }
case 3: {
     printf("Ghoul");
     
     
     break;
     }
case 4: {
     printf("P� Mutant");
     
     
     break;
     }
case 5: return EXIT_SUCCESS;
default: {printf("\nNie ma takiej opcji\n");system("PAUSE");goto start;}
}
cout<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
