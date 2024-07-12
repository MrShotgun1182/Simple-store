/froshgah ba 5 kala v por az ezafijat

#include <iostream>

using namespace std ; 

int main (){
	int glue[2] = {500 , 10} , marker [2] = {1100 , 8 } , pen [2] = {1800 , 6 } , pencil [2] = {1300 , 7} , ruler [2] = {800 , 4 };
	int cod , tedad , sum , sum_takhfif=0 , sum_akhar , bazargarmi =0 ;
	char yes_no = 'y' , y_n = 'y' , istgah_kardan = 'y';
	
	cout << "          _________________________________________________"	<< endl ;
	cout << "          | **** |       |       |       |        |       |"	<< endl ;		
	cout << "          | ***  |       |       |       |        |       |"	<< endl ;	
	cout << "          | **   |       |       |       |        |       |"	<< endl ;	
	cout << "          | *   *| glue  |marker |pen    | pencil |ruler  |"	<< endl ;	
	cout << "          |    **|       |       |       |        |       |"	<< endl ;	
	cout << "          |   ***|  (15) | (16)  | (17)  |  (18)  | (19)  |"	<< endl ;	
	cout << "          |  ****|       |       |       |        |       |"	<< endl ;	
	cout << "          |______|_______|_______|_______|________|_______|"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |gheima|       |       |       |        |       |"	<< endl ;	
	cout << "          |t     |  500  |  1100 | 1800  |  1300  |  800  |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |______|_______|_______|_______|________|_______|"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |takhfi|  10%  |   8%  |   6%  |   7%   |  4%   |"	<< endl ;	
	cout << "          |f     |       |       |       |        |       |"	<< endl ;	
	cout << "          |      |       |       |       |        |       |"	<< endl ;
	cout << "          |      |       |       |       |        |       |"	<< endl ;	
	cout << "          |______|_______|_______|_______|________|_______|"	<< endl ;	
	cout << endl << endl ;	
			
		
	while (y_n == 'y')
	{
	while(yes_no == 'y')
	{
		cout << "cod mahsol ra vared konid : ";
		cin >> cod ;
		if ( cod != 15 && cod !=16 && cod !=17 && cod !=18 && cod !=19 && cod != 144)
		{
			break ;
		}
		cout << "tedad mahsol ra vared konid : ";
		cin >> tedad ; 
		if ( tedad < 1)
		{
			cout << "tedad zir sefr nadarim -_- " << endl ;
			break ;
		}
		if (cod==15)
		{
			cout << "esm mahsol : glue " << endl << "gheimat mahsol : "<< glue[0]  << endl << "takhfif sar har kala : "<< glue[1]<< "%" << endl;
			sum += tedad * glue[0];
			sum_takhfif += (glue[0]*glue[1]/100)*tedad;
			sum_akhar += (tedad * glue[0])-((glue[0]*glue[1]/100)*tedad);
			cout << "majmo gheimat bedon takhfif : "<<tedad*glue[0] << endl << "majmo takhifif shoma sar in kala : "<<(glue[0]*glue[1]/100)*tedad<<endl<< "gheimat majmo in kala ba takhfif : " << (tedad * glue[0])-((glue[0]*glue[1]/100)*tedad);
			
		}
		if (cod == 16)
		{
			cout << "esm mahsol : marker " << endl << "gheimat mahsol : "<< marker[0]  << endl << "takhfif sar har kala : "<< marker[1]<< "%" << endl;
			sum += tedad * marker[0];
			sum_takhfif += (marker[0]*marker[1]/100)*tedad;
			sum_akhar += (tedad * marker[0])-((marker[0]*glue[1]/100)*tedad);
			cout << "majmo gheimat bedon takhfif : "<<tedad*marker[0] << endl << "majmo takhifif shoma sar in kala : "<<(marker[0]*marker[1]/100)*tedad<<endl<< "gheimat majmo in kala ba takhfif : " << (tedad * marker[0])-((marker[0]*marker[1]/100)*tedad);
		}
		if ( cod == 17 )
		{
			cout << "esm mahsol : pen " << endl << "gheimat mahsol : "<< pen[0]  << endl << "takhfif sar har kala : "<< pen[1]<< "%" << endl;
			sum += tedad * pen[0];
			sum_takhfif += (pen[0]*pen[1]/100)*tedad;
			sum_akhar += (tedad * pen[0])-((pen[0]*pen[1]/100)*tedad);
			cout << "majmo gheimat bedon takhfif : "<<tedad*pen[0] << endl << "majmo takhifif shoma sar in kala : "<<(pen[0]*pen[1]/100)*tedad<<endl<< "gheimat majmo in kala ba takhfif : " << (tedad * pen[0])-((pen[0]*pen[1]/100)*tedad);
		}
		if ( cod == 18)
		{
			cout << "esm mahsol : pencil " << endl << "gheimat mahsol : "<< pencil[0]  << endl << "takhfif sar har kala : "<< pencil[1]<< "%" << endl;
			sum += tedad * pencil[0];
			sum_takhfif += (pencil[0]*pencil[1]/100)*tedad;
			sum_akhar += (tedad * pencil[0])-((pencil[0]*pencil[1]/100)*tedad);
			cout << "majmo gheimat bedon takhfif : "<<tedad*pencil[0] << endl << "majmo takhifif shoma sar in kala : "<<(pencil[0]*pencil[1]/100)*tedad<<endl<< "gheimat majmo in kala ba takhfif : " << (tedad * pencil[0])-((pencil[0]*pencil[1]/100)*tedad);
		}
		if ( cod == 19)
		{
			cout << "esm mahsol : ruler " << endl << "gheimat mahsol : "<< ruler[0]  << endl << "takhfif sar har kala : "<< ruler[1]<< "%" << endl;
			sum += tedad * ruler[0];
			sum_takhfif += (ruler[0]*ruler[1]/100)*tedad;
			sum_akhar += (tedad * ruler[0])-((ruler[0]*ruler[1]/100)*tedad);
			cout << "majmo gheimat bedon takhfif : "<<tedad*ruler[0] << endl << "majmo takhifif shoma sar in kala : "<<(ruler[0]*ruler[1]/100)*tedad<<endl<< "gheimat majmo in kala ba takhfif : " << (tedad * ruler[0])-((ruler[0]*ruler[1]/100)*tedad);
		}
		if (cod == 144)
		{
			cout << "ghorbani (gift khalse)" << endl <<  "shabani (sardar)"<< endl <<"khalajeeeee "<<endl <<  "nabati (4 saat)" << endl <<  "sorosh <3" << endl <<  "sam -_- " << endl<<"yazdan (tahesh ke chi)" <<endl <<"saleh <3 * 2"<<endl <<"A    ? " << endl;
			break ;
		}
		cout << endl <<"aia hamchenan kharid darid : (y/n) ";
		cin >> yes_no ;
	}
	cout << "majmo kharid shoma bedon takfif : "<< sum << endl << "majmo takhfif shoma az in kharid : "<< sum_takhfif << endl << "majmo kalaha ba takhfif : "<< sum_akhar << endl << endl << endl ;
	
	if (sum == 0 )
	{
		cout << "kharid nakardi kheir nabini !!! "<< endl ;
	}
	if (sum < 10000 && sum >1)
	{
		cout << "chera kam kharid kardi !!! " << endl;
	}
	if ( sum > 10000 )
	cout << "az kharid shoma mochakerim XD " << endl ;
	
		if (bazargarmi == 1)
	{
		cout << endl <<"bazam takhfif mikhai : ";
		cin >>istgah_kardan ;
		if (istgah_kardan == 'y')
		{
			cout << endl << endl << endl << "boro khoda rozit ro jaie dige bede "<< endl ;
		}
		break ;
	}
	
	if (bazargarmi == 0)
	{
		cout << endl << endl << endl << endl << endl << endl << "age dobare bargardi be kharid takhfif ham ro do barabar mikonam 0_0  : (y/n)"<< endl ;
		cin >> y_n ;
		if (y_n == 'n')
		{
			break ;
		}
		if (y_n == 'y')
		{
			glue[1] = 20 ;
			marker[1] = 16 ;
			pen[1]=12 ;
			pencil[1]= 14 ;
			ruler[1] = 8 ;
			bazargarmi ++ ;
			yes_no = 'y' ;
		}
		
	}
	}
	int x ;
	
		cout << "be barname az 1 ta 5 chand midi : ";
		cin >> x ;
		
		while (x!=5)
		{
			if (x < 1 || x > 5)
			{
				cout << "migam adad bishtar az 1 v bozorg tar az 5 (biger than 1 and smaler than 5 )"<< endl ;
				cin >> x ;
			}
			cout << "kam dadi bishtar bede : "<< endl ;
			cin >> x ; 
		}
		cout << "dalil in ke be ma 5 dadid ro migid : " << endl ;
		cin >> x ;
		cout << "ok shokolat bazi dar naiar "<< endl << "dafe bad sai kon 6 bedi"<< endl;
	
	return 0 ;
}










