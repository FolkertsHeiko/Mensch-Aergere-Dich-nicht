Procedure Wuerfel;
Var
 S      : String;
const
  Triangle : array[1..5] of PointType =
   ((x: 304; y: 234),
    (x: 336; y: 234),
    (x: 336; y: 266),
    (x: 304; y: 266),
    (x: 304; y: 234));
Begin
 Zahl:=Random(6)+1;
 Str(Zahl,S);
 setcolor(0); setfillstyle(1,0);
 FillPoly(4,Triangle); Delay(1000);
 SetTextStyle(DefaultFont, HorizDir,4);
 If Spieler=1 Then SetFillStyle(1,5);
 If Spieler=2 Then SetFillStyle(1,6);
 If Spieler=3 Then SetFillStyle(1,2);
 If Spieler=4 Then SetFillStyle(1,3);
 FillPoly(4,Triangle);
 setcolor(0);
 Kube(Zahl,0);
 SetTextStyle(DefaultFont, HorizDir,1);
 If Keypressed then C:=Readkey; if c=#27 then getout;
End;
