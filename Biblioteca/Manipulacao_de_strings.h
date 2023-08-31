int VerificaV (char a[100]){
	int i;
	for(i=0;i!='\0';i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'&&a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'){
			return 1;
		}
		else
		    return 0;
	}
}
