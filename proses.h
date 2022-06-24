void Pointer::Proses(){
    nim = new int[data];
    nama = new string[data];
  	int temp;
    string temp_nama;
	  for (int i=1;i<data;i++){
		  for(int j=data-1;j>=1;j--){
			  if(nimMhs[j]<nimMhs[j-1]){
				  temp=nimMhs[j];
				  nimMhs[j]=nimMhs[j-1];
				  nimMhs[j-1]=temp;
          
				  temp_nama=namaMhs[j];
				  namaMhs[j]=namaMhs[j-1];
				  namaMhs[j-1]=temp_nama;
			  }
		  }
	  }
    for(int i=0; i<data; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama += 1;
    }
  }
