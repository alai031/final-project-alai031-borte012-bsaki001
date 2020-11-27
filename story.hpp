
class Story {
public:
Story(Adventurer* a){
adventurer = a;
this->story();
counter = 10;
}
virtual void story() = 0;
private:
Adventurer* adventurer = nullptr;
int counter = 0;
}

