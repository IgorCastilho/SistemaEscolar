#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <conio2.h>
#include <string.h>
#include <ctype.h>

// estruturas
struct Login
{
    char usuario[15];
    char senha[15];
};


struct CadastroAluno
{
    char RGA [12];
    char nome [50];
    char usuarioL [10];
    char senhaL [8];
};


void telaBasica()
{

    textbackground(2);
    textcolor(15);
    clrscr();

}


void telaLogin()
{

    gotoxy(44,7);
    textbackground(0);
    printf(" ");
    gotoxy(44, 23);
      printf(" ");

    gotoxy(76, 7);
      printf(" ");
          gotoxy(76, 23);
      printf(" ");


     textbackground(2);
    textcolor(15);

    gotoxy(45,7); // canto superior esquerdo
    printf("%c", 201);
    gotoxy(45,23); // canto inferior esquerdo
    printf("%c", 200);
    gotoxy(75,7); // canto superior direito
    printf("%c", 187);
    gotoxy(75,23); // canto inferior direito
    printf("%c", 188);

    int c;
textbackground(0);

    for (c=44; c<77; c++){
        gotoxy(c, 6);
        printf(" ");
    }

    for (c=44; c<77; c++){
        gotoxy(c, 24);
        printf(" ");
    }

    for (c= 8; c< 23; c++){
        gotoxy(44, c);
        printf(" ");
    }
      for (c= 8; c< 23; c++){
        gotoxy(76, c);
        printf(" ");
    }





     textbackground(2);
    textcolor(15);


    for (c=46; c<75; c++)  // linha superior
    {
        gotoxy(c, 7);
        printf("%c", 205);
    }


    for (c=46; c<75; c++)  // linha inferior
    {
        gotoxy(c, 23);
        printf("%c", 205);
    }

    for (c=8; c<23; c++)  // linha lateral esquerda
    {
        if (c==9)
        {
            gotoxy(45, c);
            printf("%c", 204);
        }
        else
        {
            if (c==20)
            {
                gotoxy(45, c);
                printf("%c", 204);
            }
            else
            {
                gotoxy(45, c);
                printf("%c", 186);
            }
        }
    }

    for (c=8; c<23; c++)  // linha lateral direita
    {
        if (c==9)
        {
            gotoxy(75, c);
            printf("%c", 185);
        }
        else
        {
            if (c==20)
            {
                gotoxy(75, c);
                printf("%c", 185);
            }
            else
            {
                gotoxy(75, c);
                printf("%c", 186);
            }
        }
    }

    for (c=46; c<75; c++)
    {
        gotoxy(c, 9);
        printf("%c", 205);
        gotoxy(c, 20);
        printf("%c", 205);
    }

    gotoxy(53, 8);
    printf("Logar no sistema");


    gotoxy(47, 11);

    textcolor(15);
    printf("Usuario: ");

    for(c=47; c<57; c++)
    {
        textbackground(15);
        gotoxy(c, 12);
        printf(" ");
    }
 textbackground(2);
    gotoxy(47, 14);
    printf("Senha: ");

    for(c=47; c<55; c++)
    {
        textbackground(15);
        gotoxy(c, 15);
        printf(" ");
    }
 textbackground(2);

    gotoxy(49, 18);
    printf("%c", 179);
    gotoxy(50, 18);
    printf("ENTRAR");
    gotoxy(56, 18);
    printf("%c", 179);


    gotoxy(60, 18);
    printf("%c", 179);
    gotoxy(61, 18);
    printf("CANCELAR");
    gotoxy(69, 18);
    printf("%c", 179);

    gotoxy(50, 21);
    printf("%c", 179);
    gotoxy(52, 21);
    printf("%c", 179);
    gotoxy(48, 22);
    printf("1 acesso");
    gotoxy(60, 22);
    printf("Ja cadastrado");
    gotoxy(65, 21);
    printf("%c", 179);
    gotoxy(67, 21);
    printf("%c", 179);



}


void telaCadastroAluno()
{
    gotoxy(50, 7);
    textcolor(15);
    textbackground(0);
    printf("CADASTRO DE ALUNOS");

}

void telaCadastroProfessor(){
gotoxy(50, 7);
    textcolor(15);
    textbackground(0);
    printf("CADASTRO DE PROFESSORES");
}

void telaCadastroDisciplina(){
gotoxy(50, 7);
    textcolor(15);
    textbackground(0);
    printf("CADASTRO DE DISCIPLINAS");
}

void telaCadastroTurma(){
gotoxy(50, 7);
    textcolor(15);
    textbackground(0);
    printf("CADASTRO DE TURMAS");
}

void telaListarAluno(){
    gotoxy(45, 7);
    textcolor(15);
    textbackground(0);
    printf("LISTA DE ALUNOS CADASTRADOS");

}

void telaListarProfessor(){
  gotoxy(43, 7);
    textcolor(15);
    textbackground(0);
    printf("LISTA DE PROFESSORES CADASTRADOS");
    }

    void telaListarDisciplinas(){
      gotoxy(43, 7);
    textcolor(15);
    textbackground(0);
    printf("LISTA DE DISCIPLINAS CADASTRADAS");

    }

    void telaListarTurmas(){

      gotoxy(45, 7);
    textcolor(15);
    textbackground(0);
    printf("LISTA DE TURMAS CADASTRADAS");

    }

    void telaBuscarAluno(){
gotoxy(53, 7);
    textcolor(15);
    textbackground(0);
    printf("BUSCAR ALUNO");
    }

    void telaBuscarTurmas(){
    gotoxy(53, 7);
    textcolor(15);
    textbackground(0);
    printf("BUSCAR TURMA");
    }

    void telaBuscarProfessor(){
        gotoxy(49, 7);
    textcolor(15);
    textbackground(0);
    printf("BUSCAR PROFESSOR");
    }

    void telaAtualizarAluno(){
        gotoxy(51, 7);
    textcolor(15);
    textbackground(0);
    printf("ATUALIZAR ALUNO");
    }

    void telaAtualizarProfessor(){
            gotoxy(51, 7);
    textcolor(15);
    textbackground(0);
    printf("ATUALIZAR PROFESSOR");
    }


int verificaUsuario(char nomeTemp[15])
{

    int tamanho = strlen(nomeTemp), i, contaEspecial=0;

    if (tamanho==10){


    for (i=0; i<10; i++)
    {
        if (ispunct(nomeTemp[i]))
        {
            contaEspecial++;
        }
    }

    int contaNumero=0, contaLetra;

    for (i=0; i<10; i++)
    {
        if (isdigit(nomeTemp[i]))
        {
            contaNumero++;
        }
    }

    for (i=0; i<10; i++)
    {
        if (isalpha(nomeTemp[i]))
        {
            contaLetra++;
        }
    }

    if ((tamanho==10)&&(contaEspecial==0)&&(contaLetra>=1)&&(contaNumero>=1))
    {
        return 1;
    }
    }
    else
    {
        return 0;
    }
}

int verificaSenha(char senhaTemp[15]){

int tamanho = strlen(senhaTemp), contaMaiuscula=0, contaEspecial=0, contaNumero=0, i;

if (tamanho==8){
    for (i=0; i<8; i++){
        if (isupper(senhaTemp[i])){
            contaMaiuscula++;
        }
    }

        for (i=0; i<8; i++){
        if (ispunct(senhaTemp[i])){
            contaEspecial++;
        }
    }

        for (i=0; i<8; i++){
        if (isdigit(senhaTemp[i])){
            contaNumero++;
        }
    }


    if ((tamanho==8)&&(contaMaiuscula>=1)&&(contaEspecial>=1)&&(contaNumero>=1)){
                return 1;

                    }

}
else{
    return 0;
}

}


void ddSair(){

textbackground(15);
    int i;

    for (i=95; i<112; i++)
    {
        gotoxy(i, 5);
        printf("    ");
        gotoxy(i, 6);
        printf("    ");
        gotoxy(i, 7);
        printf("    ");
        gotoxy(i, 8);
        printf("    ");
        gotoxy(i, 9);
        printf("    ");
 gotoxy(i, 10);
        printf("    ");
         gotoxy(i, 11);
        printf("    ");
        gotoxy(i, 12);
        printf("    ");


    }

    gotoxy(96, 6);
    printf("Deseja realmente");

    gotoxy(101, 7);
    printf("sair?");

    gotoxy(98, 9);

    printf("Sim | CTRL+S");

    gotoxy(98, 11);
    printf("Nao | CTRL+N");






}

void ddCadastro()
{

    int i;

    for (i=4; i<23; i++)
    {
        gotoxy(i, 5);
        printf("    ");
        gotoxy(i, 6);
        printf("    ");
        gotoxy(i, 7);
        printf("    ");
        gotoxy(i, 8);
        printf("    ");
        gotoxy(i, 9);
        printf("    ");
        gotoxy(i, 10);
        printf("    ");
        gotoxy(i, 11);
        printf("    ");
        gotoxy(i, 12);
        printf("    ");
        gotoxy(i, 13);
        printf("    ");
    }

    gotoxy(7, 6);
    printf("Aluno | CTRL+A ");

    gotoxy(6, 8);
    printf("Professor | CTRL+P ");

    gotoxy(5, 10);
    printf("Disciplina | CTRL+D ");

    gotoxy(7, 12);
    printf("Turma | CTRL+T ");




}

void ddAtualizar(){
textbackground(15);
    int i;

    for (i=71; i<89; i++)
    {
        gotoxy(i, 5);
        printf("    ");
        gotoxy(i, 6);
        printf("    ");
        gotoxy(i, 7);
        printf("    ");
        gotoxy(i, 8);
        printf("    ");
        gotoxy(i, 9);
        printf("    ");



    }


    gotoxy(75, 6);
    printf("Aluno | CTRL+A ");

    gotoxy(72, 8);
    printf("Professor | CTRL+P ");



}


void ddListar()
{
    textbackground(15);
    int i;

    for (i=25; i<44; i++)
    {
        gotoxy(i, 5);
        printf("    ");
        gotoxy(i, 6);
        printf("    ");
        gotoxy(i, 7);
        printf("    ");
        gotoxy(i, 8);
        printf("    ");
        gotoxy(i, 9);
        printf("    ");
        gotoxy(i, 10);
        printf("    ");
        gotoxy(i, 11);
        printf("    ");
        gotoxy(i, 12);
        printf("    ");
        gotoxy(i, 13);
        printf("    ");
    }

    gotoxy(28, 6);
    printf("Aluno | CTRL+A ");

    gotoxy(27, 8);
    printf("Professor | CTRL+P ");

    gotoxy(27, 10);
    printf("Disciplina | CTRL+D ");

    gotoxy(28, 12);
    printf("Turma | CTRL+T ");









}


void ddBuscar(){


textbackground(15);
    int i;

    for (i=47; i<65; i++)
    {
        gotoxy(i, 5);
        printf("    ");
        gotoxy(i, 6);
        printf("    ");
        gotoxy(i, 7);
        printf("    ");
        gotoxy(i, 8);
        printf("    ");
        gotoxy(i, 9);
        printf("    ");
        gotoxy(i, 10);
        printf("    ");
        gotoxy(i, 11);
        printf("    ");


    }

gotoxy(50, 6);
    printf("Aluno | CTRL+A ");

    gotoxy(50, 8);
    printf("Turma | CTRL+T ");

    gotoxy(48, 10);
    printf("Professor | CTRL+P ");




}

void logadoTelaInicial()
{
    int i;
    textbackground(0);
    clrscr();

    gotoxy(1,1);
    textbackground(2);


    for (i=1; i<=120; i++)
    {
        textcolor(2);
        gotoxy(i,1);
        printf(" ");
        gotoxy(i, 2);
        printf(" ");
        gotoxy(i, 3);
        printf(" ");
        gotoxy(i, 4);
        printf(" ");
    }
    gotoxy(50, 2);
    textcolor(15);
    printf("Gerenciador escolar 1.0");


    gotoxy(1, 4);

    textbackground(15);
    textcolor(12);

    printf("        C");
    textcolor(0);
    printf("adastro                ");
    textcolor(12);
    printf("L");
    textcolor(0);
    printf("istar                ");
    textcolor(12);
    printf("B");
    textcolor(0);
    printf("uscar                ");
    textcolor(12);
    printf("A");
    textcolor(0);
    printf("tualizar               ");
    textcolor(12);
    printf(" S");
    textcolor(0);
    printf("air               ");

    for (i=1; i<=120; i++)
    {
        textcolor(2);
        gotoxy(i,29);
        printf(" ");
    }
    textcolor(0);
    gotoxy(89, 29);
    printf("Desenvolvido por Igor Castilho");




}

void efeitoBotaoEntrar (int coluna1, int coluna2, int linha, int flag)
{

    int i;

// se a flag for 0, faz o efeito
// se a flag for 1, retira o efeito
    if (flag ==0)
    {
        for (i= coluna1; i<coluna2; i++)
        {

            gotoxy(i, linha);
            printf("%c", 219);

        }
    }
    else if (flag==1)
    {
        gotoxy(49, 18);
        printf("%c", 179);
        gotoxy(50, 18);
        printf("ENTRAR");
        gotoxy(56, 18);
        printf("%c", 179);
    }



}

void efeitoBotaoCancelar (int coluna1, int coluna2, int linha, int flag)
{
    int i;

    if (flag==0)
    {
        for (i=coluna1; i<coluna2; i++)
        {
            gotoxy(i, linha);
            printf("%c", 219);
        }
    }
    else if (flag==1)
    {
        gotoxy(60, 18);
        printf("%c", 179);
        gotoxy(61, 18);
        printf("CANCELAR");
        gotoxy(69, 18);
        printf("%c", 179);

    }
}

int jaCadastrado()
{

    FILE *fp;

    fp = fopen("C:/Sistema/Login/login.dat", "rb");

    if (fp)
    {
        fclose(fp);
        return 1;
    }
    else
    {
        return 0;
    }



}

int verificaLogin(char user[15], char pass[15])
{

    struct Login log;

    FILE * arquivo;
    arquivo = fopen("C:/Sistema/Login/login.dat","rb");

    fread(&log, sizeof(struct Login), 1, arquivo);
    fclose(arquivo);

    int logiN, senha;
    logiN = strcmp(user, log.usuario);
    senha = strcmp(pass, log.senha);


    if ((logiN == 0)&&(senha==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


void erroLogar()
{
    textbackground(4);
    textcolor(14);
    clrscr();

    gotoxy(40,10); // canto superior esquerdo
    printf("%c", 201);
    gotoxy(40,20); // canto inferior esquerdo
    printf("%c", 200);
    gotoxy(80,10); // canto superior direito
    printf("%c", 187);
    gotoxy(80,20); // canto inferior direito
    printf("%c", 188);



    int c;

    for (c=41; c<80; c++)  // linha superior
    {
        gotoxy(c, 10);
        printf("%c", 205);
    }


    for (c=41; c<80; c++)  // linha inferior
    {
        gotoxy(c, 20);
        printf("%c", 205);
    }

    for (c=11; c<20; c++)  // linha lateral esquerda
    {
        gotoxy(40, c);
        printf("%c", 186);

    }


    for (c=11; c<20; c++)  // linha lateral direita
    {
        gotoxy(80, c);
        printf("%c", 186);
    }

    gotoxy(43, 13);
    textcolor(15);
    printf("Erro ao logar");
    gotoxy(43, 15);
    printf("Verifique o usuario e senha");


    gotoxy(43, 18);
    printf("Aperte ENTER para voltar");

    int tecla;

    tecla = getch();


    if (tecla == 13) // enter
    {
        telaBasica();
        telaLogin();
    }
    else
    {
        erroLogar();
    }

    gotoxy(8, 30);
}


void fazCadastroSistema(char userTemp[15], char senhaTemp[15])
{
    struct Login login[1];


    strcpy(login[0].usuario, userTemp);
    strcpy(login[0].senha, senhaTemp);

    int i =0;

    for (i=49; i<57; i++)
    {
        gotoxy(i, 18);
        printf("%c", 219);
    }

    // tecla 13= enter
    // tecla 115 = s


    int tecla;

    tecla = getch();

    if (tecla == 13) // enter
    {
        if (jaCadastrado()==0)
        {
            FILE *cadastro;
            if (cadastro == NULL)
            {
                printf("Erro de abertura");
            }
            else
            {


                cadastro = fopen("C:/Sistema/Login/login.dat", "wb");
                fwrite(login, sizeof(struct CadastroAluno),1, cadastro);
                fclose(cadastro);

                logadoTelaInicial();
            }
        }


    }
    else if (tecla == 100)  // "s"
    {


        gotoxy(49, 18);
        printf("%c", 179);
        gotoxy(50, 18);
        printf("ENTRAR");
        gotoxy(56, 18);
        printf("%c", 179);

        for (i=60; i<70; i++)
        {
            gotoxy(i, 18);
            printf("%c", 219);
        }



        gotoxy(100, 30);
    }


}


void erroCadastroSistema()
{
    textbackground(4);
    textcolor(14);
    clrscr();

    gotoxy(40,13); // canto superior esquerdo
    printf("%c", 201);
    gotoxy(40,23); // canto inferior esquerdo
    printf("%c", 200);
    gotoxy(80,13); // canto superior direito
    printf("%c", 187);
    gotoxy(80,23); // canto inferior direito
    printf("%c", 188);



    int c;

    for (c=41; c<80; c++)  // linha superior
    {
        gotoxy(c, 13);
        printf("%c", 205);
    }


    for (c=41; c<80; c++)  // linha inferior
    {
        gotoxy(c, 23);
        printf("%c", 205);
    }

    for (c=14; c<23; c++)  // linha lateral esquerda
    {
        gotoxy(40, c);
        printf("%c", 186);

    }


    for (c=14; c<23; c++)  // linha lateral direita
    {
        gotoxy(80, c);
        printf("%c", 186);
    }

    gotoxy(43, 16);
    textcolor(15);
    printf("Erro ao cadastrar");
    gotoxy(43, 18);
    printf("Verifique as regras de cadastro");


    gotoxy(43, 21);
    printf("Aperte ENTER para voltar");

    int tecla;

    tecla = getch();


    if (tecla == 13) // enter
    {
        telaBasica();
        telaLogin();
    }
    else
    {
        erroCadastroSistema();
    }

    gotoxy(8, 30);

}

int main()
{
    // configurações da tela
    system("MODE con cols=120 lines=30 ");
    telaBasica();
    telaLogin();

    textcolor(0);
    // declaração de variáveis temporárias
    char userTemp[15], senhaTemp[15];

    // declaração das variáveis normais
    int i, tecla, logou=0, moveu =0, controle1=0, controleMenu=0;

    // chamar função para verificar se existe conta no banco de dados
    if (jaCadastrado()==1)
    {

        // se já tiver registro no sistema, então:
        gotoxy(66, 21);
        printf("%c", 219);

        // recebendo o que usuário digitou para logar
        gotoxy(47,12);
         textbackground(15);
            textcolor(0);
        scanf("%s", &userTemp);
        fflush(stdin);

        gotoxy(47,15);
        scanf("%s", &senhaTemp);



        efeitoBotaoEntrar(49, 57, 18, 0);

        tecla = getch();

        if (tecla == 13) // enter
        {
            do
            {

                if (verificaLogin(userTemp, senhaTemp)==1)
                {
                    logadoTelaInicial();
                    logou = 1;
                    do {
                    tecla = getch();

                    if ((tecla == 67)||(tecla==99))
                    {
                        ddCadastro();
                        tecla = getch();

                        if (tecla== 1)
                        {
                            logadoTelaInicial();
                            telaCadastroAluno();
                            tecla = getch();
                            if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if(tecla==16){
                            logadoTelaInicial();
                            telaCadastroProfessor();
                            tecla = getch();
                            if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==4){
                            logadoTelaInicial();
                            telaCadastroDisciplina();
                            tecla = getch();
                            if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==20){
                            logadoTelaInicial();
                            telaCadastroTurma();
                            tecla = getch();
                            if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==27){
                            logadoTelaInicial();
                        }
                    }
                    else if((tecla== 76)||(tecla==108))
                    {
                        logadoTelaInicial();
                        ddListar();
                        tecla = getch();

                         if (tecla==27){
                            logadoTelaInicial();
                        }
                        else if (tecla==1){
                            logadoTelaInicial();
                            telaListarAluno();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==16){
                            logadoTelaInicial();
                            telaListarProfessor();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==4){
                            logadoTelaInicial();
                            telaListarDisciplinas();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==20){
                            logadoTelaInicial();
                            telaListarTurmas();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                    }
                    else if((tecla==66)||(tecla==98)){
                        logadoTelaInicial();
                        ddBuscar();
                        tecla = getch();
                         if (tecla==27){
                            logadoTelaInicial();
                        }
                        else if (tecla==1){
                            logadoTelaInicial();
                            telaBuscarAluno();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                                }
                                else if (tecla==20){
                                    logadoTelaInicial();
                                    telaBuscarTurmas();
                                    tecla= getch();
                                     if (tecla==27){
                            logadoTelaInicial();
                        }
                                }
                                else if(tecla==16){
                                        logadoTelaInicial();
                                telaBuscarProfessor();
                                    tecla= getch();
                                     if (tecla==27){
                            logadoTelaInicial();
                        }
                                }





                                       }

                        else if ((tecla==65)||(tecla==97)){

                            logadoTelaInicial();
                            ddAtualizar();
                            tecla = getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        else if (tecla==1){
                            logadoTelaInicial();
                            telaAtualizarAluno();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        }
                        else if (tecla==16){
                            logadoTelaInicial();
                            telaAtualizarProfessor();
                            tecla= getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }

                        }
                        }
                        else if ((tecla==83)||(tecla==115)){
                            logadoTelaInicial();
                            ddSair();
                            tecla = getch();
                             if (tecla==27){
                            logadoTelaInicial();
                        }
                        else if (tecla==19){
                            break;
                        }
                        else if (tecla==14){
                            logadoTelaInicial();
                        }
                        }

                    } while (controleMenu == 0);


                }
                else
                {

                    erroLogar();
                    gotoxy(66, 21);
                    printf("%c", 219);

                    // recebendo o que usuário digitou para logar
                    gotoxy(47,12);
                    scanf("%s", &userTemp);
                    fflush(stdin);

                    gotoxy(47,15);
                    scanf("%s", &senhaTemp);

                    efeitoBotaoEntrar(49, 57, 18, 0);
                    tecla = getch();
                }
            }
            while (logou == 0);
        }





        else if (tecla==100)
        {
            do
            {

                if (tecla == 100)
                {

                    efeitoBotaoEntrar(49, 57, 18, 1);
                    efeitoBotaoCancelar(60, 70, 18, 0);

                    tecla = getch();
                    if (tecla==13)  // enter
                    {

                        telaBasica();
                        telaLogin();
                        gotoxy(66, 21);
                        printf("%c", 219);

                        // recebendo o que usuário digitou para logar
                        gotoxy(47,12);
                        scanf("%s", &userTemp);
                        fflush(stdin);
                        controle1=1;

                        gotoxy(47,15);
                        scanf("%s", &senhaTemp);

                        efeitoBotaoEntrar(49, 57, 18, 0);
                        tecla = getch();
                    }
                    else if((tecla==13)&&(controle1==1))
                    {
                        do
                        {
                            if (verificaLogin(userTemp, senhaTemp)==1)
                            {
                                logadoTelaInicial();
                                logou = 1;
                            }
                            else
                            {

                                erroLogar();
                                gotoxy(66, 21);
                                printf("%c", 219);

                                // recebendo o que usuário digitou para logar
                                gotoxy(47,12);
                                scanf("%s", &userTemp);
                                fflush(stdin);

                                gotoxy(47,15);
                                scanf("%s", &senhaTemp);

                                efeitoBotaoEntrar(49, 57, 18, 0);
                              //  tecla = getch();
                            }
                        }
                        while (logou == 0);

                    }

                    else if (tecla==97)
                    {
                        efeitoBotaoEntrar(49, 57, 18, 0);

                        efeitoBotaoCancelar(60, 70, 18, 1);

                        tecla = getch();

                        if (tecla==13)
                        {
                            if (verificaLogin(userTemp, senhaTemp)==1)
                            {
                                moveu=1;
                                logadoTelaInicial();
                                logou = 1;


                            }
                        }

                    }
                }
            }
            while (moveu == 0);
        }


    }

    else
    {

        // então faz o cadastro pela primeira vez
        int liberaCadastro=0;

        do
        {
            gotoxy(51,21);
            printf("%c", 219);


            // Recebendo nome de usuário e senha para cadastrar

            gotoxy(47,12);
            textbackground(15);
            textcolor(0);
            gets(userTemp);

            fflush(stdin);


            gotoxy(47,15);
            gets(senhaTemp);



            efeitoBotaoEntrar(49, 57, 18, 0);
            tecla = getch();


            if (tecla ==100)
            {
                efeitoBotaoEntrar(49, 57, 18, 1);
                efeitoBotaoCancelar(60, 70, 18, 0);

            }
            else if (tecla==13){
            if (verificaUsuario(userTemp)&&(verificaSenha(senhaTemp)))
            {
                fazCadastroSistema(userTemp, senhaTemp);
                liberaCadastro = 1;
            }
            else
            {
                erroCadastroSistema();
            }

            }
        }
        while (liberaCadastro == 0);
    }
    return 0;
}
