#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#define The_distance_between_the_characters 2
#define SLEEP 25
#define X 5
#define Y 3
#define Space_For_New_line 12
#define Size_words 100
FILE *NEWFIL;
int X_axis=X ,Y_axis=Y ;
void Try();
void Reader();
void gotoxy();
void a();
void A();
void B();
void b();
void C();
void c();
void D();
void d();
void e();
void E();
void F();
void f();
void G();
void g();
void H();
void h();
void I();
void i();
void J();
void j();
void K();
void k();
void L();
void l();
void M();
void m();
void N();
void n();
void O();
void o();
void P();
void p();
void Q();
void q();
void R();
void r();
void S();
void s();
void T();
void t();
void U();
void u();
void V();
void v();
void W();
void w();
void X_();
void x_();
void Y_();
void y_();
void Z();
void z();
void mode();
void ErrorTime(int LOOPs,char TistCase);
void _Ub();

int TimeError[50],ConterErrorTime=-1,EnterSpace=0;
main(){
for(;;){
char TheString[Size_words],TheString2[Size_words];
int Counter=0;

// for write file

system("color cE");
gotoxy(0,0);
printf("\n To finish the writing process . \n ");

Counter=0;
for(Counter=0;Counter<Size_words;Counter++){
scanf("%c",&TheString2[Counter]);

TheString[Counter]=TheString2[Counter];

if(TheString[Counter]=='.'){
    EnterSpace++;
        ErrorTime(Counter,TheString[Counter-1]);
   TheString[++Counter]=' ';
break;}

if(TheString[Counter]==10){
        ErrorTime(Counter,TheString[Counter-1]);
EnterSpace++;
	TheString[Counter]=',';
}
if(TheString[Counter]==' '){
        ErrorTime(Counter,TheString[Counter-1]);
}}

mode(TheString);
Reader(TheString);



Try(TheString2);

system("_FOR_READ.vbs");// reeeeeed  file :)
}
NEWFIL=fopen("_FOR_READ.vbs","w");

    fprintf(NEWFIL,"It's rubbish");

fclose(NEWFIL);
system("del _FOR_READ.vbs");
getch();
}
void Reader(char TheString[]){// wrete from file
    int conter=-1;
NEWFIL=fopen("_FOR_READ.vbs","w");

fprintf(NEWFIL,"CreateObject(\"SAPI.SpVoice\").Speak\"");
do{
        conter++;
        fprintf(NEWFIL,"%c",TheString[conter]);

}while(TheString[conter]!='.');
    fprintf(NEWFIL,"\"");

fclose(NEWFIL);
}
void ErrorTime(int LOOPs,char TistCase){
    if(TistCase!=' '||TistCase!=10)
    TimeError[++ConterErrorTime]=LOOPs;
}
void Try(char CASE[]){
    system("cls");
    system("color 4f");
    int test=0;
    int New_line=0;
    do{

    if(islower(CASE[test])){

    switch(CASE[test]){
    case 'a':
        a(New_line);
        break;
    case 'b':
        b(New_line);
        break;
    case 'c':
        c(New_line);
        break;
    case 'd':
        d(New_line);
        break;
    case 'e':
        e(New_line);
        break;
    case 'f':
        f(New_line);
        break;
    case 'j':
        j(New_line);
        break;
    case 'h':
        h(New_line);
        break;
    case 'i':
        i(New_line);
        break;
    case 'g':
        g(New_line);
        break;
    case 'k':
        k(New_line);
        break;
    case 'l':
        l(New_line);
        break;
    case 'm':
        m(New_line);
        break;
    case 'n':
        n(New_line);
        break;
    case 'o':
        o(New_line);
        break;
    case 'p':
        p(New_line);
        break;
    case 'q':
        q(New_line);
        break;
    case 'r':
        r(New_line);
        break;
    case 's':
        s(New_line);
        break;
    case 't':
        t(New_line);
        break;
    case 'u':
        u(New_line);
        break;
    case 'v':
        v(New_line);
        break;
    case 'w':
        w(New_line);
        break;
    case 'x':
        x_(New_line);
        break;
    case 'y':
        y_(New_line);
        break;
    case 'z':
        z(New_line);
        break;
    default:
        printf("ERROR");
    }}
    else if(isupper(CASE[test])){

    switch(CASE[test]){// APCDEFJ

    case 'A':
        A(New_line);
        break;
    case 'B':
        B(New_line);
        break;
    case 'C':
        C(New_line);
        break;
    case 'D':
        D(New_line);
        break;
    case 'E':
        E(New_line);
        break;
    case 'F':
        F(New_line);
        break;
    case 'J':
        J(New_line);
        break;
    case 'H':
        H(New_line);
        break;
    case 'I':
        I(New_line);
        break;
    case 'G':
        G(New_line);
        break;
    case 'K':
        K(New_line);
        break;
    case 'L':
        L(New_line);
        break;
    case 'M':
        M(New_line);
        break;
    case 'N':
        N(New_line);
        break;
    case 'O':
        O(New_line);
        break;
    case 'P':
        P(New_line);
        break;
    case 'Q':
        Q(New_line);
        break;
    case 'R':
        R(New_line);
        break;
    case 'S':
        S(New_line);
        break;
    case 'T':
        T(New_line);
        break;
    case 'U':
        U(New_line);
        break;
    case 'V':
        V(New_line);
        break;
    case 'W':
        W(New_line);
        break;
    case 'X':
        X_(New_line);
        break;
    case 'Y':
        Y_(New_line);
        break;
    case 'Z':
        Z(New_line);
        break;
    default:
        printf("ERROR");

    }
}
else {// for ather case like ' or : or ; or /
switch(CASE[test]){
case '\'':
    _Ub(New_line);
    break;
case '!':
    _1_(New_line);
    break;
case '+':
    Plus(New_line);
    break;

}
}
test++;


if(CASE[test]==' '){
X_axis+=5;
do{
test++;
}while(CASE[test]==' ');

}
if(CASE[test]==10){
    New_line++;
    do{
    test++;
    }while(CASE[test]==10);

    X_axis=X;
    New_line+=Space_For_New_line;
}
if(CASE[test]==' '){
X_axis+=5;
do{
test++;
}while(CASE[test]==' ');

}
if(CASE[test]==10){
    New_line++;
    do{
    test++;
    }while(CASE[test]==10);

    X_axis=X;
    New_line+=Space_For_New_line;
}




}while(isalpha(CASE[test])|CASE[test]==39||CASE[test]=='!'||CASE[test]=='+');
}
void mode(char TheString[]){
    int Test1=0,Sum=0;
    for(;Test1<=ConterErrorTime;Test1++){
if(EnterSpace==1){
    if(TimeError[Test1]<=13){
            system("mode 100, 15");

    }
    else if(TimeError[Test1]<=22){
        system("mode 165, 15");
    }
else
    system("mode 500, 15");}

else if(EnterSpace==2){
    if(TimeError[Test1]<=13){
            system("mode 100, 25");

    }
    else if(TimeError[Test1]<=22){
        system("mode 165, 25");
    }
else
    system("mode 500, 25");}

else if(EnterSpace==3){
    if(TimeError[Test1]<=13){
            system("mode 100, 45");

    }
    else if(TimeError[Test1]<=22){
        system("mode 165, 45");
    }
else
    system("mode 500, 45");}

else if(EnterSpace==4){
    if(TimeError[Test1]<=13){
            system("mode 100, 70");

    }
    else if(TimeError[Test1]<=22){
        system("mode 165, 70");
    }
else
    system("mode 500, 75");}

    }
}



void gotoxy(int i,int j){
	COORD aa={i,j};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),aa);
}
void A(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis+1,Y_axis);
for(i=0;i<3;i++){
        Sleep(SLEEP);
printf("%c",219);}
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis+1,Y_axis+3);
for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<6;i++){
gotoxy(X_axis+4,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
X_axis+=4;
}
void a(int New_line){
int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",220);
}
gotoxy(X_axis+3,Y_axis+1);
printf("%c",219);
gotoxy(X_axis,2+Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",219);}
gotoxy(X_axis,Y_axis+3);
printf("%c",219);
gotoxy(X_axis,4+Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",219);}
gotoxy(X_axis+3,Y_axis+3);
printf("%c",219);
gotoxy(0,0);
X_axis+=3;

}
void B(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis-1,Y_axis);
printf("%c",222);
gotoxy(X_axis+1,Y_axis);
for(i=0;i<3;i++){
        Sleep(SLEEP);
printf("%c",219);}
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis+1,Y_axis+3);
for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",223);
}
for(i=0;i<6;i++){
gotoxy(X_axis+4,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(++X_axis,Y_axis+i-1);
for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
gotoxy(X_axis-2,Y_axis+i+2);
printf("%c",222);
X_axis+=4;

}
void b(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
        Sleep(SLEEP);
gotoxy(X_axis,Y_axis+i);
printf("%c",219);
}
gotoxy(X_axis,Y_axis+i-1);
for(i=0;i<5;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<3;i++){
gotoxy(X_axis+4,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}
for(i=1;i<=4;i++){
Sleep(SLEEP);
gotoxy(X_axis-i+5,Y_axis+2);
printf("%c",220);
}
X_axis+=4;

}
void c(int New_line){
    int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters;
        gotoxy(X_axis,++Y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis+i-1,Y_axis+1);
printf("%c",223);
    for(i=1;i<3;i++){
    gotoxy(X_axis,Y_axis+i);
    printf("%c",219);
Sleep(SLEEP);}

    gotoxy(X_axis,++Y_axis+2);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis+4,Y_axis+1);
printf("%c",220);
X_axis+=4;
}
void C(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis+5,Y_axis+1);
printf("%c",219);
for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
printf("%c",219);
Sleep(SLEEP);}
for(i=1;i<2;i++){
gotoxy(X_axis+5,Y_axis-i);
printf("%c",219);}
X_axis+=6;
}
void D(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis-1,Y_axis);
printf("%c",222);
gotoxy(X_axis+1,Y_axis);
for(i=0;i<3;i++){
        Sleep(SLEEP);
printf("%c",219);}
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<6;i++){
gotoxy(X_axis+4,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(++X_axis,Y_axis+i-1);
for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
gotoxy(X_axis-2,Y_axis+i+2);
printf("%c",222);
X_axis+=4;

}
void d(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
        Sleep(SLEEP);
gotoxy(X_axis+4,Y_axis+i);
printf("%c",219);
}

for(i=0;i<5;i++){
    Sleep(SLEEP);
gotoxy(X_axis-i+4,Y_axis+5);
    printf("%c",219);
}
for(i=0;i<3;i++){
gotoxy(X_axis,Y_axis-i+5);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis,Y_axis+2);
for(i=0;i<4;i++){
Sleep(SLEEP);
printf("%c",220);
}
X_axis+=4;

}
void e(int New_line){
    int i=0;
    Y_axis=Y+New_line+1;
    X_axis+=The_distance_between_the_characters;


    gotoxy(++X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(++X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",222);



    gotoxy(X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(--X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(--X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);



    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    gotoxy(++X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(++X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

}
void E(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=5;i>=0;i--){
gotoxy(X_axis+i,Y_axis);
printf("%c",219);
Sleep(SLEEP);}
for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis+1,Y_axis-3);
for(i=0;i<5;i++){
Sleep(SLEEP);
printf("%c",220);}
X_axis+=6;
}
void f(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters+2;
gotoxy(X_axis+2,Y_axis+1);
printf("%c",223);
for(i=2;i>0;i--){
Sleep(SLEEP);
gotoxy(X_axis+i,Y_axis);
printf("%c",219);
}
for(i=0;i<6;i++){
Sleep(SLEEP);
gotoxy(X_axis,Y_axis+i);
printf("%c",219);
}
for(i=0;i<2;i++){
Sleep(SLEEP);
gotoxy(X_axis+i-2,Y_axis+3);
printf("%c",223);
}
for(i=3;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis+i-2,Y_axis+3);
printf("%c",223);
}
X_axis+=2;
}
void F(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=5;i>=0;i--){
gotoxy(X_axis+i,Y_axis);
printf("%c",219);
Sleep(SLEEP);}
for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis+1,Y_axis-3);
for(i=0;i<5;i++){
Sleep(SLEEP);
printf("%c",220);}
X_axis+=5;
}
void G(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis+5,Y_axis+1);
Sleep(SLEEP);
printf("%c",219);

for(i=5;i>=0;i--){
gotoxy(X_axis+i,Y_axis);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
Sleep(SLEEP);
printf("%c",219);
}
for(i=1;i<3;i++){
gotoxy(X_axis+5,Y_axis-i);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis+4,Y_axis-2);
Sleep(SLEEP);
printf("%c",219);
X_axis+=5;
}
void g(int New_line){
int i=0;
Y_axis=Y+1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
for(i=0;i<4;i++){
printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis,++Y_axis);
printf("%c  %c",219,219);
gotoxy(X_axis,++Y_axis);
for(i=0;i<4;i++){
printf("%c",219);
Sleep(SLEEP);}
for(i=0;i<2;i++){
    gotoxy(3+X_axis,++Y_axis);
printf("%c",219);
Sleep(SLEEP);}
gotoxy(X_axis,Y_axis);
printf("%c%c%c%c",219,219,219,219);
X_axis+=3;
}
void h(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
Sleep(SLEEP);
gotoxy(X_axis,Y_axis+i);
printf("%c",219);
}
gotoxy(X_axis+1,Y_axis+3);
for(i=1;i<4;i++){
Sleep(SLEEP);
printf("%c",223);
}
for(i=0;i<3;i++){
Sleep(SLEEP);
gotoxy(X_axis+3,Y_axis+i+3);
printf("%c",219);
}
X_axis+=3;
}
void H(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
Sleep(SLEEP);
gotoxy(X_axis,Y_axis+i);
printf("%c",219);
}
for(i=0;i<6;i++){
Sleep(SLEEP);
gotoxy(X_axis+4,Y_axis+i);
printf("%c",219);
}
gotoxy(X_axis,Y_axis+3);
for(i=0;i<4;i++){
Sleep(SLEEP);
printf("%c",219);
}
X_axis+=4;
}
void I(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
for(i=0;i<=6;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=1;i<6;i++){
    Sleep(SLEEP);
    gotoxy(X_axis+3,i+Y_axis);
    printf("%c",219);
}
gotoxy(X_axis,5+Y_axis);
for(i=0;i<=6;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
X_axis+=6;
}
void i(int New_line){
            int i=0;
        Y_axis=Y+New_line;
            X_axis+=The_distance_between_the_characters;
    gotoxy(X_axis,Y_axis++);
    printf("%c",219);
    for(i=0;i<3;i++){
        gotoxy(X_axis,++Y_axis);
        printf("%c",219);
        Sleep(SLEEP);}

}
void J(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
Sleep(SLEEP);
printf("%c",222);
for(i=0;i<6;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<6;i++){
gotoxy(X_axis+3,i+Y_axis);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<4;i++){
gotoxy(X_axis+3-i,5+Y_axis);
Sleep(SLEEP);
printf("%c",219);
}

for(i=5;i>3;i--){
gotoxy(X_axis,i+Y_axis);
Sleep(SLEEP);
printf("%c",219);
}


X_axis+=6;
}
void j(int New_line){
    int i=0;
    Y_axis=Y+New_line;
    X_axis+=The_distance_between_the_characters-1;
    for(i=0;i<4;i++){
    gotoxy(X_axis+3,Y_axis+2+i);
    Sleep(SLEEP);
    printf("%c",219);
    }

    for(i=3;i>0;i--){
    gotoxy(X_axis+i,Y_axis+5);
    Sleep(SLEEP);
    printf("%c",219);
    }
    gotoxy(X_axis+1,Y_axis+4);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(X_axis+3,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

X_axis+=3;
}
void K(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<3;i++){
gotoxy(X_axis-i+3,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<3;i++){
gotoxy(X_axis+3-i,Y_axis-i+5);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=4;
}
void k(int New_line){
    int i=0;
    Y_axis=Y-1+New_line;
    X_axis+=The_distance_between_the_characters;
    for(i=0;i<6;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
    }
for(i=3;i>0;i--){
gotoxy(X_axis+3-i,Y_axis+i+2);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis+2,Y_axis+5);
Sleep(SLEEP);
printf("%c",219);

X_axis+=3;
}
void L(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis,Y_axis+5);
for(i=0;i<3;i++){
Sleep(SLEEP);
printf("%c",219);
}
Sleep(SLEEP);
printf("%c",221);

X_axis+=3;
}
void l(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

}
void M(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=5;i>=0;i--){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<3;i++){
gotoxy(X_axis+i,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+3,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);

for(i=3;i>0;i--){
gotoxy(X_axis+i+3,Y_axis-i+3);
Sleep(SLEEP);
printf("%c",219);
}

for(i=5;i>=0;i--){
gotoxy(X_axis+6,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=6;
}
void m(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis+2);
Sleep(SLEEP);
printf("%c",220);

for(i=0;i<3;i++){
gotoxy(X_axis,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+1,Y_axis+3);
Sleep(SLEEP);
printf("%c",219);

for(i=0;i<3;i++){
gotoxy(X_axis+2,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+3,Y_axis+3);
Sleep(SLEEP);
printf("%c",219);

for(i=0;i<3;i++){
gotoxy(X_axis+4,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=4;
}
void n(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis+2);
Sleep(SLEEP);
printf("%c",220);

for(i=0;i<3;i++){
gotoxy(X_axis,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+1,Y_axis+3);
Sleep(SLEEP);
printf("%c",219);

for(i=0;i<3;i++){
gotoxy(X_axis+2,Y_axis+i+3);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=2;
}
void N(int New_line){

int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=5;i>=0;i--){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<5;i++){
gotoxy(X_axis+i,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}


for(i=5;i>=0;i--){
gotoxy(X_axis+5,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=5;
}
void o(int New_line){
    int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters;
        gotoxy(X_axis,++Y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

    for(i=1;i<3;i++){
    gotoxy(X_axis,Y_axis+i);
    printf("%c   %c",219,219);
Sleep(SLEEP);}

    gotoxy(X_axis,++Y_axis+2);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

X_axis+=4;
}
void O(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;


for(i=5;i>=0;i--){
gotoxy(X_axis+i,Y_axis);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
Sleep(SLEEP);
printf("%c",219);
}
for(i=0;i<6;i++){
gotoxy(X_axis+6,Y_axis-i);
Sleep(SLEEP);
printf("%c",219);
}

X_axis+=6;
}
void p(int New_line){
int i=0;
Y_axis=Y+2+New_line;
    X_axis+=The_distance_between_the_characters;
    gotoxy(X_axis,Y_axis-1);
    printf("%c",220);
    gotoxy(X_axis,Y_axis);
    for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SLEEP);}
    gotoxy(X_axis,++Y_axis);

    printf("%c  %c",219,219);
    gotoxy(X_axis,++Y_axis);
    for(i=0;i<4;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<3;i++){
    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

X_axis+=3;
Y_axis--;
}
void P(int New_line){
int i=0;
Y_axis=Y-1+New_line;
    X_axis+=The_distance_between_the_characters;

    gotoxy(X_axis,Y_axis+2);
    for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",219);
    }


    for(i=0;i<3;i++){
    gotoxy(X_axis+3,Y_axis+2-i);
    Sleep(SLEEP);
    printf("%c",219);
    }

    for(i=0;i<3;i++){
    gotoxy(X_axis+3-i,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
    }

    for(i=0;i<6;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);}

X_axis+=3;
}
void Q(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;


for(i=5;i>=0;i--){
gotoxy(X_axis+i,Y_axis);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<5;i++){
Sleep(SLEEP);
gotoxy(X_axis,++Y_axis);
printf("%c",219);}
gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
Sleep(SLEEP);
printf("%c",219);
}
for(i=0;i<6;i++){
gotoxy(X_axis+6,Y_axis-i);
Sleep(SLEEP);
printf("%c",219);
}

for(i=0;i<4;i++){
    gotoxy(X_axis+4+i,Y_axis+i-2);
    Sleep(SLEEP);
    printf("%c",275);
}

X_axis+=7;
}
void q(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

for(i=2;i>=0;i--){
    gotoxy(X_axis+i+3,Y_axis-i+10);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=6;i>0;i--){
    gotoxy(X_axis+3,Y_axis+i+3);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+3,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",220);

for(i=0;i<3;i++){
    gotoxy(X_axis-i+3,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<3;i++){
    gotoxy(X_axis,i+Y_axis+3);
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<3;i++){
    gotoxy(X_axis+i,Y_axis+5);
    Sleep(SLEEP);
    printf("%c",219);
}

X_axis+=5;
}
void R(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

for(i=6;i>=0;i--){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}
gotoxy(X_axis,Y_axis);
for(i=0;i<4;i++){
   Sleep(SLEEP);
   printf("%c",219);

}


    gotoxy(X_axis+3,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+4,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+4,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);

for(i=0;i<4;i++){
gotoxy(X_axis-i+3,Y_axis+3);
   Sleep(SLEEP);
   printf("%c",219);

}

for(i=0;i<4;i++){
    gotoxy(X_axis+3+i,Y_axis+3+i);
    Sleep(SLEEP);
    printf("%c",219);

}

X_axis+=6;
}
void r(int New_line){
int i=0;
Y_axis=Y+2+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);

for(i=0;i<4;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}

gotoxy(X_axis+1,Y_axis);
Sleep(SLEEP);
printf("%c",223);

gotoxy(X_axis+2,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);

gotoxy(X_axis+3,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);


gotoxy(X_axis+4,Y_axis);
Sleep(SLEEP);
printf("%c",223);

X_axis+=4;
}
void S(int New_line){
    int i=0;
    Y_axis=Y-1+New_line;
    X_axis+=The_distance_between_the_characters;

    gotoxy(X_axis+4,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+3,Y_axis-1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis-1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+1,Y_axis-1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+1,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+3,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);


    gotoxy(X_axis+4,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+4,Y_axis+4);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+3,Y_axis+5);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+5);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+1,Y_axis+5);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis,Y_axis+4);
    Sleep(SLEEP);
    printf("%c",219);

X_axis+=4;
}
void s(int New_line){
    int i=0;
    Y_axis=Y+New_line;
    X_axis+=The_distance_between_the_characters-1;

    gotoxy(X_axis+3,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis+2,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(X_axis+1,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+3,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+4);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis+1,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",220);
X_axis+=3;
}
void t(int New_line){
int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters+1;
for(i=0;i<5;i++){
gotoxy(X_axis,Y_axis++);
printf("%c",219);
Sleep(SLEEP);}
printf("%c",219);
Y_axis-=4;
for(i=-1;i<2;i++){
gotoxy(i+X_axis,Y_axis);
printf("%c",219);
Sleep(SLEEP);}
X_axis+=1;
}
void T(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
for(i=0;i<5;i++){
    Sleep(SLEEP);
    printf("%c",219);
}
for(i=0;i<6;i++){
gotoxy(X_axis+2,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}
X_axis+=4;
}
void U(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
for(i=0;i<5;i++){
gotoxy(X_axis,Y_axis++);
Sleep(SLEEP);
printf("%c",219);
}
gotoxy(X_axis+1,Y_axis);
for(i=0;i<3;i++){
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=4;i>=0;i--){
    gotoxy(X_axis+4,--Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

X_axis+=4;
}
void u(int New_line){
int i=0;
Y_axis=Y+New_line+1;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,++Y_axis);
Sleep(SLEEP);
printf("%c  %c",219,219);

gotoxy(X_axis,++Y_axis);
Sleep(SLEEP);
printf("%c  %c",219,219);
gotoxy(X_axis,++Y_axis);
for(i=0;i<4;i++){
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+3,++Y_axis);
printf("%c",223);
X_axis+=4;
}
void V(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis);
Sleep(SLEEP);
printf("%c",222);

for(i=1;i<6;i++){
    gotoxy(i+X_axis,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=4;i>0;i--){
    gotoxy(X_axis+10-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+10,Y_axis);
    Sleep(SLEEP);
    printf("%c",221);

X_axis+=10;
}
void v(int New_line){
int i=0;
Y_axis=Y+1+New_line;
X_axis+=The_distance_between_the_characters-1;

gotoxy(++X_axis,Y_axis);
Sleep(SLEEP);
printf("%c",222);

for(i=1;i<4;i++){
    gotoxy(i+X_axis,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=2;i>0;i--){
    gotoxy(X_axis+6-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+6,Y_axis);
    Sleep(SLEEP);
    printf("%c",221);

X_axis+=6;
}
void W(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis);
Sleep(SLEEP);
printf("%c",222);

for(i=1;i<6;i++){
    gotoxy(i+X_axis,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=4;i>0;i--){
    gotoxy(X_axis+10-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+10,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);


for(i=1;i<6;i++){
    gotoxy(i+X_axis+10,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=4;i>0;i--){
    gotoxy(X_axis+20-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+20,Y_axis);
    Sleep(SLEEP);
    printf("%c",221);

X_axis+=20;
}
void w(int New_line){
int i=0;
Y_axis=Y+1+New_line;
X_axis+=The_distance_between_the_characters;
X_axis-=1;
gotoxy(++X_axis,Y_axis);
Sleep(SLEEP);
printf("%c",222);

for(i=1;i<4;i++){
    gotoxy(i+X_axis,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=2;i>0;i--){
    gotoxy(X_axis+6-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+6,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



for(i=1;i<4;i++){
    gotoxy(i+X_axis+6,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=2;i>0;i--){
    gotoxy(X_axis+12-i,i+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis+12,Y_axis);
    Sleep(SLEEP);
    printf("%c",221);


X_axis+=12;
}
void X_(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;


    gotoxy(X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(1+X_axis,1+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(2+X_axis,2+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(3+X_axis,3+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(4+X_axis,4+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(5+X_axis,5+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    X_axis-=1;
    gotoxy(X_axis+6,Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(5+X_axis,1+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(4+X_axis,2+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(3+X_axis,3+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(2+X_axis,4+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(1+X_axis,5+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

X_axis+=6;
}
void x_(int New_line){
int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters-1;



    gotoxy(1+X_axis,1+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(2+X_axis,2+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(3+X_axis,3+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(4+X_axis,4+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    X_axis-=1;

    gotoxy(5+X_axis,1+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(4+X_axis,2+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(3+X_axis,3+Y_axis);
    Sleep(SLEEP);
    printf("%c",254);

    gotoxy(2+X_axis,4+Y_axis);
    Sleep(SLEEP);
    printf("%c",219);

X_axis+=5;
}
void Y_(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

for(i=0;i<2;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);



    gotoxy(X_axis+1,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",220);



    gotoxy(X_axis+4,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);



    gotoxy(X_axis+3,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",220);




for(i=0;i<2;i++){
    gotoxy(X_axis+4,Y_axis+1-i);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=0;i<3;i++){
    gotoxy(X_axis+2,Y_axis+i+3);
    Sleep(SLEEP);
    printf("%c",219);
}


X_axis+=4;
}
void y_(int New_line){
int i=0;
Y_axis=Y+1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,++Y_axis);
printf("%c  %c",219,219);

gotoxy(X_axis,++Y_axis);
printf("%c  %c",219,219);
gotoxy(X_axis,++Y_axis);
for(i=0;i<4;i++){
printf("%c",219);
Sleep(SLEEP);
}

for(i=0;i<2;i++){
gotoxy(3+X_axis,++Y_axis);
printf("%c",219);
Sleep(SLEEP);
}

gotoxy(X_axis,Y_axis);
printf("%c%c%c%c",219,219,219,219);

X_axis+=3;
}
void Z(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis);
for(i=0;i<6;i++){
Sleep(SLEEP);
printf("%c",219);
}

for(i=4;i>=0;i--){
gotoxy(X_axis+i,Y_axis+5-i);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis,Y_axis+5);
for(i=0;i<6;i++){
Sleep(SLEEP);
printf("%c",219);
}



X_axis+=5;
}
void z(int New_line){
int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters;

gotoxy(X_axis,Y_axis);
for(i=0;i<5;i++){
Sleep(SLEEP);
printf("%c",219);
}

for(i=3;i>=0;i--){
gotoxy(X_axis+i,Y_axis+4-i);
Sleep(SLEEP);
printf("%c",219);
}


gotoxy(X_axis,Y_axis+4);
for(i=0;i<5;i++){
Sleep(SLEEP);
printf("%c",219);
}



X_axis+=4;
}


void _Ub(int New_line){
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters;
gotoxy(X_axis,Y_axis);
printf("%c",221);

}
void _1_(int New_line){//    ! ))))  !   (((((
int i=0;
Y_axis=Y-1+New_line;
X_axis+=The_distance_between_the_characters+1;
gotoxy(++X_axis,Y_axis+5);
printf("%c",219);

gotoxy(X_axis,Y_axis+4);
printf("%c",223);

gotoxy(X_axis,Y_axis+3);
printf("%c",219);

gotoxy(X_axis,Y_axis+2);
printf("%c",219);

gotoxy(X_axis,Y_axis+1);
printf("%c",219);

gotoxy(X_axis,Y_axis);
printf("%c",219);


X_axis+=2;
}
void Plus(int New_line){
int i=0;
Y_axis=Y+New_line;
X_axis+=The_distance_between_the_characters+3;

    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",220);

for(i=1;i<4;i++){

    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}
X_axis-=2;
for(i=0;i<5;i++){
        if(i==2)
        continue;
    gotoxy(X_axis+i,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);
}

X_axis+=5;
}

