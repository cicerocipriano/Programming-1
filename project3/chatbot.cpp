#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>

using namespace std;

void saudacao_bot () {

  char saudacao[3][90] = {"Olah, meu nome eh Zodbot. Eu sei falar sobre signos do zodiaco. Qual eh o seu nome?",
			"Bom dia, me chamo Zodbot. Eu sei falar sobre signos do zodiaco. Qual eh o seu nome?",
			"Oi! Meu nome eh Zodbot. Eu sei falar sobre signos do zodiaco. Qual eh o seu nome?"};

  cout << saudacao[rand() %3] << endl;

  return;
}

void despedida_bot () {

  char despedida[3][90] = {"Ateh logo! Foi um prazer conversar com voce.",
			   "Ateh mais! Foi um otimo conversar com voce.",
			   "Tchau! Foi um prazer falar com voce."};

  cout << despedida[rand() % 3] << endl;

  return;
}

void ler_nome (char fala1[], char nome[], bool *tchau) {
  
  const int n_pre_nome_desp = 21;
  
  char pre_nome[n_pre_nome_desp][25] = {"Chamo-me ", "chamo-me ", " chamo ",
					"Eh ", " eh ", "eh ",
					"E ", " e ", "e ",
					"Tchau", "tchau", "Ateh logo",
					"ateh logo", "Ate logo", "ate logo",
					"Ateh mais", "ateh mais", "Ate mais",
					"ate mais", "Adeus", "adeus"};
  
  bool semnome = true;
  
  while (semnome = true) {

    cin.getline(fala1,50);
        
    char *a;
    int tampn = 0;
    
    for (int i = 0; i < n_pre_nome_desp; i++) {
      a = strstr(fala1, pre_nome[i]);
      if (a != NULL && i > 8) {
	*tchau = true;
	break;
      }
      if (a != NULL) {
	tampn = strlen(pre_nome[i]);
	break;
      }
    }
    
    if (*tchau == true) {
      semnome = false;
      despedida_bot();
      break;
    }
    
    if (a == NULL) {
      int i = 0;
      while (fala1[i] != '\x0' && fala1[i] != ' ' && fala1[i] != '.') {
	nome[i] = fala1[i];
	i++;
      }
      nome[i] = '\x0';
      semnome = false;
      break;
    }
    
    char *nomeaux = a + tampn;
    int tam_nome = strlen(nomeaux);
    
    if (tam_nome == 0 ) {
      cout << "Nao entendi seu nome, tente novamente." << endl;
      continue;
    }

    char *aux = nomeaux;
    
    while (*aux != ' ' && *aux != '.' && *aux != '\x0') {
      aux++;
    }
    *aux = '\x0';

    int i;
    
    for(i = 0; nomeaux[i] != '\x0'; i++) {
      nome[i] = nomeaux[i];
    }
    nome[i] = '\x0';

    semnome = false;
    
    break;
  }

  return;
}

void pergunta11_bot (char nome[]) {

  char parte1[3][15] = {"Olah ", "Saudacoes ", "Oi "};
  
  cout << parte1[rand() % 3] << nome << ". ";
  
  return;
}

void pergunta12_bot (){
  char parte2[3][60] = {"Escreva um signo ou mes do ano, por favor.",
			"Por favor, digite um signo ou mes do ano.",
			"Me fale um signo ou um mes do ano."};

  cout << parte2[rand() % 3] << endl;
}

void pergunta2_bot (char nome[]) {

  char pgt2[3][50] = {"Me fale o numero de um dia, por favor",
		      "Por favor, diga-me o numero de um dia.",
		      "Fale-me o numero de um dia, por favor."};

  cout << pgt2[rand() % 3] << endl;

  return;
}

void ler_dia (char nome[], char fala3[], bool *tchau, int *n_dia, int *n_signo_mes) {

  pergunta2_bot(nome);

  const int n_dia_desp = 43;
  
  char dia_desp[n_dia_desp][15] = {"31", "30", "29", "28", "27", "26",
				   "25", "24", "23", "22", "21", "20",
				   "19", "18", "17", "16", "15", "14",
				   "13", "12", "11", "10", "9", "8",
				   "7", "6", "5", "4", "3", "2", "1",
				   "Tchau", "tchau", "Ateh logo", "ate logo",
				   "Ate logo", "ate logo", "Ateh mais", "ateh mais",
				   "Ate mais", "ate mais", "Adeus", "adeus"};

  bool sem_dia = true;

  while (sem_dia == true) {

    cin.getline(fala3,50);

    char *a;

    for (*n_dia = 0; *n_dia < n_dia_desp; (*n_dia)++) {

      a = strstr(fala3, dia_desp[*n_dia]);

      if (a != NULL && *n_dia > 30) {
	*tchau = true;
	break;
      }

      if (a != NULL) break;
    }

    if (*tchau == true) {
      sem_dia = false;
      despedida_bot();
      break;
    }

    if (a == NULL) {
      cout << "Voce nao escreveu um dia valido, tente novamente." << endl;
      continue;
    }
    
    if (*n_signo_mes == 13 && *n_dia < 3) {
      cout << "Fevereiro tem somente 28 dias, tente novamente." << endl;
      continue;
    }
    
    if (*n_dia == 0) {
      if (*n_signo_mes == 15) {
	cout << "Abril tem somente 30 dias, tente novamente." << endl;
	continue;
      }
      else if (*n_signo_mes == 17) {
	cout << "Junho tem somente 30 dias, tente novamente." << endl;
	continue;
      }
      else if (*n_signo_mes == 20) {
	cout << "Setembro tem somente 30 dias, tente novamente." << endl;
	continue;
      }
      else if (*n_signo_mes == 22) {
	cout << "Novembro tem somente 30 dias, tente novamente." << endl;
	continue;
      }
    }
    
    sem_dia = false;
  }
  
  return;
}

void ler_signo_mes_dia (char nome[], char fala2[], char fala3[], bool *tchau, int *n_signo_mes, int *n_dia) {
  
  const int n_signo_mes_desp = 60;

  char signo_mes_desp[n_signo_mes_desp][25] = {"Aries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem",
					       "Libra", "Escorpiao", "Sagitario", "Capricornio", "Aquario", "Peixes",
					       "aries", "touro", "gemeos", "cancer", "leao", "virgem",
					       "libra", "escorpiao", "sagitario", "capricornio", "aquario", "peixes",
					       "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
					       "Julho", "Agosto", "Setembro", "Outubro", "Novmebro", "Dezembro",
					       "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
					       "julho", "agosto", "setembro", "outubro", "novembro", "dezembro",
					       "Tchau", "tchau", "Ateh logo", "ateh logo", "Ate logo", "ate logo",
					       "Ateh mais", "Ateh mais", "Ate mais", "ate mais", "Adeus", "adeus"};
  
  bool sem_signo = true;

  while (sem_signo == true) {

    cin.getline(fala2,100);

    char *a;
    
    for (*n_signo_mes = 0; *n_signo_mes < n_signo_mes_desp; (*n_signo_mes)++) {
      
      a = strstr(fala2, signo_mes_desp[*n_signo_mes]);

      if (a != NULL && *n_signo_mes > 47) {
	*tchau = true;
	break;
      }
      
      if (a != NULL) break;
    }

    if (*tchau == true) {
      sem_signo = false;
      despedida_bot();
      break;
    }

    if (a == NULL) {
      cout << "Voce nao escreveu um signo ou mes, tente novamente." << endl;
      continue;
    }

    if (*n_signo_mes < 24) {
    *n_signo_mes = *n_signo_mes % 12;
    }
    else {
      *n_signo_mes = *n_signo_mes % 12;
      *n_signo_mes = (*n_signo_mes) + 12;
      ler_dia(nome,fala3,tchau,n_dia,n_signo_mes);
    }
    
    sem_signo = false;
  }

  return;
}

void sobre_signo (int *n_signo_mes, int *n_dia) {
  if (*n_signo_mes == 0 || (*n_signo_mes == 14 && *n_dia < 11) || (*n_signo_mes == 15 && *n_dia > 11)) {
    cout << "Aries eh o signo dos nascidos entre 21 de marco a 19 de abril. Eh um signo regido por Marte. Tem o fogo como elemento e possui mais compatibilidade com Aries, Gemeos e Leao. As pessoas do signo de Aries possuem como pontos fortes a coragem, a iniciativa, o pensamento positivo, a agilidade e a inteligencia. Como pontos fracos a impaciencia, a irritacao, a agressividade, ansiedade e a teimosia. Alguns famosos do signo de Aries são Quentin Tarantino, Robert Downey Jr., Eddie Murphy, Heath Ledger, Emma Watson, Paul Rudd, Mariah Carey e Adrien Brody." << endl;
  }
  else if (*n_signo_mes == 1 || (*n_signo_mes == 15 && *n_dia < 12) || (*n_signo_mes == 16 && *n_dia > 10)) {
    cout << "Touro eh o signo dos nascidos entre 20 de abril a 20 de maio. Eh um signo regido por Venus. Tem a terra como elemento e possui mais compatibilidade com Touro. As pessoas do signo de Touro possuem como pontos fortes a lealdade, a dedicacao, a paciencia, a habilidade e eh prestativo. Como pontos fracos o conservadorismo, a lentidao, a teimosia, a desconfianca e eh possesivo. Alguns famosos do signo de Touro são Travis Scott, George Clooney, Channing Tatum, Megan Fox, Al Pacino, Uma Thurman, Cher e Adele." << endl;
  }
  else if (*n_signo_mes == 2 || (*n_signo_mes == 16 && *n_dia < 11) || (*n_signo_mes == 17 && *n_dia > 9)) {
    cout << "Gemeos eh o signo dos nascidos entre 21 de maio a 21 de junho. Eh um signo regido por Mercurio. Tem o ar como elemento e possui mais compatibilidade com Aries, Gemeos e Leao. As pessoas do signo de Gemeos possuem como pontos fortes a versatilidade, a curiosiade, o bom humor, a gentileza e a inteligencia. Como pontos fracos a indecisao, a falsidade, eh superficial, eh fofoqueiro e eh disperso. Alguns famosos do signo de Gemeos são Angelina Jolie, Johnny Depp, Lenny Kravitz, Cicero Cipriano, Ashley Olsen, Iggy Azalea, Lucy Hale e Marilyn Monroe." << endl;
  }
  else if (*n_signo_mes == 3 || (*n_signo_mes == 17 && *n_dia < 10) || (*n_signo_mes == 18 && *n_dia > 8)) {
    cout << "Cancer eh o signo dos nascidos entre 22 de junho a 22 de julho. Eh um signo regido pela Lua. Tem a agua como elemento e possui mais compatibilidade com Touro e Cancer. As pessoas do signo de Cancer possuem como pontos fortes a criatividade, a intuicao, eh acolhedor, eh emotivo e eh romantico. Como pontos fracos a dependencia, a inseguranca, a timidez, o pessisimo e o saudosismo. Alguns famosos do signo de Cancer são Meryl Streep, Marina Ruy Barbosa, Gisele Bundchen, Selena Gomez, Sofia Vergara, Vera Wang, Chris Pratt e Ariana Grande." << endl;
  }
  else if (*n_signo_mes == 4 || (*n_signo_mes == 18 && *n_dia < 9) || (*n_signo_mes == 19 && *n_dia > 8)) {
    cout << "Leao eh o signo dos nascidos entre 23 de julho a 22 de agosto. Eh um signo regido pelo Sol. Tem o fogo como elemento e possui mais compatibilidade com Aries e Gemeos. As pessoas do signo de Leao possuem como pontos fortes a sinceridade, a lealdade, o carisma, eh estrategista e eh vibrante. Como pontos fracos a arrogancia, a teimosia, eh ciumento, eh controlador e eh autoritario. Alguns famosos do signo de Peixes são Demi Lovato, Halle Berry, Mila Kunis, Joe Jonas, Cole Spouse, Ben Affleck, Jennifer Lopez e Charlize Theron." << endl;
  }
  else if (*n_signo_mes == 5 || (*n_signo_mes == 19 && *n_dia < 9) || (*n_signo_mes == 20 && *n_dia > 8)) {
    cout << "Virgem eh o signo dos nascidos entre 23 de agosto a 22 de setembro. Eh um signo regido por Mercurio. Tem a terra como elemento e possui mais compatibilidade com Cancer, Virgem e Touro. As pessoas do signo de Virgem possuem como pontos fortes a inteligencia, a sinceridade, a conifabilidade, eh prestativo e eh trabalhador. Como pontos fracos a ansiedade, o pessismismo, a teimosia, eh obsessivo e eh excessivamente critico. Alguns famosos do signo de Virgem são Chris Pine, Cameron Diaz, Jimmy Fallon, Blake Lively, Alexis Bledel, Rachel Bilson, Richard Gere e Pippa Middleton." << endl;
  }
  else if (*n_signo_mes == 6 || (*n_signo_mes == 20 && *n_dia < 9) || (*n_signo_mes == 21 && *n_dia > 8)) {
    cout << "Libra eh o signo dos nascidos entre 23 de setembro a 22 de outubro. Eh um signo regido por Venus. Tem o ar como elemento e possui mais compatibilidade com Libra, Aquario, Aries, Leao e Sagitario. As pessoas do signo de Libra possuem como pontos fortes a gentileza, a beleza, a paciencia, eh conciliador e eh altruista. Como pontos fracos a indecisao, a dependencia, a passividade, a omissividade eh influenciavel. Alguns famosos do signo de Peixes são Will Smith, Zac Effron, ryan Reynolds, Gwen Stefani, Kim Kardashian, Gwyneth Paltrow, Donald Glover e Avril Lavigne." << endl;
  }
  else if (*n_signo_mes == 7 || (*n_signo_mes == 21 && *n_dia < 9) || (*n_signo_mes == 22 && *n_dia > 9)) {
    cout << "Escorpiao eh o signo dos nascidos entre 23 de outubro a 21 de novembro. Eh um signo regido por Marte e Plutao. Tem a agua como elemento e possui mais compatibilidade com Escorpiao, Peixes, Capricornio, Virgem e Touro. As pessoas do signo de Escorpiao possuem como pontos fortes a versatilidade, a inteligencia, a intuicao, eh setrategico e eh engajado. Como pontos fracos a ansiedade, o pessismismo, eh obsessivo, eh ciumento e eh melindravel. Alguns famosos do signo de Escorpiao são Pele, Jodie Foster, Milton Nascimento, Julia Roberts, Lazaro Ramos, Leonardo DiCaprio, Demi Moore e Marieta Severo." << endl;
  }
  else if (*n_signo_mes == 8 || (*n_signo_mes == 22 && *n_dia < 10) || (*n_signo_mes == 23 && *n_dia > 9)) {
    cout << "Sagitario eh o signo dos nascidos entre 22 de novembro a 21 de dezembro. Eh um signo regido por Jupiter. Tem a fogo como elemento e possui mais compatibilidade com Libra, Aquario, Aries, Leao e Sagitario. As pessoas do signo de Peixes possuem como pontos fortes o bom-humor, o otimismo, a coragem, a generosidade e eh inspirador. Como pontos fracos a arrogancia, a impulsividade, o exagero, Eh perdulario e eh critico em excesso. Alguns famosos do signo de Sagitario são Britney Spears, Taylor Swift, Brad Pitt, Scarlett Johansson, Jay-Z, Ben Stiller, Nicki Minaj e Woody Allen." << endl;
  }
  else if (*n_signo_mes == 9 || (*n_signo_mes == 23 && *n_dia < 10) || (*n_signo_mes == 12 && *n_dia > 11)) {
    cout << "Capricornio eh o signo dos nascidos entre 22 de dezembro a 19 de janeiro. Eh um signo regido por Saturno. Tem a Terra como elemento e possui mais compatibilidade com Escorpiao, Peixes, Capricornio, Virgem e Touro. As pessoas do signo de Peixes possuem como pontos fortes a contancia, a dedicacao, a coerencia, a responsabilidade e eh trabalhador. Como pontos fracos a lentidao, a desconfianca, a rigidez, eh critico e eh antiquado. Alguns famosos do signo de Peixes são Alinne Moraes, Claudia Raia, Wanessa Camargo, Selton Mello, Cassia Kis, Rodrigo Simas, Alexandre Pires e Matheus Natchergaele." << endl;
  }
  else if (*n_signo_mes == 10 || (*n_signo_mes == 12 && *n_dia < 12) || (*n_signo_mes == 13 && *n_dia > 12)) {
    cout << "Aquario eh o signo dos nascidos entre 20 de janeiro a 18 de fevereiro. Eh um signo regido por Saturno e Urano. Tem o ar como elemento e possui mais compatibilidade com Leao, Sagitario, Libra, Gemeos e Aquario. As pessoas do signo de Peixes possuem como pontos fortes a inteligencia, a originalidade, a sinceridade, o otimismo e eh altruista. Como pontos fracos a desorganizacao, a dispersao, o exagero, a contradicao e eh perdulario. Alguns famosos do signo de Peixes são Alicia Keys, Shakira, Sandy, Ellen DeGeneres, Emma Roberts, Uzo Aduba, Kerry Washington e Chloe Grace Moretz." << endl;
  }
  else if (*n_signo_mes == 11 || (*n_signo_mes == 13 && *n_dia < 13) || (*n_signo_mes == 14 && *n_dia > 10)) {
    cout << "Peixes eh o signo dos nascidos entre 19 de fevereiro a 20 de marco. Eh um signo regido por Netuno e Júpiter. Tem a agua como elemento e possui mais compatibilidade com Virgem e Touro. As pessoas do signo de Peixes possuem como pontos fortes a compaixao, o lado artistico, a intuicao, a gentileza e a sabedoria. Como pontos fracos a tristeza, a vitimizacao, o desejo de escapar da realidade e o medo. Alguns famosos do signo de Peixes são Rihanna, Drew Barrymore, Regina Case, Justin Bieber, Sharon Stone, Albert Einstein, Michelangelo e Daniel Craig." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  srand(time(NULL));

  cout << endl << "O programa nao le acentos." << endl << endl;

  saudacao_bot();

  bool tchau = false;
  char fala1[50], fala2[100], fala3[50], nome[50];
  int n_signo_mes = 0, n_dia = 0;

  ler_nome(fala1,nome,&tchau);
  
  if (tchau == true) {
    return 0;
  }

  pergunta11_bot(nome);
  
  while (tchau == false) {
    
    pergunta12_bot();
    
    ler_signo_mes_dia(nome,fala2,fala3,&tchau,&n_signo_mes,&n_dia);

    if (tchau == true) {
      return 0;
    }

    sobre_signo(&n_signo_mes,&n_dia);
  }
  
  return 0;
}
