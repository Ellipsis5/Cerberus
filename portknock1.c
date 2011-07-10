/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+																				+
+		portknock1.c	-	A simple portknocker in C which uses UDP packets	+
+							on specific ports in a specific order for the 		+
+							knock, then opens up a TCP Socket					+
+																				+
+		Author			-	Ellipsis											+
+		Version			-	0.0.1												+
+		Date			-	June 9, 2011										+
+																				+
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

// ----- INCLUDES ------------------------------------------------------------ //
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>


// -- Multithreading -- //
#include <pthread.h>

// -- Networking -- //
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

// -- Local -- //
#include "portknock.h"

// ----- DEFINITIONS --------------------------------------------------------- //


// ----- PROTOTYPES ---------------------------------------------------------- //


// ----- GLOBALS ------------------------------------------------------------- //


// ----- MAIN ---------------------------------------------------------------- //
int main(int argc, char *argv[])
{
	//Variables
	printf("Sizeof(int): %d\n", sizeof(int));

	return 0;
}