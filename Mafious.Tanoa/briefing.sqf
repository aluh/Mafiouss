waitUntil {!isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["serverrules","General Rules"];
player createDiarySubject ["policerules","Police Procedures/Rules"];
player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/



        player createDiaryRecord ["serverrules",
        [
            "Exploits",
                "
These are considered exploits, and you will not be kicked, but banned.<br/><br/>
1. Getting out of jail via any method other than paying bail or escaping via helicopter.<br/>
2. Killing yourself to get out of roleplay. Getting out of being tazed, restrained, arrested, jail, etc. If the log shows you got arrested, then you died, you will be banned. Do not pay bail and kill yourself for an easy ride home. Walk you lazy turd.<br/>
3. Duping items and/or money. If someone sends you an unobtainable amount of money right at the start of the game, report to an admin IMMEDIATELY and transfer said money to an admin. Do this ASAP or an admin could ban you if they see that much on you without question.<br/>
4. Using clearly hacked items. If a hacker comes in and spawns unobtainable items, you could be banned for using said items. Report the items to the admins immediately and stay away from them.<br/>
5. Abusing bugs or game mechanics for gain. Is there a replicating gun somewhere? Report it and leave it alone. If an admin catches you abusing the glitch, ban.<br/><br/>
                "
        ]
    ];



    player createDiaryRecord ["serverrules",
        [
            "Bannable Offenses",
                "
Consider this your one and only warning.<br/><br/>
1. Hacking<br/>
2. Cheating<br/>
3. Exploiting (See 'Exploits')<br/>
4. Being kicked 3 or more times.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Cop Interaction",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Civilians can be arrested for looking in cops' backpacks/vehicles. Constantly doing this will result in your removal from the server.<br/>
2. Civilians can be arrested for following cops in game in order to give away their position.<br/>
3. Civilians or Rebels who take up arms to kill cops in town or elsewhere for no RP reason will be considered RDMing. See RDMing section.<br/>
4. Following and or harassing cops for long periods of time will be considered griefing and/or spamming, and will result in your removal from the server.<br/>
5. Actively blocking cops from doing their duties can lead to your arrest. Constantly doing this will result in your removal from the server.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Boats",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Repeatedly pushing boats without permission.<br/>
2. Pushing a boat with the intention of hurting or killing someone. This is not RP, it is just a flaw in the mechanics.<br/>
3. Purposefully running over swimmers/divers.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Aviation",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Purposefully ramming a helicopter into anything. Other helicopters, vehicles, buildings.<br/>
2. Flying below 150m over the city constantly. Once is illegal, more than that you risk crashing into the city, thus against server rules.<br/>
3. Stealing helicopters without proper warning and significant time for the driver to lock the vehicle. If they land and run away without locking, fine, if they just get out and you get in before they get a chance to lock it, no no.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Vehicles",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Purposefully running people over (VRDM). There are accidents, and then there is going out of your way to run someone over.<br/>
2. Purposefully throwing yourself in front of vehicles in order to die/get hurt.<br/>
3. Ramming into other vehicles in order to cause an explosion.<br/>
4. Constantly trying to enter vehicles that do not belong to you in order to grief the vehicle owner, and not trying to RP.<br/>
5. Stealing a vehicle just to crash it or otherwise destroy it.<br/>
6. Purchasing multiple vehicles for the purpose of doing any of the above.<br/>
7. The only reason for shooting at a vehicle would be to disable it and/or fire warning shots in a role-play scenario.You are not to deliberately destroy enemies vehicles.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Communication Rules",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Side Chat may not be used to play music or otherwise micspam.<br/>
2. Spamming any chat channel will result in your removal.<br/>
4. Teamspeak channels are split up into areas for a reason. Cops must be in the cop channels at all times.<br/>
5. Civilians cannot be in any cop channels on teamspeak in order to gather information on their location or movements. Civs caught doing this will be removed the channel. Repeat offenders can be kicked or banned from both the game and teamspeak.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Random Deathmatching (RDM)",
                "
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. Killing anyone without a roleplay cause.<br/>
2. Declaring a rebellion is not a cause to kill anyone, even cops.<br/>
3. Cops and civilians/rebels can only commence in a shootout if there are reasons relating to a crime.<br/>
4. If you are killed in the crossfire of a fight, it is not RDM.<br/>
5. Killing someone in an attempt to protect yourself or others is not RDMing.<br/>
6. Shooting a player without giving reasonable time to follow demands is considered RDM.<br/><br/>
These are all judged by admins on a case by case basis.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["serverrules",
        [
            "New Life Rule",
                "
The New Life Rule applies to police and civilians.<br/><br/>
Items on this list may result in your removal from the server and/or ban, based on the admins discretion.<br/><br/>
1. If you are killed you must wait 15 minutes before returning to the scene of your death.<br/>
2. If you die during roleplay your past crimes are forgotten, but you also cannot seek revenge.<br/>
3. If you are RDM'd, it is not a new life.<br/>
4. If you manually respawn, it is not a new life.<br/>
5. If you purposefully kill yourself to avoid roleplay, it is not a new life.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["serverrules",
        [
            "Don't Be A Dick!",
                "
If an admin has to tell you that you are being a dick, you are doing dickish things.<br/>
Causing others grief, disrupting roleplay, the list goes on.<br/>
Just don't be a dick okay?<br/>
This rule may be invoked at an admin's discretion.<br/><br/>
                "
        ]
    ];
	
	player createDiaryRecord ["serverrules",
        [
            "Rules",
                "
View all of our rules on www.tidal-gaming.com<br/><br/>
                "
        ]
    ];

// Police Section
    player createDiaryRecord ["policerules",
        [
            "Crisis Negotiation",
                "
Crisis Negotiation must be handled by a Sergeant. If one is not available, the person with the next highest rank must handle the situation.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["policerules",
        [
            "The Federal Reserve",
                "
1. The Federal Reserve is illegal for civilians to enter, unless they have been given authorization. If civilians enter without authorization they are to be escorted off-site or arrested if they persist.
2. Helicopters flying over the Federal Reserve may be asked to leave and disabled if they refuse.<br/>
8. Any civilian who actively makes an attempt to block the police from entering the building may be treated as an accomplice.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["policerules",
        [
            "Aviation",
                "
1. No helicopter can land within city limits without authorization from the highest ranking officer online. (Exceptions being what is listed below.)<br/>><br/>
2. Helicopters may not land on roads.<br/>
3. Police may temporarily forbid landing at  but it cannot remain closed for a long period of time.<br/>
4. Helicopters cannot fly below 150m over the city without authorization.<br/>
5. Helicopters cannot hover over the city. Cops may only hover over the city if there is an active police operation going on.<br/><br/>
                "
        ]
    ];


    player createDiaryRecord ["policerules",
        [
            "Vehicles",
                "
1. Vehicles in the parking lot, or are reasonably parked elsewhere should be left alone.<br/>
2. Vehicles that look abandoned, broken, with no driver, can be impounded.<br/>
3. Boats should be parked reasonably on shore.<br/>
4. Any vehicle that hasn't moved in a significant amount of time may be impounded.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Speeding",
                "
The following speeds are to be enforced by the Tanoa Police Force for the absolute safety of the citizens of Tanoa.<br/><br/>
Inside major cities:<br/>
Small roads: 50km/h<br/>
Main roads: 65km/h<br/>
Outside major cities:<br/>
Small roads: 80km/h<br/>
Main roads: 110km/h<br/><br/>
                "
        ]
    ];


    player createDiaryRecord ["policerules",
        [
            "Arresting and Ticketing",
                "
Arresting should be done to criminals who are considered a danger to themselves or others.<br/><br/>
1. You may not arrest someone if you have given them a ticket and they paid it.<br/>
2. You must tell the suspect why they are being arrested before you arrest them.<br/>
3. If a civilian is wanted, you may arrest them. Do not kill them, unless the situation falls under the 'Use of Lethal Force' section.<br/><br/>
Ticketing a civilian is considered a warning for the civilian. If they break a law, but do not pose a threat to anyone, you may ticket a civilian.<br/><br/>
1. Tickets must be a reasonable price.<br/>
2. Ticket prices should be based off of the crimes committed.<br/>
3. Refusal to pay a legit ticket is grounds for arrest.<br/>
4. Giving a civilian and illegitimate ticket, such as $100k for speeding, etc., is not allowed and will result in your removal from the police department.<br/><br/>
A complete list of all crimes and the appropriate punishments should be given to officers during training. If in doubt, or if you have not been trained, ask a higher ranking officer what to do.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Weapons",
                "
A cop is NEVER allowed to supply civilians with weapons. This will get you banned from the server and removed from being a cop.<br/><br/>
Legal Weapons for Civilians to carry with a permit:<br/>
1. P07<br/>
2. Rook<br/>
3. ACP-C2<br/>
4. TRG<br/>
5. 4-five<br/>
6. PDW2000<br/><br/>
Any other weapon (Including Silenced P07 [Considered a Police Weapon]) is illegal.<br/><br/>
1. Civilians are not allowed to have a weapon out within the town limits.<br/>
2. Civilians may have a gun out when they are not in the town. However they should submit to a licence search if confronted by an officer and should have the gun lowered (Press Ctrl Twice).<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Non-Lethal Force",
                "
At this time the Taser (Silenced P07) is the only form of Non-Lethal Force.<br/><br/>
1. Taser should be used to incapacitate non complying civilians in order to restrain them.<br/>
2. Do not discharge your Taser unless you intend to incapacitate a civilian, randomly discharging your weapon will result in your suspension.<br/>
3. Only use your Taser in compliance with the laws and the rules, do NOT enforce your will on others.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Raiding/Camping",
                "
Raiding is defined as a squad of police officers invading an area of high criminal activity in order to stop the criminals in illegal acts.<br/><br/>
1. In order to raid an area, the cops must have at least 4 officers involved, one of which must be a Sergeant or above.<br/>
2. All civilians in a raid area may be restrained and searched. If nothing illegal is found, you must let them go.<br/>
3. If illegals are found during a search, you may proceed to arrest or fine as usual.<br/>
5. Lethal force is only authorized as described under 'Use of Lethal Force'.<br/>
6. After the area is secure, the officers must leave the area.<br/>
7. An area cannot be raided again for 20 minutes after a previous raid.<br/>
8. If the raid is a failure (All officers die), the 20 minute timer still applies to those officers.<br/>
9. Backup may be called in, but it may not consist of fallen officers (see 'New Life Rule').<br/><br/>
Camping is defined as the prolong stay of an officer in an area.<br/><br/>
1. Checkpoints are not considered camping. See Checkpoint section for a definition of proper checkpoint procedures.<br/>
2. See Bank Robbery and Agia Marina Protocol sections for more info on camping in the main town.<br/>
3. Camping of illegal areas is staying longer than needed after a raid, or if officers do not conduct a raid but continue to watch and take action against civilians entering the area.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Chain of Command",
                "
The highest ranking officer on duty is in charge of the police force outside of admins currently online. The high ranking officer is expected to follow the rules and guidelines of his/her rank, and must report to the admin in case any action need be taken.<br/><br/>
Sheriff's Department Chain of Command:<br/>
1. Sheriff<br/>
2. Under Sheriff<br/>
3. Captain<br/>
4. Lieutenant<br/>
5. Sergeant<br/>
6. Senior Deputy<br/>
7. Deputy<br/>
8. Recruit<br/><br/>
Cops in game who are not enrolled/accepted into the SD are the lowest tier and have no say in police operations.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "Use of Lethal Force",
                "
1. Use of Lethal force is only permitted for the protection of your life, another officers life, or a civilians life, if and only if non-lethal force would not be effective.<br/>
2. Discharging of a weapon when not under threat or not during training exercises is not allowed. Officers caught in violation of this rule will be removed from the server and suspended from the SPD.<br/>
3. Failure to follow proper weapons discipline and procedure will get you removed from the server and suspended from the SPD.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["policerules",
        [
            "TeamSpeak Rule",
                "
1. All cops must be on TeamSpeak 3 in a designated cop channel. Failure to be on TeamSpeak during an admin check will result in your immediate dismissal from the server.<br/>
2. Please join TeamSpeak BEFORE you spawn in as a cop, heck, join TeamSpeak before you even join the server.<br/><br/>
                "
        ]
    ];



// Illegal Items Section
    player createDiaryRecord ["illegalitems",
        [
            "Rebel Rules",
                "
A rebel is one who rises in armed resistance against a government. In this case it would be the police. However, due to the small amount of police compared to the possible amount of rebels, do not attack the police without a reason, please be civil and use common sense, and don't take the word rebel literally, but instead how it will make this server fun for all.<br/><br/>
1. A rebel must first form a gang, and then declare intentions.<br/>
2. Resistance does not excuse RDMing (See RDMing in General Rules)<br/>
3. Resistance roleplay should be conducted in more ways than constantly robbing the bank or shooting police officers.<br/>
4. Resistance must be coordinated.<br/>
5. A PROPER reason must be behind each and every attack.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Gang Rules",
                "
1. Being in a gang is not illegal. Only when illegal crimes are committed.<br/>
2. Being in a gang area is not illegal. Only when partaking in illegal activities.<br/>
3. Gangs may hold and control gang areas. Other gangs may attack a controlling gang to compete for control of a gang area.<br/>
4. To declare war on another gang, the leader must announce it in global and all gang members of both gangs must be notified. For a more long term gang war, a declaration should be made on the forums.<br/>
5. Gangs may not kill unarmed civilians, unless said civilian is part of a rival gang and in your gangs controlled area.<br/>
6. Gangs may not kill civilians, unless they are under threat. Killing unarmed civilians because they do not comply is considered RDM, but you can injure/damage.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Vehicles",
                "
A civilian in control of the following prohibited vehicles is subject to the consequences defined in the unauthorized control of a prohibited vehicle law.<br/><br/>
1. Ifrit<br/>
2. Speedboat<br/>
3. Hunter<br/>
4. Police Offroad<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Weapons",
                "
A civilian in possession of the following is subject to the consequences as defined in the illegal possession of a firearm law.<br/><br/>
1. MX Series<br/>
2. Katiba Series<br/>
3. Mk Series<br/>
4. Mar-10<br/>
5. SDAR Rifle<br/>
6. Sting SMG<br/>
7. Silenced P07 (Taser)<br/>
8. Vermin<br/>
9. AK Series<br/>
10. Any explosives<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["illegalitems",
        [
            "Illegal Items",
                "
The following items are illegal to posses:<br/><br/>
1. Lockpicks<br/>
2. All Drugs (Including Drug Seeds)<br/>
3. Spike Strips<br/>
4. Defibrillator<br/>
5. Bolt Cutter and Explosive Charge<br/><br/>
                "
        ]
    ];


// Controls Section

    player createDiaryRecord ["controls",
        [
            "Police and medic controls",
                "
F: Vehicle siren.<br/>
Shift+F: Wail (Police Only)<br/>
Q: Phaser (Police Only)<br/>
Shift+Q: Rumbler (Police Only)<br/>
Right Ctrl: Speed radar.<br/>
Left Shift + L: Activates siren lights.<br/>
Left Shift + R: Restrain (police only).<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Civilian controls",
                "
Left Shift + G: Knock out / stun (Weapon required. Used for robbing).<br/>
Left Shift + Z: Ziptie (Ziptie required).<br/>
Spacebar: Place storage container.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "General controls",
                "
Y: Open Player Menu.<br/>
U: Lock and unlock vehicles and houses.<br/>
T: Vehicle trunk and house virtual item storage.<br/>
Left Shift + B: Surrender (hands on head).<br/>
Left Windows: Main interaction key. Used for interacting with objects like vehicles, houses, ATMs, and restrained players. Can be rebound to a single key like H by pressing ESC->Configure->Controls->Custom->Use Action 10.<br/>
Left Shift + H: Holsters the weapon in your hands.<br/>
Left Ctrl + H: Revert holster action.<br/>
Right Shift: Change Ear Plug level.<br/>
Left Shift+ J: Identify player.<br/><br/>
                "
        ]
    ];
