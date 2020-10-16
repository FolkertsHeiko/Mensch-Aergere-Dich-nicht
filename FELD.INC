Procedure Spielfeld;
const
  Screen : array[1..5] of PointType =
   ((x:   0; y:   0),
    (x: 640; y:   0),
    (x: 640; y: 480),
    (x:   0; y: 480),
    (x:   0; y:   0));
Begin
 setcolor(0);
 SetFillStyle(1,0);
 FillPoly(4,Screen);
 {Rotes Haus}
 setcolor(12);
 circle(285,425,15); outtextxy(285,425,'2');
 circle(20,400,15); outtextxy(20,400,'41');
 circle(55,400,15); outtextxy(55,400,'42');
 circle(20,435,15); outtextxy(20,435,'43');
 circle(55,435,15); outtextxy(55,435,'44');
 {Rotes Ziel}
 circle(320,390,15); outtextxy(320,390,'45');
 circle(320,355,15); outtextxy(320,355,'46');
 circle(320,320,15); outtextxy(320,320,'47');
 circle(320,285,15); outtextxy(320,285,'48');
 {Gelbes Haus}
 setcolor(14);
 circle(145,215,15); outtextxy(145,215,'12');
 circle(20,45,15); outtextxy(20,45,'49');
 circle(55,45,15); outtextxy(55,45,'50');
 circle(20,80,15); outtextxy(20,80,'51');
 circle(55,80,15); outtextxy(55,80,'52');
 {Gelbes Ziel};
 circle(180,250,15); outtextxy(180,250,'53');
 circle(215,250,15); outtextxy(215,250,'54');
 circle(250,250,15); outtextxy(250,250,'55');
 circle(285,250,15); outtextxy(285,250,'56');
 {GrÅnes Haus}
 setcolor(10);
 circle(355,75,15); outtextxy(355,75,'22');
 circle(620,45,15); outtextxy(620,45,'57');
 circle(585,45,15); outtextxy(585,45,'58');
 circle(620,80,15); outtextxy(620,80,'59');
 circle(585,80,15); outtextxy(585,80,'60');
 {GrÅnes Ziel}
 circle(320,110,15); outtextxy(320,110,'61');
 circle(320,145,15); outtextxy(320,145,'62');
 circle(320,180,15); outtextxy(320,180,'63');
 circle(320,215,15); outtextxy(320,215,'64');
 {Blaues Haus}
 setcolor(9);
 circle(495,285,15); outtextxy(495,285,'32');
 circle(620,435,15); outtextxy(620,435,'65');
 circle(585,435,15); outtextxy(585,435,'66');
 circle(620,400,15); outtextxy(620,400,'67');
 circle(585,400,15); outtextxy(585,400,'68');
 {Blaues Ziel};
 circle(460,250,15); outtextxy(460,250,'69');
 circle(425,250,15); outtextxy(425,250,'70');
 circle(390,250,15); outtextxy(390,250,'71');
 circle(355,250,15); outtextxy(355,250,'72');
 {Feld}
 setcolor(15);
 {U}
 circle(320,425,15); outtextxy(320,425,'1');
 {LUO}
 circle(285,390,15); outtextxy(285,390,'3');
 circle(285,355,15); outtextxy(285,355,'4');
 circle(285,320,15); outtextxy(285,320,'5');
 circle(285,285,15); outtextxy(285,285,'6');
 circle(250,285,15); outtextxy(250,285,'7');
 {LRL}
 circle(215,285,15); outtextxy(215,285,'8');
 circle(180,285,15); outtextxy(180,285,'9');
 circle(145,285,15); outtextxy(145,285,'10');
 {L}
 circle(145,250,15); outtextxy(145,250,'11');
 {LLR}
 circle(180,215,15); outtextxy(180,215,'13');
 circle(215,215,15); outtextxy(215,215,'14');
 circle(250,215,15); outtextxy(250,215,'15');
 circle(285,215,15); outtextxy(285,215,'16');
 {LOU}
 circle(285,180,15); outtextxy(285,180,'17');
 circle(285,145,15); outtextxy(285,145,'18');
 circle(285,110,15); outtextxy(285,110,'19');
 circle(285,75,15); outtextxy(285,75,'20');
 {O}
 circle(320,75,15); outtextxy(320,75,'21');
 {ROU}
 circle(355,110,15); outtextxy(355,110,'23');
 circle(355,145,15); outtextxy(355,145,'24');
 circle(355,180,15); outtextxy(355,180,'25');
 circle(355,215,15); outtextxy(355,215,'26');
 {RLR}
 circle(390,215,15); outtextxy(390,215,'27');
 circle(425,215,15); outtextxy(425,215,'28');
 circle(460,215,15); outtextxy(460,215,'29');
 circle(495,215,15); outtextxy(495,215,'30');
 {R}
 circle(495,250,15); outtextxy(495,250,'31');
 {RRL}
 circle(460,285,15); outtextxy(460,285,'33');
 circle(425,285,15); outtextxy(425,285,'34');
 circle(390,285,15); outtextxy(390,285,'35');
 circle(355,285,15); outtextxy(355,285,'36');
 {ROU}
 circle(355,320,15); outtextxy(355,320,'37');
 circle(355,355,15); outtextxy(355,355,'38');
 circle(355,390,15); outtextxy(355,390,'39');
 circle(355,425,15); outtextxy(355,425,'40');
End;