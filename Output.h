void Pointer::Output(){
    nim -=5 ;
    nama -= 5;
    cout<<"Menampilkan data di dalam pointer: "<<endl;
    cout << "=========================================="<<endl;
    for (int i=0; i<5; i++) {
      cout << "\nNama Finalis ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNIM : " ;
      cout << *nim ;
      nim += 1;
    }
    cout<<endl;
  }