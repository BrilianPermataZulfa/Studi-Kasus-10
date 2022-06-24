void Pointer::Proses(){
  	cout << "=========================================="<<endl;
  	cout << "Proses menyimpan data ke alamat pointer..."<<endl;
  	cout << "=========================================="<<endl;
    nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama+= 1;
    }
  }