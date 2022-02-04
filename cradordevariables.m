indo=[fdo',fdo2',fdo3',fdo4',fdo5',fdo6',fdo7',fdo8',fdo9',fdo10',na',na2',na3',na4',fmi',fmi2',fsol',fsol2',fsi',fsi2']
outdo=[2,2,2,2,2,0,0,0,0,0,0,0,0,0,0]
inmi=[fmi',fmi2',fmi3',fmi4',fmi5',fmi6',fmi7',fmi8',fmi9',fmi10',na',na2',na3',na4',fdo',fdo2',fsol',fsol2',fsi',fsi2']
outmi=[4,4,4,4,4,0,0,0,0,0,0,0,0,0,0]
insol=[fsol',fsol2',fsol3',fsol4',fsol5',fsol6',fsol7',fsol8',fsol9',fsol10',na',na2',na3',na4',fmi',fmi2',fdo',fdo2',fsi',fsi2']
outsol=[6,6,6,6,6,0,0,0,0,0,0,0,0,0,0]
insi=[fsi',fsi2',fsi3',fsi4',fsi5',fsi6',fsi7',fsi8',fsi9',fsi10',na',na2',na3',na4',fmi',fmi2',fsol',fsol2',fdo',fdo2']
outsi=[8,8,8,8,8,0,0,0,0,0,0,0,0,0,0]
Entrada=[na',na2',na3',na4', ...
        fdo',fdo2',fdo3',fdo4',fdo5',fdo6',fdo7',fdo8',fdo9',fdo10', ...
        fmi',fmi2',fmi3',fmi4',fmi5',fmi6',fmi7',fmi8',fmi9',fmi10', ...
        fsol',fsol2',fsol3',fsol4',fsol5',fsol6',fsol7',fsol8',fsol9',fsol10', ...
        fsi',fsi2',fsi3',fsi4',fsi5',fsi6',fsi7',fsi8',fsi9',fsi10']
   Salida=[0,0,0,0,2,2,2,2,2,2,2,2,2,2,4,4,4,4,4,4,4,4,4,4,6,6,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8]
  Salidav=[zeros(63,4),2*ones(63,10),4*ones(63,10),6*ones(63,10),8*ones(63,10),]
 Salidado=[0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
 Salidami=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
Salidasol=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0]
 Salidasi=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1]

subplot(3,2,1);
plot(fdo); hold on;
plot(fdo2); hold on; 
plot(fdo3); hold on;
plot(fdo4); hold on;
plot(fdo5); hold on;
plot(fdo6); hold on;
plot(fdo7); hold on;
plot(fdo8); hold on;
plot(fdo9); hold on;
plot(fdo10); hold on;

subplot(3,2,2);
plot(fmi); hold on;
plot(fmi2); hold on; 
plot(fmi3); hold on;
plot(fmi4); hold on;
plot(fmi5); hold on;
plot(fmi6); hold on;
plot(fmi7); hold on;
plot(fmi8); hold on;
plot(fmi9); hold on;
plot(fmi10); hold on;
subplot(3,2,3);
plot(fsol); hold on;
plot(fsol2); hold on; 
plot(fsol3); hold on;
plot(fsol4); hold on;
plot(fsol5); hold on;
plot(fsol6); hold on;
plot(fsol7); hold on;
plot(fsol8); hold on;
plot(fsol9); hold on;
plot(fsol10); hold on;
subplot(3,2,4);
plot(fsi); hold on;
plot(fsi2); hold on; 
plot(fsi3); hold on;
plot(fsi4); hold on;
plot(fsi5); hold on;
plot(fsi6); hold on;
plot(fsi7); hold on;
plot(fsi8); hold on;
plot(fsi9); hold on;
plot(fsi10); hold on;
subplot(3,2,5);
plot(na); hold on;
plot(na2); hold on; 
plot(na3); hold on;
plot(na4); hold on;


%onshape crador
URL='https://cad.onshape.com/documents/e7dd3d18a5ab1474f340865b/w/045c7ac18a2155191fd0cd92/e/22bb5b9e017658252379e98e'
%ruta de almacenamientoi
RUTA='A:\Usuarios\TATTO PC\Desktop\univesidad\Procesamiento video y audio\proyecto 6 intelingencia artificial\crro prueba'
%crea archivo xml
XML=smexportonshape(URL,'FolderPath',RUTA);
%crea una ruta con el archivo creado
NOMBRE_ARCHIVO=strcat(RUTA,'\',XML);
%exporta en alchovo cml a simechanics
smimport(NOMBRE_ARCHIVO)