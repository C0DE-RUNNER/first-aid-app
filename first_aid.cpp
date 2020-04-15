// first_aid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>


using namespace std;
class firstAid 
{
public:
	virtual void show(int i) = 0;
};



class commonConditions: public firstAid  {
public:
	void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n.......CHEST PAIN............\n\n\n\n";
			cout << "\n\nIF DUE TO ANXIETY\n\n\n";
			cout << "\nPractice deep breathing\n";
			cout << "\nTake stock of the situation(Accept your feelings of anxiety, recognize them, and then work through putting them in perspective)\n";
			cout << "\nPicture a beautiful scene\n";
			cout << "\n\nHEART RELATED ISSUES\n\n";
			
			cout << "\nCall 911 or your local emergency number. Don't ignore or attempt to tough out the symptoms of a heart attack. \n";
			cout << "\nChew and swallow an aspirin, unless you are allergic to aspirin or have been told by your doctor never to take aspirin.\n";
			cout << "\nTake nitroglycerin, if prescribed. If you think you're having a heart attack and your doctor has previously prescribed nitroglycerin for you,";
			cout << "take it as directed. Don't take anyone else's nitroglycerin, because that could put you in more danger.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2: 
			cout << ".........CONCUSSION.........\n\n\n\n";
			cout << "\nImmobilize the head while you wait for medical help\n";
			cout << "\nApply ice to reduce the swelling.\n";
			cout << "\nTake over-the-counter pain meds. Headaches are a very common result of concussions.";
			cout << "Tylenol is fine; avoid Aspirin or Ibuprofen, as these can increase bleeding.\n";
			cout << "\nKeep tabs on the patient’s cognitive function. \n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 3:
			cout << "\n...........DIZZINESS..........\n\n\n\n";
			cout << "\nThe person should sit down or lie still.\n";
			cout << "\nIf the person gets light-headed when standing up, the person should stand up slowly.\n"; 
			cout << "\nAvoid sudden changes in position.\n";
			cout << "\nIf the person is thirsty, have him or her drink fluids.\n";
			cout << "\nAvoid bright lights.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 4:
			cout << "\n..............FAINTING.............\n\n\n\n";
			cout << "\nLay the person flat on his or her back.\n";
			cout << "\nElevate the person's legs to restore blood flow to the brain.Loosen tight clothing.\n";
			cout << "\nShake the person vigorously, tap briskly, or yell.\n";
			cout << "\nIf the person doesn't respond, call 911 immediately and start CPR if necessary.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 5:
			cout << "\n..............EYE PROBLEMS.........\n\n\n\n";
			cout << "\nDon't rub eyes\n";
			cout << "\nDon't bandage the eye\n";
			cout << "\nImmediately wash out the eye with lots of water. Use whatever is closest -- water fountain, shower, garden hose\n";
			cout << "\nFor a Blow to the Eye, Apply a cold compress, but don't put pressure on the eye.\n";
			cout << "\nIf there is bruising, bleeding, change in vision, or it hurts when your eye moves, see a doctor right away.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 6: 
			cout << "\n..........FEVER........\n\n\n\n";
			cout << "\nDrink plenty of fluids to stay hydrated.\n";
			cout << "\nDress in lightweight clothing.\n";
			cout << "\nUse a light blanket if you feel chilled, until the chills end\n";
			cout << "\nTake acetaminophen (Tylenol, others) or ibuprofen (Advil, Motrin IB, others). Follow the directions on the label.\n";
			cout << "\nPut a wet cloth on the persons head and keep changing it time to time\n";
			cout << "\nseek medical advice if the symptoms persists.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
	
		case 7:
			cout << "\n..........FOOD POISONING........\n\n\n\n\n";
			cout << "\nAvoid solid foods until vomiting ends. Then eat light, bland foods, such as saltine crackers, bananas, rice, or bread.\n";
			cout << "\nSipping liquids may help avoid vomiting. Don’t eat fried, greasy, spicy, or sweet foods.\n";
			cout << "\nIf vomiting and diarrhea last more than 24 hours, drink an oral rehydration solution.\n";
			cout << "\nDrink clear fluids, starting with small sips and gradually drinking more.\n";
			cout << "\nCall a doctor immediately if symptoms last more than 3 days or you have\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
   		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}

};
class bitesAndStings : public firstAid {
public:void show(int i)
{
	system("CLS");
	switch (i)
	{
	case 1:
		cout << "\n......ANIMAL BITES............\n\n\n\n";
		cout << "\n\nWash the wound from the bite thoroughly with soap and warm water. This will reduce the risk of infection from an animal bite.\n\n\n";
		cout << "\n Raise and support the wound and pat it dry, preferably with clean gauze from your first aid kit.";
		cout<<"Then cover it with a sterile wound dressing.\n";
		cout << "*******************************************************************************************\n\n\n\n\n\n\n";
		break;
	case 2:
		cout << "\nRemove any stingers immediately. Some experts recommend scraping out the stinger with a credit card.\n";
		cout << "\nApplying ice to the site may provide some mild relief. Apply ice for 20 minutes once every hour as needed.\n";
		cout << "\n Wrap the ice in a towel or keep a cloth between the ice and skin to keep from freezing the skin.\n";
		cout << "\nCrush some cinnamon and mix it with water to make a paste.  Apply the mix on the infected area leaving it for about an hour\n";
		cout << "\n Lay a slice of papaya on the sting for about an hour for relief.\n";
		cout << "\nApply some aloe vera juice or gel directly over the bite for relief.\n";
		cout << "\nCrush some fresh basil/peppermint and apply it over the bite. The camphor and thymol contained in it help in relieving itching.\n";
		cout << "*******************************************************************************************\n\n\n\n\n\n\n";
		break;
	default:
		cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
		break;
	}

}
	};
class burnsAndWounds : public firstAid {
	public:void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n......BURNS TREATEMENT...........\n\n\n\n";
			cout << "\nPlace the burned area under running cool water for at least 5 minutes to reduce swelling.\n";
			cout << "\nApply an antiseptic spray, antibiotic ointment, or aloe vera cream to soothe the area.\n";
			cout << "\nLoosely wrap a gauze bandage around the burn.\n";
			cout << "\nIf nothing is available you can apply tooth paste on the burn area, it will reduce the pain.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "\n..........CUTS AND WOUNDS...........\n\n\n\n";
			cout << "\nStop the bleeding. Put pressure on the cut with a gauze pad or clean cloth. Keep the pressure on for a few minutes.\n";
			cout << "\nClean the wound. Once stopped the bleeding, rinse the cut under cool running water or use a saline wound wash.\n";
			cout << "\n Clean the area around the wound with soap and a wet washcloth.\n";
			cout << "\nDon’t get soap in the cut\n";
			cout << "\nRemove any dirt or debris.\n";
			cout << "\nYou can apply either of these-tumeric/garlic/honey/coconut oil on wounds\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 3:
			cout << "\n...........NOSE BLEEDING.............\n";
			cout << "\nLean the head slightly forward, so blood doesn’t run down the throat.\n";
			cout << "\nWith a tissue or washcloth, gently press the nostrils together to stop the bleeding.\n";
			cout << "\nHold the nose for at least 5 minutes. Then check to see if the bleeding has stopped. If it hasn’t stopped, gently squeeze for another 10	minutes.\n";
			cout << "\nFine powder of alum (spatika/phitkari) along with cow ghee, instilled in the form of nasal drops, will stop bleeding.\n";
			cout << "\nA small amount of camphor, dissolved in the juice of green coriander leaves, and dropped into the nostrils, stops the bleeding quickly.\n";
			cout << "\nSoak 20 gm of dried aamla in water overnight and strain in the morning.";
			cout << "Drink this water and apply the paste of aamla on the forehead and around the nose after grinding them to a paste.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}
	};
class brushesJointsAndMuscles : public firstAid {
	public:void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n...............BROKEN FINGER.............\n\n\n\n";
			cout << "\n Immobilize the Finger. Tape the broken finger to an adjacent non - broken finger.\n";
			cout << "\nControl Swelling\n";
			cout << "\nCool the finger by applying ice that is wrapped in a towel -- don't apply ice directly to the skin; it can cause a burn.\n";
			cout << "\nContact the doctor for a proper treatement\n";

			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "\n................FRACTURE..............\n\n\n\n";
			cout << "\n If they’re bleeding, elevate and apply pressure to the wound using a sterile bandage, a clean cloth, or a clean piece of clothing.\n";
			cout << "\n If you suspect they’ve broken a bone in their neck or back, help them stay as still as possible.\n";
			cout << "\nIf you suspect they’ve broken a bone in one of their limbs, immobilize the area using a splint or sling.\n";
			cout << "\nWrap an ice pack or bag of ice cubes in a piece of cloth and apply it to the injured area for up to 10 minutes at a time.\n";
			cout << "\nHelp them get into a comfortable position, encourage them to rest, and reassure them. \n";
			cout << "\nCover them with a blanket or clothing to keep them warm.\n";
			cout << "\nGet professional help\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 3:
			cout << "\n.............BROKEN TOE TREATEMENT..............\n";
			cout << "\nPrevent Swelling and Further Injury\n";
			cout << "\nStay off the foot as much as possible.\n";
			cout << "\nAvoid movement or pressure that causes pain.\n";
			cout << "\nApply ice up to 20 minutes at a time. Wrap it in a towel; do not apply directly to skin.\n";
			cout << "\nKeep the foot elevated as often as possible, especially the first 2 days after injury, to help control pain and swelling.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 4:
			cout << "\n...........BRUISES (HEMATOMAS).............\n";
			cout << "\nRest the bruised area, if possible.\n";
			cout << "\nIce the bruise with an ice pack wrapped in a towel. Leave it in place for 10 to 20 minutes.";
			cout << " Repeat several times a day for a day or two as needed.\n";
			cout << "\nCompress the bruised area if it is swelling, using an elastic bandage. Don't make it too tight.\n";
			cout << "\nElevate the injured area.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 5:
			cout << "\n............DISLOCATED FINGER...............\n";
			cout << "\nRemove any rings immediately.\n";
			cout << "\nKeep the finger elevated above the heart\n";
			cout << "\nApply ice to the area.\n";
			cout << "\nIf the finger is bent or deformed, don’t try to straighten it. It may be broken.\n";
			cout << "\nSee a doctor as soon as you can, ideally within a day. You’ll need X-rays and procedures to realign the finger.\n";
			cout << "\nKeep any protective splint or cast clean and dry.\n";
			cout << "\nTake pain medication as prescribed by the doctor.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 6:
			cout << "\n...........HEAD INJURY TREATEMENT..................\n";
			cout << "\nKeep the person still.\n";
			cout << "\nUntil medical help arrives, keep the injured person lying down and quiet, with the head and shoulders slightly elevated.\n";
			cout << "\n Don't move the person unless necessary, and avoid moving the person's neck.\n";
			cout << "\nIf the person is wearing a helmet, don't remove it.\n";
			cout << "\nStop any bleeding. Apply firm pressure to the wound with sterile gauze or a clean cloth. But don't apply direct";
			cout<<" pressure to the wound if you suspect a skull fracture.\n";
			cout << "\nWatch for changes in breathing and alertness.\n";
			cout << "\n If the person shows no signs of circulation — no breathing, coughing or movement — begin CPR\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 7:
			cout << "\n..........MUSCLES SPRAINS AND STRAINS............\n";
			cout << "\nRest the limb to give it a chance to heal.\n";
			cout << "\nHold ice on the area for 20 minutes at a time, four to eight times a day, to bring down swelling.\n";
			cout << "\nDon’t use heat--it could make the area swell even more.\n";
			cout << "\nWrap an elastic bandage or splint around the sprain or strain.\n";
			cout << "\nPut a pillow under the injured body part to keep it raised.\n";
			cout << "\nTake over-the-counter medicines such as ibuprofen to relieve the pain.\n";
		
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		
		case 8:
			cout << "\n..................SPRAINED WRIST TREAMTEMENT........................\n";
			cout << "\nSupport the hurt arm and wrist with a makeshift splint, such as a ruler, stick, rolled up newspaper, a pillow or sling, until you get help.\n";
			cout << "\nRest Wrist. Minimize wrist motion to prevent further injury.\n";
			cout << "\nControl Swelling\n";
			cout << "\nIce the area for 20 minutes at a time, 4 to 8 times the first day.\n";
			cout << "\nYou may apply a compression wrap such as an Ace bandage.\n";
			cout << "\nElevate the wrist above heart level.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}
	};
class breathing : public firstAid {
	public:void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n...............ASTHMA TREAEMENT..............\n\n\n\n";
			cout << "\nTry fish oil and Vitamin C\n";
			cout << "\nGinger and Garlic Cloves:Ginger is one of the most trusted herb when it comes to deal with inflammation.";
			cout << "Half cup of ginger tea mixed with 2-3 crushed garlic clovescould prove to be an effective remedy to release the kapha accumulation in the airways\n";
			cout << "\nCinnamon and Honey:Mix one teaspoon of cinnamon and 1/4th teaspoon trikatu into a cup of boiling water.";
			cout << " Let it steep for 10 minutes and add 1 teaspoon of honey before drinking";
			cout << "Take this twice a day for maximum benefits. \n";
			cout << "\nHalf teaspoon of bay leaf and 1/4th teaspoon of pippali mixed with 1 teaspoon of honey taken two to three times a day may";
			cout<<"also help prevent chronic symptoms of asthma.\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "\n...............CPR STEPS................\n\n\n\n";
			cout << "\nStep 1: Shake and shout\n";
			cout << "\nStep 2: Check for normal breathing\n";
			cout << "\nStep 3: Call 999(or the helpline number in your locality)\n";
			cout << "\nStep 4: Give 30 chest compressions\n";
			cout << "\nStep 5: Give two rescue breaths\n";
			cout << "\nStep 6: Repeat until an ambulance arrives\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		
		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}
	};
class digestive : public firstAid {
	public:void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n...........ABDOMINAL PAIN..............\n\n\n\n";
			cout << "\nYou might try a heating pad to ease belly pain. \n";
			cout << "\n Chamomile or peppermint tea may help with gas. Be sure to drink plenty of clear fluids so your body has enough water.\n";
			cout << "\nStay away from foods that bother you (spicy or fried foods, for example)\n";
		
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "\n...........DIARRHEA TREATEMENT...............\n\n\n\n";
			cout << "\nIncorporate spices like turmeric, cumin, fennel seeds, coriander, and hing (asafetida) in your diet.\n";
			cout << "\nDrink ginger or cumin tea once a day.\n";
			cout << "\nHave stewed apples, bananas,rice and yogurt,lassi for relief.\n";
			cout << "\nAvoid ice-cold drinks or food.\n";
			
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 3:
			cout << "\n..................GASTROENTERITIS TREATEMENT....................\n\n\n\n";
			cout << "\nTriphala. The best ayurvedic remedy for constipation, triphala is both a tonic and a laxative\n";
			cout << "\nPsyllium. These highly absorbent seed husks move through the colon like a scrub brush\n";
			cout << "\nFlaxseed (Linseed)\n";
			cout << "\nDandelion Root.\n";
			cout << "\nGet plenty of rest.\n";
			
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 4:
			cout << "\n..........HICCUPS CURES...............\n";
			cout << "\nHold your breath and swallow three times\n";
			cout << "\nBreathe into a paper bag\n";
			cout << "\nDrink a glass of water quickly\n";
			cout << "\nSwallow a teaspoon of sugar\n";
			cout << "\nGargle with water\n";
			cout << "\nPull on your tongue\n";
	
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 5:
			cout << "\n...................VOMITING AND NAUSEA.................\n";
			cout << "\nTake ginger or peppermint tea\n";
			cout << "\nchew 1 or two cardamom seeds\n";
			cout << "\nTo a cup of water, add 10 drops of lime juice and half a teaspoon of sugar. Now, add 1/4 teaspoon of baking soda.\n";
			cout << "\n Stir and drink. This effective remedy can stop nausea and vomiting immediately.\n";
			
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		
		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}
	};
class heatAndCold : public firstAid {
	public:void show(int i)
	{
		system("CLS");
		switch (i)
		{
		case 1:
			cout << "\n.......FROSTBITE..........\n\n\n\n";
			cout << "\nGet the person to a warm place and remove any wet clothing.\n";
			cout << "\nGently warm the area in warm water (not hot) or with wet heat until the skin appears red and warm.\n";
			cout << "\nIf no water is nearby, breathe on the area through cupped hands and hold it next to your body.\n";
			cout << "\nDo not use direct heat from heating pads, radiator, or fires.\n";
			cout << "\nDo not rub or massage the skin or break blisters.\n";
			cout << "\nBandage the Area	\n";
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "\n........HEAT EXHAUSTION.............\n\n\n\n";
			cout << "\n Lower Body Temperature\n";
			cout << "\nGet the person out of the heat and into a cool environment.\n";
			cout << "\nIf air-conditioning is not available, fan the person\n";
			cout << "\nRehydrate\n";
			cout << "\nHave the person avoid physical activity for the rest of the day.\n";
			cout << "\nGive cool, nonalcoholic and non-caffeinated beverages as long as the person is alert.\n";
			
			cout << "*******************************************************************************************\n\n\n\n\n\n\n";
			break;
		
		case 3:
				cout << "\n.............HYPOTHERMIA TREATEMENT...................\n\n\n";
				cout << "\nRestore Warmth Slowly\n";
				cout << "\nGet the person indoors.\n";
				cout << "\nRemove wet clothing and dry the person off, if needed.\n";
				cout << "\nWarm the person's trunk first, not hands and feet. Warming extremities first can cause shock.\n";
				cout << "\nWarm the person by wrapping him or her in blankets or putting dry clothing on the person.\n";
				cout << "\nIf using hot water bottles or chemical hot packs, wrap them in cloth; don't apply them directly to the skin.\n";
				cout << "\nIf the person is not breathing, start CPR immediately. \n";
				cout << "*******************************************************************************************\n\n\n\n\n\n\n";
				break;
		case 4:
				cout << "\nSUNBURNS\n";
				cout << "\nApply diluted apple cider vinegar on the affected area using a cotton pad or a washcloth and repeat every hour.\n";
				cout << "\n If you have a little sunburn, apply sliced or minced cucumbers to the affected area.\n";
				cout << "\nDip a washcloth in milk and squeeze out the excess, apply it on the affected area for 5 minutes and then repeat the process multiple times.\n";
				cout << "\nApply a generous amount of Aloe Vera gel to the affected area. It has anti-inflammatory properties\n";
				cout << "\nApply a layer of honey on the affected area and wrap a bandage around the area.\n";
				cout << "\nApply a layer of coconut oil to the sunburnt area to repair and rejuvenate the irritated skin\n";
				
				cout << "*******************************************************************************************\n\n\n\n\n\n\n";
				break;
		default:
			cout << "\n\nPLEASE ENTER A VALID OPTION!!!\n\n";
			break;
		}
	}
	};


	int main()
	{
		int choice, ch;
		firstAid* obj;

		cout << "*   *  ****  *     ***   **   *   *  ****";
		cout << endl;

		cout << "*   *  *     *    *     *  *  ** **  *";
		cout << endl;

		cout << "* * *  ****  *    *     *  *  * * *  ****";
		cout << endl;

		cout << "* * *  *     *    *     *  *  *   *  *";
		cout << endl;

		cout << " ***   ****  ****  ***   **   *   *  ****";
		cout << endl << endl << endl << endl << endl;
	label:
		cout << "................NEED SOME HELP!!!................\n\n\n\n";
		cout << "\n COOSE YOUR PROBLEM \n\n\n WE WILL TRY OUR BEST TO FIND THE SOLUTION!!!\n";

		cout << "\n\nHERE ARE SOME GENERAL ISSUES!\n\n DOES IT INCLUDE YOURS?\n\n";
		cout << "1. Common Conditions\n2.Bites and Stings\n3. Burns, Bleeding, and Wounds\n";
		cout << "4.Bruising, Bones, Joints, and Muscles\n5.Choking and Breathing Problems\n6.Digestive Problems\n";
		cout << "7.Heat and Cold Reactions\n8.Poisoning\n9.Rashes\n\n\n\n";
		cout << "\n\nENTER YOUR CHOICE TO PROCEED\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Chest Pain\n2.Concussion Treatment\n3.Dizziness Treatment\n4.Fainting\n5.Eye\n6.Fever\n7.Food Poisoning Treatment\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else {
				commonConditions c;
				obj = &c;
				obj->show(ch);
				system("pause");
			}
			break;

		case 2:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Animal Bites\n2.Bee and Wasp Stings\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else {
				bitesAndStings bs;
				obj = &bs;
				obj->show(ch);
				system("pause");
			}
			break;

		case 3:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Burns Treatment\n2.Cuts and Wounds\n3.Nosebleeds\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch ==0)
				goto label;
			else
			{
				burnsAndWounds bw;
				obj = &bw;
				obj->show(ch);
				system("pause");
			}
				break;

		case 4:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Broken Finger\n2.Fracture\n3.Broken Toe Treatment\n4.Bruises (Hematomas)\n5.Dislocated Finger\n";
			cout << "6.Head Injury Treatment\n7.Muscle Sprains and Strains\n8.Sprained Wrist Treatment\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else
			{
				brushesJointsAndMuscles bjm;
				obj = &bjm;
				obj->show(ch);
				system("pause");
			}
				break;

		case 5:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Asthma Attack Treatment\n2.CPR Steps\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else
			{
				breathing b;
				obj = &b;
				obj->show(ch);
				system("pause");
			}
				break;
		case 6:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Abdominal Pain\n2.Diarrhea Treatment\n3.Gastroenteritis Treatment\n4.Hiccups Cures\n5.Vomiting and Nausea\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else
			{
				digestive d;
				obj = &d;
				obj->show(ch);
				system("pause");
			}
				break;
		case 7:
			system("CLS");
			cout << "Please provide some more details\n";
			cout << "1.Frostbite\n2.Heat Exhaustion Treatment\n3.Hypothermia Treatment\n4.Sunburn\n\n";
			cout << "\n\nDOES IT INCLUDE YOUR PROBLEM\n\nWOULD YOU LIKE TO CONTINUE OR GO BACK\n";
			cout << "(Press 0 to go back to the main menu or enter any option to continue)\n\n";
			cin >> ch;
			if (ch == 0)
				goto label;
			else
			{
				heatAndCold hc;
				obj = &hc;
				obj->show(ch);
				system("pause");
			}
				break;

		default:
			cout << "PLEASE ENTER THE CORRECT CHOICE\n";
			break;
		}

		return 0;
	}

