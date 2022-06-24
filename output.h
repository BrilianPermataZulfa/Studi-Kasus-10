void Pointer::Output(){
    nim -= data ;
    nama -= data; 
    cout << "\n\n=========================================="<<endl;
    cout<<"   Menampilkan data di dalam pointer: "<<endl;
    cout << "=========================================="<<endl;
    for (int i=0; i<data; i++) {
      cout << "\n\nNama Finalis ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNIM : " ;
      cout << *nim ;
      nim += 1;
    }
    cout<<endl;
  }
