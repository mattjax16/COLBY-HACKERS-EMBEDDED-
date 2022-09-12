////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------Intro-------------------------------------------------------------////
////
//// This is the main file for the project.
////
//// It contains the main function to run the entire program.
////
//// Ironically, the main function to run this program is in the file itself.
//// called app_main().
////
//// (app_main() is the default function name for platformio (esp-idf) projects)
////
//// ----------------- General Breakdown -------------------------------------------------------////
////
//// In this file the app_main() function is called. This function can be broken down into 2 main
//// overarching parts.
////
//// 1. The first part is the initialization of the system. This is all the code that is run before the
////    main loop. This can include the initialization of the wifi, the initialization of the web server,
////    gpio pins, memory, etc.....
////
//// 2. The second part is the main loop. This is the code that is run after the initialization.
////    This is how the embedded system is able to interact with the outside world and run forever.
////
////
//// ----------------- Tips on how I would think about Embedded Software development -----------////
//// TODO: go thotough this and make sure it is correct I let the AI generate lot of this because im tired
//// 1. Think about the system as a whole. What is the system trying to do? What are the inputs and
////    outputs? What are the different components of the system? What are the different states of the
////    system? What are the different transitions between states? What are the different events that
////    can occur? What are the different actions that can be taken? What are the different conditions?
////
////
//// 2. Think about the system as a state machine. This is a very useful way to think about the system.
////    The system can be broken down into different states.
////
////
////
//// 3. Think about the system as a flow chart. This is a very useful way to think about the system.
////
////
//// 4. Think about the system as a tree. This is a very useful way to think about the system.
////
////
//// 5. Think about the system as a graph. This is a very useful way to think about the system.
////
////
//// 6. Think about the system as a set of functions. This is a very useful way to think about the system.
////-------------------------------------------------------------------------------------------------////
////
////
////
////
////
////
////
////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------Includes-----------------------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////
// Include FreeRTOS for delay
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>


////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------Defines------------------------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------Global Variables---------------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------MAIN SETUP FUNCTION-----------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////
void main_setup(void)
{
	printf("Setting up...\n"); // print to the console

	// wait for 2 seconds
	vTaskDelay(2000 / portTICK_PERIOD_MS);// dividing 1000 by portTICK_PERIOD_MS converts the time to milliseconds
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------MAIN LOOP---------------------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////
void main_loop(void)
{
	// The main loop will run forever in this while loop.
	while(true)
	{

		printf("This is the main loop is running...\n"); // print to the console

		// wait for 1 second
		vTaskDelay(1000 / portTICK_PERIOD_MS);// dividing 1000 by portTICK_PERIOD_MS converts the time to milliseconds

	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////
//// -------------------------Main Function------------------------------------------------------////
////////////////////////////////////////////////////////////////////////////////////////////////////
void app_main() {

}