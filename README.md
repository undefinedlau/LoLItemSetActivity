# Description
Author: Brian Lau  
This project creates item set json files for the game League of Legends.   
There are two versions of the project listed below. Note that this project is 
now obsolete due to Riot Games restoring the item sets feature.    


# 3/28/2017 - Version 1 Steps:

1. Go to *http://ddragon.leagueoflegends.com/tool/* and write down 
the id(s) of the items you want (they are after the item names).      
2. Follow the example json file posted (singedtesting.json) to create your own 
json file. If you need an explanation on what each data field represents, 
go to *https://developer.riotgames.com/item-sets.html*
Other than that, "blocks" is an array, and each element of the array represents 
a row in the shop interface.  
3. Save your file as any name you wish, and make sure you add the extension 
*.json*. I have provided a .txt file of the json file just in case the json file
does not open.   
4. Find the location of League of Legends in your computer 
   (Example: In my mac, it is Applications->League Of Legends). 
   Right click -> Show Package Contents -> Config -> Champions -> (Pick your 
   champ) -> Recommended
   For my computer, I had to do: *Show Package Contents* -> *Contents* -> *LoL* 
   before reaching *Config*. Either way, inside the *Recommended* folder is 
   where you store your JSON file.   
5. Go in a custom game and test your item set. If there is no option for your 
item set in shop, the primary reason is that you formatted your file 
incorrectly. Go back into your file, debug, save, and then make a new game. 
There is no need to log out and back in again. For me, my mistake was that I 
forgot a comma in my "items" array for a block.    


# 3/29/2017 - Version 2 Steps
Note: Version 2 requires your computer to be able to compile and execute a C++ 
program.    

1. Download the files from the github, and locate them on your computer  
2. In the directory where these files are located, type:
        g++ -o lol.out LoLJSONFileGenerator.cpp 
   This should create an executable called lol.out  
3. Type lol.out or ./lol.out to run the program, and follow the steps.  
4. Locate jsonfile.json. Go inside the League of Legends app 
(with Show Package Contents or the equivalent for Windows machines) and navigate 
to Config -> Champions -> (Pick your champ) -> Recommended. Place your json file
in your chosen champion's Recommended folder.  
5. Go to a custom game and test it out! The JSON file is not pretty-formatted, 
and so if you want to see a cleaner version of what the program wrote, 
please copy and paste the code into the block in this website:
    https://jsonformatter.curiousconcept.com/  

