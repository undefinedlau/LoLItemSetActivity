// This is an attempt at creating item set json files for league of legends
// Brian Lau, 3/28/2017


Version 1 Steps:

1. Go to http://ddragon.leagueoflegends.com/tool/ and write down the id(s) of the items you want (they are after the item names)
2. Follow the example json file posted (singedtesting.json) to create your own json file. If you need an explanation on what each data field 
   represents go to https://developer.riotgames.com/item-sets.html 
   Other than that, "blocks" is an array, and each element of the array represents a row in the shop interface.
3. Save your file as any name you wish, and make sure you add ".json" (without the quotation marks) as the file extension.
4. Find the location of League of Legneds in your computer (Example: In my mac, it is Applications->League Of Legends). 
   Right click->Show Package Contents-> Config -> Champions -> (Pick your champ) -> Recommended
   For my computer, I had to do:  Show Package Contents -> Contents -> LoL before reaching Config. Either way, inside the Recommended folder
   is where you store your JSON file. 
5. Go in a custom game and test your item set. If there is no option for your item set in shop, the primary reason is that you formatted your
   file incorrectly. Go back into your file, debug, save, and then make a new game. There is no need to log out and back in again. For me, 
   my mistake was that I forgot a comma in my "items" array for a block.