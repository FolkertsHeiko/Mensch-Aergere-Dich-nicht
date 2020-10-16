Function Pruefen(FeldNr:Byte):Boolean;
Var
  n : Integer;
Begin
 Pruefen:=true;
 Ziel:=FeldNr;
 If Spieler=1 Then Begin
  For n:=1 to Zahl do Begin
    Ziel:=N1[Ziel];
    If Ziel=0 Then Pruefen:=false;
    If (Zahl<6) and ((FeldNr>=41) and (FeldNr<=44)) Then Pruefen:=false;
    If (Zahl=6) and ((FeldNr>=41) and (FeldNr<=44)) Then Ziel:=2;
  End;
 End;
 If Spieler=2 Then Begin
  For n:=1 to Zahl do Begin
    Ziel:=N2[Ziel];
    If Ziel=0 Then Pruefen:=false;
    If (Zahl<6) and ((FeldNr>=49) and (FeldNr<=52)) Then Pruefen:=false;
    If (Zahl=6) and ((FeldNr>=49) and (FeldNr<=52)) Then Ziel:=12;
  End;
 End;
 If Spieler=3 Then Begin
  For n:=1 to Zahl do Begin
    Ziel:=N3[Ziel];
    If Ziel=0 Then Pruefen:=false;
    If (Zahl<6) and ((FeldNr>=57) and (FeldNr<=60)) Then Pruefen:=false;
    If (Zahl=6) and ((FeldNr>=57) and (FeldNr<=60)) Then Ziel:=22;
  End;
 End;
 If Spieler=4 Then Begin
  For n:=1 to Zahl do Begin
    Ziel:=N4[Ziel];
    If Ziel=0 Then Pruefen:=false;
    If (Zahl<6) and ((FeldNr>=65) and (FeldNr<=68)) Then Pruefen:=false;
    If (Zahl=6) and ((FeldNr>=65) and (FeldNr<=68)) Then Ziel:=32;
  End;
 End;
 If (Feld[Ziel]=Spieler) or (Feld[FeldNr]<>Spieler) Then Pruefen:=false;
End;