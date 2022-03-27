// ECE556 - Copyright 2014 University of Wisconsin-Madison.  All Rights Reserved.

#include "ece556.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readBenchmark(const char *fileName, routingInst *rst){
  /*********** TO BE FILLED BY YOU **********/  
  FILE *file;
  char buff[255];
  file = fopen(fileName, "r");
  

  // read: grid # #
   fscanf(file, "%s", buff);
   memset(buff, 0, sizeof(buff)); //clear the contents of buff
   fscanf(file, "%s", buff);
   rst->gx = atoi(buff);
   memset(buff, 0, sizeof(buff));
   fscanf(file, "%s", buff);
   rst->gy = atoi(buff);
   memset(buff, 0, sizeof(buff));
   printf("grid : %i %i\n", rst->gx, rst->gy );

  // read: capacity #
   fscanf(file, "%s", buff);
   memset(buff, 0, sizeof(buff)); //clear the contents of buff
   fscanf(file, "%s", buff);
   rst->cap = atoi(buff);
   printf("capacity : %i\n", rst->cap);

   // read: num net #
   fscanf(file, "%s", buff);
   memset(buff, 0, sizeof(buff)); //clear the contents of buff
   fscanf(file, "%s", buff);
   memset(buff, 0, sizeof(buff));
   fscanf(file, "%s", buff);
   rst->numNets = atoi(buff);
   memset(buff, 0, sizeof(buff));
   printf("numNets : %i\n", rst->numNets);

  //Iterate over each net
   net *netArr[rst->numNets];
   for(int i=0; i<rst->numNets; i++){
      net netinst;
      fscanf(file, "%s", buff);
      memmove(buff, buff+1, strlen(buff+1) + 1);
      printf("%i\n",  atoi(buff));
      netinst.id = atoi(buff);
      printf("net id : %i\n",  netinst.id);
      memset(buff, 0, sizeof(buff));
      fscanf(file, "%s", buff);
      netinst.numPins = atoi(buff);
      memset(buff, 0, sizeof(buff));
      point *pins[netinst.numPins];
      //iterate over each point in each net
      for(int i = 0; i<(netinst.numPins); i++ ){
        point p;
        fscanf(file, "%s", buff);
        p.x = atoi(buff);
        memset(buff, 0, sizeof(buff));
        fscanf(file, "%s", buff);
        p.y = atoi(buff);
        printf("point: %i %i\n",  p.x, p.y);
        pins[0] = &p;
      }
  }




   fclose(file);


   
   
  //  net *nets ;		/* array of nets */
   
  //  int numEdges ; 	/* number of edges of the grid */
  //  int *edgeCaps; 	/* array of the actual edge capacities after considering for blockages */
  //  int *edgeUtils;	/* array of edge utilizations */  
  return 1;
}

int solveRouting(routingInst *rst){
  /*********** TO BE FILLED BY YOU **********/

  return 1;
}

int writeOutput(const char *outRouteFile, routingInst *rst){
  /*********** TO BE FILLED BY YOU **********/

  return 1;
}


int release(routingInst *rst){
  /*********** TO BE FILLED BY YOU **********/

  return 1;
}
  

