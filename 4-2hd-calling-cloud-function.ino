#include <string>

//Instead of writing the pin over and over again, let's assign them a variable for reusability.
int ledRed = D2;    
int ledGreen = D3;
int ledBlue = D4;

int lightUp(String command);   //Initializing a function to turn on LEDs.

void setup() 
{
    //Register the cloud function
    Particle.function("lightUp", lightUp);
    
    //Setting the mode of the pin
    pinMode(ledRed, OUTPUT);
    pinMode(ledGreen, OUTPUT);
    pinMode(ledBlue, OUTPUT);
}

void loop() 
{

}

int lightUp(String command) 
{
    if(command == "red")
    {
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledBlue, LOW);
        digitalWrite(ledRed, HIGH);
    }
    else if(command == "green")
    {
        digitalWrite(ledRed, LOW);
        digitalWrite(ledBlue, LOW);
        digitalWrite(ledGreen, HIGH);
    }
    else if (command == "blue")
    {
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledBlue, HIGH);
    }
    else return -1;
    
    return 1;
}