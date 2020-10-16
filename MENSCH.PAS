Program Mensch_Aergere_Dich_Nicht;
uses crt,turbo3,graph;
Var
 Feld       : Array[1..72] of Byte;
 FeldNr     : Integer;
 Zahl       : Byte;
 Spieler    : Byte;
 LastPlayer : Integer;
 LastNoTurn : Boolean;
 Mehrfach   : Byte;
 Ziel       : Byte;
 Ende,Demo  : Boolean;
 n,i        : Byte;
 X, Y       : Array[1..72] of Integer;
 N1,N2,N3,N4: Array[1..72] of Integer;
 driver, mode, ErrCode : Integer;
 CPU        : Array[1..4] of Boolean;
 C          : Char;
 Error      : Integer;
 Gewinner   : String;
Label 1;
{$I GetOut.inc}
{$I Pruefen.inc}
{$I Noturn.inc}
{$I Kube.inc}
{$I Wuerfel.inc}
{$I Feld.inc}
{$I Init.inc}
{$I setzen.inc}
{$I Zug.inc}
{$I Drei.inc}
{$I Next.inc}
Begin
 ClrScr;
 CPU[1]:=false;
 CPU[2]:=false;
 CPU[3]:=false;
 CPU[4]:=false;
 WriteLn('Wieviele Computerspieler ? (0-4 [vier=Demo-Modus]) ');
 Repeat C:=Readkey; Until C in ['0','1','2','3','4'];
 Val(c,i,error); For n:=4 downto (5-i) do CPU[n]:=true;
 If i=4 then Demo:=true Else Demo:=false;
1:Gewinner:='';
 driver:=Detect;
 initgraph(driver,mode,'.\BGI');
 ErrCode:=graphresult;
 if ErrCode=grok then Begin
 Init; NextInit;
 Ende:=false;
 i:=0; n:=0;
 Spieler:=1;
 Spielfeld;
   For n:=1 to 72 do setzen(0,n);
   For n:=1 to 72 do setzen(Feld[n],n);
   SetColor(8); Outtextxy(240,450,'Bitte Feld eingeben: ');
   If Demo Then Outtextxy(0,0,'Demo Verlassen: <Esc>')
    Else Outtextxy(0,0,'Spiel Verlassen: <Esc>');
 Repeat
    If Keypressed then C:=Readkey; if c=#27 then getout;
   Randomize;
   Wuerfel;
    If Keypressed then C:=Readkey; if c=#27 then getout;
   If NoTurn Then Delay(4000) Else Begin i:=2; Zug; End;
    If Keypressed then C:=Readkey; if c=#27 then getout;
   inc(i);
   Lastplayer:=Spieler;
   If (Zahl <> 6) and ((not Drei) or (i>=3)) Then Begin
    i:=0;
    SetColor(8); Outtextxy(240,450,'Bitte Feld eingeben: ');
    If CPU[Spieler] Then Delay(10000) Else Delay(5000);
    If Spieler < 4 then inc(Spieler) Else Spieler:=1;
   End;
 Until Ende;
 For n:=1 to 72 do setzen(0,n);
 For n:=1 to 72 do setzen(Feld[n],n);
 If Gewinner='1' Then SetColor(5);
 If Gewinner='2' Then SetColor(6);
 If Gewinner='3' Then SetColor(2);
 If Gewinner='4' Then SetColor(3);
 Gewinner:='Spieler '+Gewinner+' hat gewonnen !';
 SetTextStyle(1, HorizDir,4);
 outtextxy(140,0,Gewinner);
 If Demo Then Begin
   Delay(65535); closegraph; goto 1;
  End
   Else Repeat Until Keypressed;
 GetOut;
 End;
End.