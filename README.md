# TPPrpoject
1 задание: игра - пошаговая стратегия для двух игроков. Реализована иерархия
юнитов, классы Game и Player (зависимости между ними изображены на UML-диаграмме).
Для пополнения армии юнитов игроками используется фабричный метод, реализован
класс UnitFactory.
2 задание: для использования выбран консольный интерфейс. Для взаимодействия
игрока с игрой реализован абстрактный класс Command и его наследники AttackUnit,
Buy, Work. Помимо этого, появился метод класса игрока, показывающий информацию
о нем.

#Сборка проекта 
mkdir build
cd build
cmake ..
make
./tp

#Мануал к игре
В игре два игрока, ходят по очереди. Во время своего хода игрок может делать
следующее: атаковать (attack, нужно указать своего юнита и атакуемого), работать
(work, выбрать своего юнита-работника), купить юнита (buy, нужно указать один из типов),
получить информацию о себе (info), закончить ход (end) и закрыть игру
(terminate).
