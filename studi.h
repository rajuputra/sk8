using namespace std;
class Studi{
private:
float a[4][4];
float hasil[4];
float total1,total2,total3,total4;

public:
  //Tata
  void input(){
    for(int i=0; i<3; i++){
      cout << " Masukkan nilai T.Komputer tahun "<<2015+i <<" : ";
      cin >> a[i][0];
    }
    for (int i=0; i<3; i++){
      cout << " Masukkan nilai T.Elektro tahun "<<2015+i<<" : ";
      cin >> a[i][1];
    }
    for (int i=0; i<3; i++){
      cout << " Masukkan nilai T.Pemesinan tahun "<<2015+i<<" : ";
      cin >> a[i][2];
    }
    for (int i=0; i<3; i++){
      cout << " Masukkan rata-rata kelulusan per tahun "<<2015+i<<" : ";
      cin >> a[i][3]; 
    }
  }
  //Raju
  void proses(){
    for(int i=0; i<3;i++){
    	total1 =  total1 + a[i][0];
	}
	for(int i=0; i<3;i++){
    	total2 =  total2 + a[i][1];
	}
	for(int i=0; i<3;i++){
    	total3 =  total3 + a[i][2];
	}
	for(int i=0; i<3;i++){
    	total4 =  total4 + a[i][3];
	}
	a[3][0] = total1/3;
	a[3][1] = total2/3;
	a[3][2] = total3/3;
	a[3][3] = total4/3;
  }
  //Khulfani
  void output(){
  	cout << "================================================================================= " << endl;
    cout << " Tahun Prodi\t||T.Komputer\t||T.Elektro\t\t||T.Pemesinan\t\t||Rata-rata Kelulusan "<<endl;
	cout << "================================================================================= " << endl; 
    for (int i=0; i<4; i++){
		cout << 2015+i <<"\t\t||";
    	for (int j=0; j<4; j++){
    		cout << a[i][j] << "\t\t||	";
		}
		cout << endl;
		cout << "================================================================================= " << endl;
	}
    
  }
};
