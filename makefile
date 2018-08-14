all:
	g++ -Wall -Wvla -Werror -std=c++11 -o a.out Point2d.cpp Player.cpp Weapon.cpp UZI.cpp Missile.cpp M16.cpp Armor.cpp BodyArmor.cpp ShieldArmor.cpp
	SolidObj.cpp Tree.cpp Soldier.cpp NormalSoldier.cpp Paramedic.cpp Sniper.cpp AttackAction.cpp GameInit.cpp CSVinput.cpp SoldierFactory.cpp WeaponFactory.cpp ArmorFactory.cpp SolidObjFactory.cpp DataBase.cpp Game.cpp UnitMat.cpp Console.cpp
	./a.out 

p2d:
	g++ -Wall -Wvla -Werror -std=c++11 -c Point2d.cpp -o Point2d.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Player.cpp -o Player.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Weapon.cpp -o Weapon.o
	g++ -Wall -Wvla -Werror -std=c++11 -c UZI.cpp -o UZI.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Missile.cpp -o Missile.o
	g++ -Wall -Wvla -Werror -std=c++11 -c M16.cpp -o M16.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Armor.cpp -o Armor.o
	g++ -Wall -Wvla -Werror -std=c++11 -c BodyArmor.cpp -o BodyArmor.o
	g++ -Wall -Wvla -Werror -std=c++11 -c ShieldArmor.cpp -o ShieldArmor.o
	g++ -Wall -Wvla -Werror -std=c++11 -c SolidObj.cpp -o SolidObj.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Tree.cpp -o Tree.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Soldier.cpp -o Soldier.o
	g++ -Wall -Wvla -Werror -std=c++11 -c NormalSoldier.cpp -o NormalSoldier.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Sniper.cpp -o Sniper.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Paramedic.cpp -o Paramedic.o
	g++ -Wall -Wvla -Werror -std=c++11 -c AttackAction.cpp -o AttackAction.o
	g++ -Wall -Wvla -Werror -std=c++11 -c GameInit.cpp -o GameInit.o
	g++ -Wall -Wvla -Werror -std=c++11 -c CSVinput.cpp -o CSVinput.o
	g++ -Wall -Wvla -Werror -std=c++11 -c SoldierFactory.cpp -o SoldierFactory.o
	g++ -Wall -Wvla -Werror -std=c++11 -c WeaponFactory.cpp -o WeaponFactory.o
	g++ -Wall -Wvla -Werror -std=c++11 -c ArmorFactory.cpp -o ArmorFactory.o
	g++ -Wall -Wvla -Werror -std=c++11 -c SolidObjFactory.cpp -o SolidObjFactory.o
	g++ -Wall -Wvla -Werror -std=c++11 -c DataBase.cpp -o DataBase.o
	g++ -Wall -Wvla -Werror -std=c++11 -c UnitMat.cpp -o UnitMat.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Game.cpp -o Game.o
	g++ -Wall -Wvla -Werror -std=c++11 -c Console.cpp -o Console.o
	
	