Procedure Kube(Zahl,Rand:Byte);
Begin
 setcolor(0); SetFillStyle(1,0);
 If Zahl=1 then Begin
  circle(320,250,3); FloodFill(320,250,Rand);
 End;
 If Zahl=2 then Begin
  circle(312,242,3); FloodFill(312,242,Rand);
  circle(328,258,3); FloodFill(328,258,Rand);
 End;
 If Zahl=3 then Begin
  circle(312,258,3); FloodFill(312,258,Rand);
  circle(320,250,3); FloodFill(320,250,Rand);
  circle(328,242,3); FloodFill(328,242,Rand);
 End;
 If Zahl=4 then Begin
  circle(312,242,3); FloodFill(312,242,Rand);
  circle(328,242,3); FloodFill(328,242,Rand);
  circle(312,258,3); FloodFill(312,258,Rand);
  circle(328,258,3); FloodFill(328,258,Rand);
 End;
 If Zahl=5 then Begin
  circle(312,242,3); FloodFill(312,242,Rand);
  circle(328,242,3); FloodFill(328,242,Rand);
  circle(312,258,3); FloodFill(312,258,Rand);
  circle(328,258,3); FloodFill(328,258,Rand);
  circle(320,250,3); FloodFill(320,250,Rand);
 End;
 If Zahl=6 then Begin
  circle(312,242,3); FloodFill(312,242,Rand);
  circle(328,242,3); FloodFill(328,242,Rand);
  circle(312,250,3); FloodFill(312,250,Rand);
  circle(328,250,3); FloodFill(328,250,Rand);
  circle(312,258,3); FloodFill(312,258,Rand);
  circle(328,258,3); FloodFill(328,258,Rand);
  circle(250,320,3); FloodFill(250,320,Rand);
 End;
End;