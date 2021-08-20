# Candyland
Virtual Candyland written in C++ and QT.
* 2-4 players can play, blue, red, yellow, and green respectively.
* The game board has a track of 134 colors and special character spaces that lead to the castle. 
* During each player's turn, they chose a card that represents a color or special character they should move to on the game board.
* The player who reaches King Candy's castle first wins.
* Cards : 
  * Single : red, purple, blue, yellow, orange, and green
  * Double : red, purple, blue, yellow, orange, and green
  * Speciality : “Frostline”, “Mr. Mint”, “Gramma Nut”, “Jolly”, “Plumpy”, and “Princess Lolly.”
* For each card type, there are 6 each of the single, 4 each of the double, and 1 each for the speciality

## The Terminal Version : ##
* Written in C++
* No GUI, player turns and cards are displayed via text in the terminal.
* The user first chooses the number of playes and the color for each player using a text-based menu.
* During each players turn:
  * the player hits "enter" on their keyboard 
  * the program chooses a random card from the deck
  * the program ouputs the card, and the player's updated distance from the castle
* This continues until one of the players reach the castle.

## The GUI Version : ##
*In the process of development...*
* Written in C#
* Utilizes Unity
  
