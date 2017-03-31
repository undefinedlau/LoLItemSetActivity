//
//  main.cpp
//  LoLJSONFileGenerator
//
//  Created by Brian Lau on 3/29/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

string* createArray(string items[]) {

    items[1001] = "Boots of Speed";
    items[1004] = "Faerie Charm";
    items[1006] = "Rejuvenation Bead";
    items[1011] = "Giant's Belt";
    items[1018] = "Cloak of Agility";
    items[1026] = "Blasting Wand";
    items[1027] = "Sapphire Crystal";
    items[1028] = "Ruby Crystal";
    items[1029] = "Cloth Armor";
    items[1031] = "Chain Vest";
    items[1033] = "Null-Magic Mantle";
    items[1036] = "Long Sword";
    items[1037] = "Pickaxe";
    items[1038] = "B.F. Sword";
    items[1039] = "Hunter's Talisman";
    items[1041] = "Hunter's Machete";
    items[1042] = "Dagger";
    items[1043] = "Recurve Bow";
    items[1051] = "Brawler's Gloves";
    items[1052] = "Amplifying Tome";
    items[1053] = "Vampiric Scepter";
    items[1054] = "Doran's Shield";
    items[1055] = "Doran's Blade";
    items[1056] = "Doran's Ring";
    items[1057] = "Negatron Cloak";
    items[1058] = "Needlessly Large Rod";
    items[1082] = "The Dark Seal";
    items[1083] = "Cull";
    items[1400] = "Enchantment: Warrior"; // Blue smite
    items[1401] = "Enchantment: Cinderhulk"; // Blue smite
    items[1402] = "Enchantment: Runic Echoes"; // Blue smite
    items[1408] = "Enchantment: Warrior"; // Green smite
    items[1409] = "Enchantment: Cinderhulk"; // Green smite
    items[1410] = "Enchantment: Runic Echoes"; // Green smite
    items[1412] = "Enchantment: Warrior"; // Red smite
    items[1413] = "Enchantment: Cinderhulk"; // Red smite
    items[1414] = "Enchantment: Runic Echoes"; // Red smite
    items[1416] = "Enchantment: Bloodrazor"; // Blue
    items[1418] = "Enchantment: Bloodrazor"; // Green
    items[1419] = "Enchantment: Bloodrazor"; // Red
    items[2003] = "Health Potion";
    items[2010] = "Total Biscuit of Rejuvenation"; // from health potion
    items[2015] = "Kircheis Shard";
    items[2031] = "Refillable Potion";
    items[2032] = "Hunter's Potion";
    items[2033] = "Corrupting Potion";
    items[2045] = "Ruby Sightstone";
    items[2047] = "Oracle's Extract";
    items[2049] = "Sightstone";
    items[2051] = "Guardian's Horn";
    items[2053] = "Raptor Cloak";
    items[2055] = "Control Ward";
    items[2138] = "Elixir of Iron";
    items[2139] = "Elixir of Sorcery";
    items[2140] = "Elixir of Wrath";
    items[2301] = "Eye of the Watchers";
    items[2302] = "Eye of the Oasis";
    items[2303] = "Eye of the Equinox";
    items[3001] = "Abyssal Scepter";
    items[3003] = "Archangel's Staff";
    items[3004] = "Manamune";
    items[3006] = "Berserker's Greaves";
    items[3009] = "Boots of Swiftness";
    items[3010] = "Catalyst of Aeons";
    items[3020] = "Sorcerer's Shoes";
    items[3022] = "Frozen Mallet";
    items[3024] = "Glacial Shroud";
    items[3025] = "Iceborn Guantlet";
    items[3026] = "Guardian Angel";
    items[3027] = "Rod of Ages";
    items[3028] = "Chalice of Harmony";
    items[3030] = "Hextech GLP-800";
    items[3031] = "Infinity Edge";
    items[3033] = "Mortal Reminder";
    items[3034] = "Giant Slayer";
    items[3035] = "Last Whisper";
    items[3036] = "Lord Dominik's Regards";
    items[3040] = "Seraph's Embrace";
    items[3041] = "Mejai's Soulstealer";
    items[3042] = "Muramana";
    items[3044] = "Phage";
    items[3046] = "Phantom Dancer";
    items[3047] = "Ninja Tabi";
    items[3050] = "Zeke's Harbinger";
    items[3052] = "Jaurim's Fist";
    items[3053] = "Sterak's Gage";
    items[3056] = "Ohmwrecker";
    items[3057] = "Sheen";
    items[3060] = "Banner of Command";
    items[3065] = "Spirit Visage";
    items[3067] = "Kindlegem";
    items[3068] = "Sunfire Cape";
    items[3069] = "Talisman of Ascension";
    items[3070] = "Tear of the Goddess";
    items[3071] = "The Black Cleaver";
    items[3072] = "The Bloodthirster";
    items[3074] = "Ravenous Hydra";
    items[3075] = "Thornmail";
    items[3077] = "Tiamat";
    items[3078] = "Trinity Force";
    items[3082] = "Warden's Mail";
    items[3083] = "Warmog's Armor";
    items[3085] = "Runaan's Hurricane";
    items[3086] = "Zeal";
    items[3087] = "Statikk Shiv";
    items[3089] = "Rabadon's Deathcap";
    items[3091] = "Wit's End";
    items[3092] = "Frost Queen's Claim";
    items[3094] = "Rapid Firecannon";
    items[3096] = "Nomad's Medallion";
    items[3097] = "Targon's Brace";
    items[3098] = "Frostfang";
    items[3100] = "Lich Bane";
    items[3101] = "Stinger";
    items[3102] = "Banshee's Veil";
    items[3107] = "Redemption";
    items[3108] = "Fiendish Codex";
    items[3109] = "Knight's Vow";
    items[3110] = "Frozen Heart";
    items[3111] = "Mercury's Treads";
    items[3114] = "Aether Wisp";
    items[3115] = "Nashor's Tooth";
    items[3116] = "Rylai's Crystal Scepter";
    items[3117] = "Boots of Mobility";
    items[3122] = "Wicked Hatchet";
    items[3123] = "Executioner's Calling";
    items[3124] = "Guinsoo's Rageblade";
    items[3133] = "Caulfield's Warhammer";
    items[3134] = "Serrated Dirk";
    items[3135] = "Void Staff";
    items[3136] = "Haunting Guise";
    items[3139] = "Mercurial Scimitar";
    items[3140] = "Quicksilver Sash";
    items[3142] = "Youmuu's Ghostblade";
    items[3143] = "Randuin's Omen";
    items[3144] = "Bilgewater Cutlass";
    items[3145] = "Hextech Revolver";
    items[3146] = "Hextech Gunblade";
    items[3147] = "Duskblade of Draktharr";
    items[3151] = "Liandry's Torment";
    items[3152] = "Hextech Protobelt-01";
    items[3153] = "Blade of the Ruined King";
    items[3155] = "Hexdrinker";
    items[3156] = "Maw of Malmortius";
    items[3157] = "Zhonya's Hourglass";
    items[3158] = "Ionian Boots of Lucidity";
    items[3165] = "Morellonomicon";
    items[3174] = "Athene's Unholy Grail";
    items[3190] = "Locket of the Iron Solari";
    items[3191] = "Seeker's Armguard";
    items[3196] = "The Hex Core mk-1";
    items[3197] = "The Hex Core mk-2";
    items[3198] = "Perfect Hex Core";
    items[3200] = "Prototype Hex Core";
    items[3211] = "Spectre's Cowl";
    items[3222] = "Mikael's Crucible";
    items[3252] = "Poacher's Dirk";
    items[3285] = "Luden's Echo";
    items[3301] = "Ancient Coin";
    items[3302] = "Relic Shield";
    items[3303] = "Spellthief's Edge";
    items[3340] = "Warding Totem (Trinket)";
    items[3341] = "Sweeping Lens (Trinket)";
    items[3363] = "Farsight Alteration";
    items[3364] = "Oracle Alteration";
    items[3401] = "Face of the Mountain";
    items[3504] = "Ardent Censer";
    items[3508] = "Essence Reaver";
    items[3512] = "Zz'Rot Portal";
    items[3599] = "The Black Spear";
    items[3706] = "Stalker's Blade";
    items[3711] = "Tracker's Knife";
    items[3715] = "Skirmisher's Sabre";
    items[3742] = "Dead Man's Plate";
    items[3748] = "Titanic Hydra";
    items[3751] = "Bami's Cinder";
    items[3800] = "Righteous Glory";
    items[3801] = "Crystalline Bracer";
    items[3802] = "Lost Chapter";
    items[3812] = "Death's Dance";
    items[3814] = "Edge of Night";
    items[3901] = "Fire at Will";
    items[3902] = "Death's Daughter";
    items[3903] = "Raise Morale";
    
    return items;
} // store the items

int searchArrayOfItems(string itemYouWant, string items[4000])
{
    for (int i = 0; i < 4000; i++)
        if (itemYouWant.compare(items[i]) == 0)
            return i; // returns the index at which the item is found
    return -1; // if not found, return some random integer
}

void makeJSONFile(string titleOfItemSet, int InumBlocks, string items[4000]) {
    
    ofstream file;
    char titleofBlock[100];
    int InumItems = 0;
    string SnumItems = "";
    char itemYouWant[100];

    
    file.open("jsonfile.json");
    file << "{\"title\":\"";
    file << titleOfItemSet;
    file << "\", \"type\": \"custom\", \"map\": \"SR\", \"mode\": \"CLASSIC\", \"priority\": true, \"sortrank\": 0," << endl;
    file << "\"blocks\": [" << endl;
    // remember to close out the bracket in the end
    
    for (int i = 1; i < InumBlocks + 1; i++)
    {
        file << "{";
        cout << "Please choose a title for block" << i << ": " << endl;
        cin.getline(titleofBlock, sizeof(titleofBlock));
        
        file << "\"type\":";
        file << "\"" << titleofBlock << "\"," << endl;
        file << "\"items\": [" << endl; // inserted bracket
        cout << "Please enter how many items you want for this block:" << endl;
        getline(cin,SnumItems);
        InumItems = stoi(SnumItems);
        for (int j = 1; j < InumItems + 1; j++)
        {
            
            cout << "Please enter item " << j << " of block " << i << ":" << endl;
            cin.getline(itemYouWant,sizeof(itemYouWant));
            if (searchArrayOfItems(itemYouWant, items) == -1)
            {
                j -= 1;
                continue;
            }
            else
            {
                file << "{" << endl;
                file << "\"id\" : \"";
                file << searchArrayOfItems(itemYouWant, items);
                file << "\"," << endl;
                file << "\"count\" : 1" << endl;
                file << "}";
                if (j < InumItems)
                    file << "," << endl;
            }
            
        }
        file << "]" << endl;
        file << "}";
        if (i < InumBlocks)
            file << "," << endl;
    }
    file << endl;
    file << "]" << endl;
    file << "}" << endl;
    
    file.close();
}



int main() {

    string items[4000];
    string SnumBlocks = "";
    int InumBlocks = 0;
    char titleOfItemSet[100];
    int testing = 0;

    cout << endl; cout << endl; cout << endl; cout << endl;
    cout << "********************************" << endl;
    cout << "This program will generate a JSON file for use in creating item sets for League of Legends. Only Summoner's Rift Classic Mode items are supported." << endl;
    cout << "********************************" << endl;
    cout << endl; cout << endl;
    
    cout << "Please enter a title of reasonable length for your item set: " << endl;
    cin.getline(titleOfItemSet,sizeof(titleOfItemSet));
    
    
    cout << "Please enter a reasonable amount of blocks you want (entering a non-integer will crash the program):" << endl;
    getline(cin,SnumBlocks);
    
    
    InumBlocks = stoi(SnumBlocks);
    createArray(items);
    

    makeJSONFile(titleOfItemSet, InumBlocks, items);
    
    cout << endl; cout << endl; cout << endl; 
    cout << "Your JSON file is created in the same directory as the executable (.out) and is called jsonfile.json" << endl;
    cout << endl;
    cout << "If you wish to generate another JSON file please make sure to rename the file you just generated to a name different than jsonfile.json, otherwise if you run this program again it will overwrite it!!" << endl;
    cout << endl;
    cout << "Thank you for using this program to create your item sets. GLHF on the rift!" << endl;
    cout << endl; cout << endl; cout << endl;
    
    return 0;
}
