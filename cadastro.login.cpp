#include <iostream>
#include <string>
using namespace std;

int main (){
    string email, emailcorreto;
    string name;
    string cpf;
    string tlf;
    string senha, senhacorreta;
    string namep;
    string raca;
    string sex;
    string idd;
    string especi;
    string namp;
    string rac;
    string sexo;
    string idade; 
    string espc;

    cout<<"\n Olá somos  a HealthCare Pet System.\n";

    cout<<"\n Tem interesse em utilizar nossos serviços?";

    cout<<"\n Então realize seu cadastro";

    cout<<"\n \n Preencha os dados a baixo e realize seu cadastro. \n";

    cout<<"\n Insira um endereço de e-mail \n";
    cout<<"-->: ";
    //cin>>email;
    getline(cin, email);

    cout<<"\n Insira seu nome completo \n";
    cout<<"-->: ";
    //cin>>name;
    getline(cin, name);

    cout<<"\n Insira seu cpf \n";
    cout<<"-->: ";
    //cin>>cpf;
    getline(cin, cpf);

    cout<<"\n Telefone \n";
    cout<<"-->: ";
    //cin>>tlf;
    getline(cin, tlf);

    cout<<"\n Crie uma senha \n";

    cout<<"\n formule uma senha \n";
    cout<<"-->: ";
    //cin>>senha;
    getline(cin, senha);

    cout<<"\n Verificar informações\n";

    cout<<"\n CADASTRO FEITO COM SUCESSO!\n";

    cout<<"\n Obs: será enviado um código de verificação via e-mail para validar seu cadastro.\n";
    
    cout<<"\n Olá! seu cadastro foi realizado com sucesso tutor.\n";
    
    cout<<"\n Agora preencha as informações do seu Pet\n";
    
    cout<<"\n insira o nome do Pet\n";
    cout<<"-->: ";
    //cin>>namep;
    getline(cin, namep);
    
    cout<<"\n raça\n";
    cout<<"-->: ";
    //cin>>raca;
    getline(cin, raca);
    
    cout<<"\n sexo\n";
    cout<<"-->: ";
    //cin>>sex;
    getline(cin, sex);
    
    cout<<"\n idade\n";
    cout<<"-->: ";
    //cin>>idd;
    getline(cin, idd);
    
    cout<<"\n especie\n";
    cout<<"-->: ";
    //cin>>especi;
    getline(cin, especi);
    
    int pet2;
    
    while(pet2<1 || pet2>2){
    	cout<<"\n Deseja adicionar mais um pet?\n";
    	cout<<"\n 1 - SIM\n";
    	cout<<"\n 2 - NÃO\n";
    	cin>>pet2;
    	cin.ignore();
	}
	switch(pet2){
		case 1:
			cout<<"\n insira o nome do Pet\n";
			cout<<"-->: ";
			//cin>>namp;
			getline(cin, namp);
			
			cout<<"\n raça\n";
			cout<<"-->: ";
			//cin>>rac;
			getline(cin, rac);
			
			cout<<"\n sexo\n";
			cout<<"-->: ";
			//cin>>sexo;
			getline(cin, sexo);
			
			cout<<"\n idade\n";
			cout<<"-->: ";
			//cin>>idade;
			getline(cin, idade);
			
			cout<<"\n especie\n";
			cout<<"-->: ";
			//cin>>espc;
			getline(cin, espc);
			
			cout<<"\nPARA VERIFICAR OS SEUS DADOS E OS DADOS DO PET, FAÇA O LOGIN\n";
			
			break;
			case 2:
			cout<<"\n PARA VERIFICAR OS SEUS DADOS E OS DADOS DO PET, FAÇA O LOGIN\n";
			break;
		}
		int logar;

    while(logar<1 || logar>2){
        cout<<"\nVOCÊ DESEJA FAZER O LOGIN?\n";
        cout<<"\n 1 - SIM\n";
        cout<<"\n 2 - NÃO\n";
        cin>>logar;
        cin.ignore();
    }
    switch(logar){
        case 1:
            while(email!=emailcorreto || senha!=senhacorreta){
                cout<<"\n Realize seu login\n";

                cout<<"\n Insira seu e-mail\n";
                cout<<"-->: ";
                //cin>>emailcorreto;
                getline(cin, emailcorreto);

                cout<<"\n Insira sua senha\n";
                cout<<"-->: ";
                //cin>>senhacorreta;
                getline(cin, senhacorreta);

                if(email!=emailcorreto || senha!=senhacorreta){
                    cout<<"\n E-mail ou senha incorretos, tente novamente!\n";
                }
                else{
                    cout<<"\n Olá usuário\n";

                    cout<<"\n aqui você pode acessar as informações referentes aos seus dados e dados dos seus pets.";
                    
                }
            }
            break;
        case 2:
            cout<<"VOLTE SEMPRE!";
            break;

    }
    cout<<"\n\nNome: "<<name;
    cout<<"\n\nCPF: "<<cpf;
    cout<<"\n\nCelular: "<<tlf;
    cout<<"\n\ne-mail: "<<email;
    
    cout<<"\n\nNome: "<<namep;
    cout<<"\n\nIdade: "<<idd;
    cout<<"\n\nRaça: "<<raca;
    cout<<"\n\nEspecie: "<<especi;
    
    cout<<"\n\nNome: "<<namp;
    cout<<"\n\nIdade: "<<idade;
    cout<<"\n\nRaça: "<<rac;
    cout<<"\n\nEspecie: "<<espc;
			
}
