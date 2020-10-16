Procedure Zug;
Var
 C     : Array[1..3] of Char;
 S     : String;
 n     : Byte;
 Error : Integer;
const
  Screen : array[1..5] of PointType =
   ((x:   0; y:   0),
    (x: 640; y:   0),
    (x: 640; y: 480),
    (x:   0; y: 480),
    (x:   0; y:   0));
Label 1,2,3,5;
{$I Pruefen.inc}
Begin
 If Spieler=1 Then SetColor(5);
 If Spieler=2 Then SetColor(6);
 If Spieler=3 Then SetColor(2);
 If Spieler=4 Then SetColor(3);
 Outtextxy(240,450,'Bitte Feld eingeben: ');
 gotoxy(52,25);
 1:setcolor(0); outtextxy(400,450,c[1]);
 Repeat
  If not CPU[Spieler] Then c[1]:=readkey Else c[1]:=chr(Random(9)+49);
 Until c[1] in ['1','2','3','4','5','6','7','8','9',#27];
 If c[1]=#27 then getout;
 If not CPU[Spieler] Then setcolor(15); outtextxy(400,450,c[1]);
 2:setcolor(0); outtextxy(407,450,c[2]);
 Repeat
  If not CPU[Spieler] Then c[2]:=readkey Else c[2]:=chr(Random(11)+48);
  If c[2]=#58 then c[2]:=#13;
 Until c[2] in ['0','1','2','3','4','5','6','7','8','9',#13,#8,#27];
 If c[2]=#27 then getout;
 if not ((c[2] in [#13,#8]) or (CPU[Spieler])) then Begin
  setcolor(15); outtextxy(407,450,c[2]);
 End;
 If c[2]=#8 then goto 1;
 If c[2]=#13 then Begin
  s:=c[1]; c[2]:=#255; goto 3;
 End;
 Repeat
  If not CPU[Spieler] Then c[3]:=readkey Else c[3]:=#13;
 Until c[3] in [#13,#8,#27];
 If c[3]=#27 then getout;
 If c[3]=#8 then goto 2
  Else s:=c[1]+c[2];
 3:setcolor(0); outtextxy(400,450,c[1]);
 setcolor(0); outtextxy(407,450,c[2]);
 Val(s,FeldNr,Error); If FeldNr > 72 then goto 1;
 If not Pruefen(FeldNr) then goto 1
  Else Begin
   If CPU[Spieler] Then Begin
    setcolor(15); outtextxy(400,450,c[1]);
    setcolor(15); outtextxy(407,450,c[2]);
    Delay(5000);
    setcolor(0); outtextxy(400,450,c[1]);
    setcolor(0); outtextxy(407,450,c[2]);
   End;
   If Feld[Ziel]<>0 Then Begin
    For n:=0 to 3 do Begin
     If Feld[41+8*(Feld[Ziel]-1)+n]=0 Then Begin
      Feld[41+8*(Feld[Ziel]-1)+n]:=Feld[Ziel];
      setzen(Feld[Ziel],41+8*(Feld[Ziel]-1)+n);
      goto 5;
     End;
    End;
   End;
  5:Feld[FeldNr]:=0; Feld[Ziel]:=Spieler;
  setzen(0,FeldNr); setzen(Spieler,Ziel);
  End;
End;