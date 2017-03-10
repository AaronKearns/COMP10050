#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct data
	{
		int points;
		int smartness;
		int strength;
		int dexterity;
		int magicSkills;
		int luck;
	};
struct slot
{
	char lg;
	char hill;
	char city;
	char n;
	char x;
};

void ogre(struct data);
void elf(struct data);
void wizard(struct data);
void human(struct data);

void move();
void attack();

int main()
{
	setvbuf(stdout, 0, _IONBF, 0);
	int random;
	int p, n, i;
	
	int s;
	int slots;
	char name [50];
	
	struct slot players;
	struct data player;


	printf("How many players would you like to select (max 6)? ");
	scanf("%d", &p);
	for(i=0;i<p;i++)
	{
		printf("Enter player name: ");
		scanf("%s", &name);
		printf("Enter your player type(1 for Human, 2 for Ogre, 3 for Elf, 4 for Wizard)\n");
		scanf("%d",&n);
		
		
		srand (time(NULL));
		
		random = 0 + rand() % 3;
		if (random == 0)
		{
			slots = players.lg;
		}
		if(random == 1)
		{
			slots = players.hill;
		}
		if(random == 2)
		{
			slots = players.city;
		}
		printf("slot %d for player %d", random, i);
		
		switch(n)
		{
		case 1:
		human(player);
		break;
		case 2:
		ogre(player);
		break;
		case 3:
		elf(player);
		break;
		case 4:
		wizard(player);
		break;
		}
	}
	

	
	
	
	
	return 0;
}

void human(struct data h)
{
	struct data player;
	srand (time(NULL));
	h.points = 100;
	h.smartness = (1 + rand()) % 49;
	h.strength = 1 + rand() % 49;
	h.dexterity = 1 + rand() % 49;
	h.magicSkills = 1 + rand() % 49;
	h.luck = 1 + rand() % 49;
	printf("\nHUMAN: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", h.points, h.smartness, h.strength, h.dexterity, h.magicSkills, h.luck);
}
void ogre(struct data o)
{

	srand (time(NULL));

	o.points = 100;
	o.smartness = (1 + rand()) % 20;
	o.strength = 80 + rand() % 20;
	o.dexterity = 80 + rand() %20;
	o.magicSkills = 0;
	o.luck = 1 + rand() % 30;
	printf("\nOGRE: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", o.points, o.smartness, o.strength, o.dexterity, o.magicSkills, o.luck);
}
void elf(struct data e)
{
	struct data player;
	srand (time(NULL));
	e.points = 100;
	e.smartness = (70 + rand()) % 30;
	e.strength = 1 + rand() % 50;
	e.dexterity = 1 + rand() %100;
	e.magicSkills = 50 + rand() %30;
	e.luck = 60 + rand() % 40;
	printf("\nELF: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", e.points, e.smartness, e.strength, e.dexterity, e.magicSkills, e.luck);
}
void wizard(struct data w)
{
	struct data player;
	srand (time(NULL));
	w.points = 100;
	w.smartness = (90 + rand()) % 10;
	w.strength = 1 + rand() % 20;
	w.dexterity = 1 + rand() %100;
	w.magicSkills = 80 + rand() %20;
	w.luck = 50 + rand() % 50;
	printf("\nWIZARD: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", w.points, w.smartness, w.strength, w.dexterity, w.magicSkills, w.luck);
}

void move()
{
	
}