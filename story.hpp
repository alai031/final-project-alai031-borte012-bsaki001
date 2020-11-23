
class Story {
public:
Story(Adventurer* a){
adventurer = a;
this->story();
}
virtual void story() = 0;
private:
Adventurer* adventurer = nullptr;
}

