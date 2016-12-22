name_validation(){
	string name;
	Enter_name:
	scanf("%s", name);
	for(int i=0; i<strlen(name); i++){
		if(enter_name(i)==0||name(i)==1||name(i)==2||name(i)==3||name(i)==4||name(i)==5||name(i)==6||name(i)==7||name(i)==8||name(i)==9||name(i)==44||name(i)==46){
			printf("¬ведены неккоректные данные, попробуйте снова\n");
			system("pause");
			goto Enter_name;
		};
	};
	return(name);
}
