void Pointer::Input(){
    cout << "\n"<<endl;
    cout << "   Jumlah Data Finalis -> ";
    cin >> data;
    cout << "\n\n=========================================="<<endl;
    cout << "   Masukkan Data Finalis Parmatika"<<endl;
    cout << "==========================================\n\n";
    for (int i=0; i<data; i++){
      cout << "Masukkan NIM : ";
      cin >> nimMhs[i];
      cin.ignore();
      cout << "Masukkan Nama : ";
      getline(cin,namaMhs[i]);
      cout<<"\n"<<endl;
    }
  }
