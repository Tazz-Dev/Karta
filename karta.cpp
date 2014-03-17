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
printf("Wybierz rasê:\n1 - Cz³owiek\n2 - Mutant\n3 - Ghoul\n4 - Pó³ Mutant\n5 - Wyjœcie\n");
scanf("%d",&rasa);
switch(rasa)
{
case 1: {
     hum:
     system("cls");
     printf("Cz³owiek\nPunktów do rozdysponowania: 40\n\n");
     st:
     printf("Podaj wspó³czynnik Si³y: ");scanf("%i",&st);
     if(st<1 ||st>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto st;}
     pe:
     printf("Podaj wspó³czynnik Percepcji: ");scanf("%i",&pe);
     if(pe<1 ||pe>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto pe;}
     en:
     printf("Podaj wspó³czynnik Wytrzyma³oœci: ");scanf("%i",&en);
     if(en<1 ||en>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto en;}
     ch:
     printf("Podaj wspó³czynnik Charyzmy: ");scanf("%i",&ch);
     if(ch<1 ||ch>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto ch;}
     in:
     printf("Podaj wspó³czynnik Inteligencji: ");scanf("%i",&in);
     if(in<1 ||in>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto in;}
     ag:
     printf("Podaj wspó³czynnik Zrêcznoœci: ");scanf("%i",&ag);
     if(ag<1 ||ag>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto ag;}
     lk:
     printf("Podaj wspó³czynnik Szczêœcia: ");scanf("%i",&lk);
     if(lk<1 || lk>10){printf("Podany wspó³czynnik jest poza racjonalnymi wartoœciami\n");st=0;goto lk;}
     sum=st+pe+en+ch+in+ag+lk;hp=15+st+(2*en);ac=ag;ap=5+(ag/2);carry=25+(25*st);md=st-5;if(md<1){md=1;}
	 pr=5*en;rr=2*en;sq=2*pe;hr=en/3;crit=lk;sp=5+(2*in);sguns=5+(4*ag);bguns=2*ag;ewep=2*ag;unarm=30+(2*(ag+st));
	 mele=20+(2*(ag+st));thro=4*ag;faid=2*(pe+en);doc=5+pe+in;sneak=5+(3*ag);lockp=10+pe+ag;steal=3*ag;traps=10+pe+ag;
	 science=4*in;rep=3*in;pilot=2*(ag+pe);speech=5*ch;barter=4*ch;gam=5*lk;outdor=2*(en+in);
     system("cls");
     if(sum<40){printf("Rozdysponowane punkty: %i z 40\n\nNie wszystkie punkty zosta³y rozdysponowane, spróbuj ponownie\n\n",sum);system("PAUSE");goto hum;}
     if(sum>40){printf("Rozdysponowane punkty: %i z 40\n\nRozdysponowano za du¿o punktów, spróbuj ponownie\n\n",sum);system("PAUSE");goto hum;}
	 wybor:
		 system("cls");
     printf("Ka¿da postaæ mo¿e mieæ do 2 umiejêtnoœci, s¹ to tak zwane smaczki dodaj¹ce\nharakteru naszemu bohaterowi\nWybierz umiejêtnoœci\n1 - lista\n2 - wybór umiejêtnoœci\n3 - Pomiñ/kontynuuj\n\n");scanf("%d",&trait);
     switch(trait){//traity lista
     case 1:{
     system("cls");
	 printf("1 - Ciê¿ka rêka - Uderzasz mocniej, co nie znaczy ¿e lepiej.\n     Twoje ataki s¹ bardzo brutalne, ale brakuje im finezji.\n     Rzadko trafiasz krytycznie, ale w walce wrêcz zawsze zadajesz\n     wiêcej obra¿eñ.\n\n");
	 printf("2 - Dobrotliwoœæ - W okresie dorastania twoja postaæ uczy³a \n     siê rzeczy niezwi¹zanych z walk¹. Zaczynasz grê z obni¿onymi \n     umiejêtnoœciami bojowymi, ale Pierwsza pomoc, Lekarz i Handel \n     s¹ znacznie zwiêkszone.\n\n");
	 printf("3 - Drobna postura - Twoja postaæ ma delikatn¹ budowê cia³a,\n     ale ci to nie przeszkadza. Nie mo¿esz dŸwigaæ zbyt wiele, ale\n     masz wiêksz¹ Zrêcznoœæ.\n\n");
	 printf("4 - Fatum -  Wszystkim wokó³ ciebie bardzo czêsto przytrafiaj¹\n     siê krytyczne niepowodzenia w walce, ale niestety ciebie te¿ to\n     dotyczy!\n\n");
	 printf("5 - Finezja -  Atakujesz bardzo finezyjnie. Zadajesz mniej obra¿eñ,\n     ale za to czêœciej uzyskujesz trafienia krytyczne.\n\n");
	 system("pause");
	 system("cls");
	 printf("6 - Jednorêcznoœæ - Jedna rêka twojej postaci jest bardzo dominuj¹ca. \n     Œwietnie radzisz sobie z broni¹ jednorêczn¹, ale bronie \n     dwurêczne sprawiaj¹ ci k³opot\n\n");
	 printf("7 - Kamikadze -  Poniewa¿ nie zwracasz uwagi na zagro¿enie, zadajesz \n     znacznie powa¿niejsze obra¿enia. Twoja klasa pancerza jest \n     ograniczona tylko do zbroi, któr¹ nosisz, ale ka¿dy twój \n     atak zadaje wiêcej obra¿eñ.\n\n");
	 printf("8 - Miêœniak - Dzia³asz trochê wolniej, ale masz za to wiêksze rozmiary. \n     Mo¿e nie trafiasz wrogów zbyt czêsto, ale za to poczuj¹ \n     si³ê twoich ciosów! Liczba twoich punktów akcji zostaje \n     obni¿ona, ale wzros³a twoja si³a\n\n");
	 printf("9 - Odpornoœæ a chemiê - Chemikalia dzia³aj¹ na ciebie tylko przez po³owê \n     normalnego czasu, ale ryzyko, ¿e siê od nich uzale¿nisz \n     tak¿e jest o 50%% mniejsze.\n\n");
	 printf("10 - Podatnoœæ na chemiê - £atwiej uzale¿niasz siê od chemikaliów. Szansa, \n     ¿e uzale¿nisz siê od substancji chemicznych jest dwukrotnie \n     wy¿sza, ale szybciej otrz¹sasz siê z ich szkodliwych efektów.\n\n");
	 system("pause");
	 system("cls");
	 printf("11 - Szybki metablizm -  Masz dwukrotnie szybsz¹ przemianê materii. Oznacza to, \n     ¿e twoja postaæ jest mniej odporna na promieniowanie \n     i trucizny, ale jej rany goj¹ siê szybciej\n\n");
	 printf("12 - Szybkostrzelnoœæ -  Nie masz czasu, by wykonaæ mierzony atak, poniewa¿ \n     strzelasz szybciej ni¿ przeciêtni ludzie. Atak z broni palnej \n     lub rzucanej kosztuje ciê o jeden punkt akcji mniej.\n\n");
	 printf("13 - Talent - Twoja postaæ ma wielkie wrodzone zdolnoœci, wiêc nie spêdza³a \n    zbyt wiele czasu na rozwijaniu swoich umiejêtnoœci. Wszystkie \n     podstawowe wspó³czynniki zostaj¹ zwiêkszone o 1, ale tracisz 10% w \n     ka¿dej umiejêtnoœci i co poziom otrzymujesz o 5 punktów mniej na ich rozwój.\n\n");
	 printf("14 - Wyszkolenie -  Poniewa¿ twoja postaæ poœwiêci³a wiêcej czasu ni¿ inni \n    na rozwijanie swoich umiejêtnoœci, co poziom otrzymuje 5 dodatkowych \n    punktów. Ale z tego te¿ powodu, nie zdobywasz tylu specjalnych \n     umiejêtnoœci co zwykle. Profity uzyskujesz o jeden poziom póŸniej.\n\n");
	 system("pause");goto wybor;}
     case 2:{
     printf("wybór umiejêtnoœci\n");
	 printf("Podaj numer pierwszej umiejêtnosci: ");
	 scanf("%d",&t1);
	      switch(t1){
                case 0:{trait1="BRAK                   ";break;}
                case 1:{trait1="Ciê¿ka rêka            ";md+=4;break;}
                case 2:{trait1="Dobrotliwoœæ           ";faid+=20;doc+=20;speech+=20;barter+=20;sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10;break;}
                case 3:{trait1="Drobna postura         ";ag++;carry=15+(15*st);break;}
                case 4:{trait1="Fatum                  ";break;}
                case 5:{trait1="Finezja                ";crit+=10;break;}
                case 6:{trait1="Jednorêcznoœæ          ";break;}
                case 7:{trait1="Kamikadze              ";ac=0;sq+=5;break;}
                case 8:{trait1="Miêœniak               ";st+=2;ap-=2;break;}
                case 9:{trait1="Odpornoœæ a chemiê     ";break;}
                case 10:{trait1="Podatnoœæ na chemiê    ";break;}
                case 11:{trait1="Szybki metablizm       ";hr+=2;pr=0;rr=0;break;}
                case 12:{trait1="Szybkostrzelnoœæ       ";break;}
                case 13:{trait1="Talent                 ";st++;pe++;en++;ch++,in++,ag++,lk++,sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10,thro-=10;faid-=10;doc-=10;sneak-=10;lockp-=10;steal-=10;traps-=10;science-=10;rep-=10;pilot-=10;speech-=10;barter-=10;gam-=10;outdor-=10;sp-=5;break;}
                case 14:{trait1="Wyszkolenie            ";sguns+=10;bguns+=10;ewep+=10;unarm+=10;mele+=10,thro+=10;faid+=10;doc+=10;sneak+=10;lockp+=10;steal+=10;traps+=10;science+=10;rep+=10;pilot+=10;speech+=10;barter+=10;gam+=10;outdor+=10;sp+=5;break;}
     }
	 printf("Podaj numer drugiej umiejêtnosci: ");
	 scanf("%d",&t2);
          switch(t2){
                case 0:{trait2="BRAK                   ";break;}
                case 1:{trait2="Ciê¿ka rêka            ";md+=4;break;}
                case 2:{trait2="Dobrotliwoœæ           ";faid+=20;doc+=20;speech+=20;barter+=20;sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10;break;}
                case 3:{trait2="Drobna postura         ";ag++;carry=15+(15*st);break;}
                case 4:{trait2="Fatum                  ";break;}
                case 5:{trait2="Finezja                ";crit+=10;break;}
                case 6:{trait2="Jednorêcznoœæ          ";break;}
                case 7:{trait2="Kamikadze              ";ac=0;sq+=5;break;}
                case 8:{trait2="Miêœniak               ";st+=2;ap-=2;break;}
                case 9:{trait2="Odpornoœæ a chemiê     ";break;}
                case 10:{trait2="Podatnoœæ na chemiê    ";break;}
                case 11:{trait2="Szybki metablizm       ";hr+=2;pr=0;rr=0;break;}
                case 12:{trait2="Szybkostrzelnoœæ       ";break;}
                case 13:{trait2="Talent                 ";st++;pe++;en++;ch++,in++,ag++,lk++,sguns-=10;bguns-=10;ewep-=10;unarm-=10;mele-=10,thro-=10;faid-=10;doc-=10;sneak-=10;lockp-=10;steal-=10;traps-=10;science-=10;rep-=10;pilot-=10;speech-=10;barter-=10;gam-=10;outdor-=10;sp-=5;break;}
                case 14:{trait2="Wyszkolenie            ";sguns+=10;bguns+=10;ewep+=10;unarm+=10;mele+=10,thro+=10;faid+=10;doc+=10;sneak+=10;lockp+=10;steal+=10;traps+=10;science+=10;rep+=10;pilot+=10;speech+=10;barter+=10;gam+=10;outdor+=10;sp+=5;break;}
     }
     
     if(t1==t2){printf("Nie mo¿na powtórzyæ umiejêtnosci!! Proszê zmieniæ jedn¹ umiejêtnoœæ!\n");t2=0;system("pause");goto wybor;}
     goto wybor;
     case 3:{break;}
     }       
//tagi
}
system("cls");
	printf("\n\n\n\t+-------------+---------+---------+-----+--------------+--------+\n");
	printf("\t|Si³a         | %i\t|HP       | %i\t|Small guns    | %i%%\t|[ ]\n",st,hp,sguns);
	printf("\t|Percepcja    | %i\t|AC       | %i\t|Big guns      | %i%%\t|[ ]\n",pe,ac,bguns);
	printf("\t|Wytrzyma³osæ | %i\t|AP       | %i\t|Energy weapons| %i%%\t|[ ]\n",en,ap,ewep);
	printf("\t|Charyzma     | %i\t|Carry    | %i\t|Unarmed       | %i%%\t|[ ]\n",ch,carry,unarm);
	printf("\t|Inteligencja | %i\t|MD       | %i\t|Melee weapons | %i%%\t|[ ]\n",in,md,mele);
	printf("\t|Zrêcznosæ    | %i\t|PR       | %i\t|Throwing      | %i%%\t|[ ]\n",ag,pr,thro);
	printf("\t|Szczêscie    | %i\t|RR       | %i\t|First aid     | %i%%\t|[ ]\n",lk,rr,faid);
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
     printf("Pó³ Mutant");
     
     
     break;
     }
case 5: return EXIT_SUCCESS;
default: {printf("\nNie ma takiej opcji\n");system("PAUSE");goto start;}
}
cout<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
