# Sudoku Game
this repository contains  all the details required for the making a sudoku game that you can play on a variety of difficulties.<br>
<br>**Title and Team Information**:<br>
Title:  Sudoku Game, Checker, and Solver<br>
<br>**Team Members**:<br>
Manal Faisal: Programmer 1/Team Leader <br>
Fatima Faizan: Programmer 2<br>
Minahil Tahir: Git manager/Tester<br>
<br>**Overview/Programme Description**:<br>
This code is of a sudoku game.What makes our code different from other sadoku codes is that we offer our users a variety of difficulties to choose from with a colorful display to give them a sense of freedom.A score board will be displayed at the end of the game which will determine whether you won or lost.<br>
<br>**Programme/Logic Design**:<br>
1. The user is first asked the difficulty of the game.
   >the number of grids filled depends on the level of the difficulty that the user chooses.<br>
2. <ins>2D arrays</ins> have been used to make 9 3x3 grids.<br>
2. User is asked the position of the number they want to place by x-y coordinates.<br>
3. The player is asked if he/she wishes to continue the game.If he chooses not to,a solved solution will be displayed.<br>
4. If the player chooses to continue, they will continue to fill the appropiate boxes with the number they wish.<br>
5. A clue function has been made using for loops where if a user wantsa a specific mxn grid to be filled, they can do so to make the game eaiser.But, by doing so, the score will decrease.<br>
6. <ins>Back-tracking</ins> through recurrsion has been used to form a solver function that will continously retrace the previous steps to ensure that each box in the grid meets the given conditions and will auto-fill the boxes with appropiate digits.<br>
7. Scoring has been handled by increments and decrements.<br>
 >  +10 points for each correct placement.<br>
 >  −5 for an invalid move.<br>
 >  −10 for each hint.<br>
 >  −20 if the full solution is requested.<br>
8. Different color codes have been used to make it more appealing to the user.<br>


<br>**Execution Instructions**:<br>
The code has been designed and tested on **Visual Studio/Visual Studio Code** compiler.<br>
>The code might fail to run on online compilers due the complexity between these two compilers.One compiler might be able to debug something successfully while the other compiler fails to do so.<br>
   1. Choose the difficulty of the game.<br>
   2. A sudoku board will be displayed in front of you.Now you can choose the x and y coordinates of the number you        wish to place in that board.<br>
   3. Your points will be displayed side by side, At some point you will be asked if you wish to continue or not, if       you choose not to then the solved board will be displayed.<br>
   4. If you choose to continue, play the game as usual and if you feel stuck, you can ask for a clue(a box of your        choice  will be automatically filled with the correct value).<br>
   5. In the end, your score will be displayed and the sudoku board with correct values will be displayed.<br>
   



<br>**Team Collaboration**:<br>
<br>Manal Faisal:<br> 
         This team member is essential for rechecking the code and <ins>adding additional features</ins> to it in order to keep it updated.Has worked with other team members to ensure all team members are on the same page regarding the code.<br>
         
<br>Fatima Faizan:<br> Responsible for <ins>coding the base of the sudoku game</ins> for each of the difficulty level where numbers  will be randomized and displayed once the user starts playing.<br>
<img width="881" height="60" alt="Image" src="https://github.com/user-attachments/assets/fb8a7671-0ab6-48c1-a887-3de6d9b295d4" /><br>

<br>Minahil Tahir:<br> Responsible for maintaining a structured README.md file on github including other git files.Moreover,this team member handles <ins>formation of flowchart of functions</ins> for this particular assignment along with testing possible outcomes of the code formed by the team.Has commited flowchart document on this repository.<br>
<img width="1778" height="109" alt="Image" src="https://github.com/user-attachments/assets/c275c98d-103b-4eea-bc88-40af2416fcce" /><br>


<br>**Ai Tool Reflection**:<br>
-Ai used: ChatGPT<br>
Reason: ChatGPT has been used by my team to generate the sudoku board containing playable values.<br>
<br>-No Ai was used for documentation.<br>
<br>-No Ai was used for brain-storming ideas for the sudoku game.<br>


<br>**Future Improvements**:<br>
Things that could have been improved are:<br>
1. OOP(object orienting programming) would have also been useful as the code would have been easier.Each object would have had its own blueprint(instructions).<br>

2. The use of databases would have also offered a lot of user-friendly options like saving your progress, saving your initial score that you can later beat, storing hints in a database and many more.<br>

3. If <ins>GUI</ins> was used, it would have offered more of a game feel, with less lag and it would have been **user-friendly**.<br>
 





