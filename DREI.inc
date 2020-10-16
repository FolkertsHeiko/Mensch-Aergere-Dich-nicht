Function Drei:Boolean;
Var
 n, checkZ, CheckH : Byte;
 no                : Boolean;
Begin
  Drei:=false;
  checkZ:=0; CheckH:=0;
  no:=false;
  n:=49;
  Repeat
   dec(n);
   If Feld[n+8*(Spieler-1)] <> 0 then inc(checkZ)
    Else no:=true;
  Until (n=45) or no;
  If CheckZ=4 then begin
    Ende:=true;
    If Spieler=1 then Gewinner:='1'; If Spieler=2 then Gewinner:='2';
    If Spieler=3 then Gewinner:='3'; If Spieler=4 then Gewinner:='4';
  End;
  n:=40;
  Repeat
   inc(n);
   If Feld[n+8*(Spieler-1)] <> 0 then inc(checkH);
  Until n=44;
   if ((checkZ+checkH=4) or (checkH=4))
      and (NoTurn) Then drei:=true;
End;