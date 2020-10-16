Function NoTurn: Boolean;
Var
 n,i    : Byte;
 Figur  : Array[1..4] of Byte;
 PrFeld : Byte;
Begin
 NoTurn:=false;
 i:=0;
 For n:=1 to 72 do Begin
   If Feld[n]=Spieler Then Begin
     inc(i);
     Figur[i]:=n;
   End;
 End;
 i:=0;
 For n:=1 to 4 do Begin
   If Pruefen(Figur[n]) Then inc(i);
 End;
 If i=0 Then Noturn:=true;
End;