Procedure setzen(Spieler:Byte;FeldNr:Byte);
Var
 n : Byte;
 c : Word;
Begin
 If FeldNr < 41 Then c:=15;
 If ((41 <= FeldNr) AND (48 >= FeldNr)) OR (FeldNr=2)Then c:=12;
 If ((49 <= FeldNr) AND (56 >= FeldNr)) OR (FeldNr=12)Then c:=14;
 If ((57 <= FeldNr) AND (64 >= FeldNr)) OR (FeldNr=22) Then c:=10;
 If ((65 <= FeldNr) AND (72 >= FeldNr)) OR (FeldNr=32) Then c:=9;
 If Spieler=0 Then SetFillStyle(1,0);
 If Spieler=1 Then SetFillStyle(1,5);
 If Spieler=2 Then SetFillStyle(1,6);
 If Spieler=3 Then SetFillStyle(1,2);
 If Spieler=4 Then SetFillStyle(1,3);
 FloodFill(X[FeldNr]-2,Y[FeldNr]-2,c);
End;