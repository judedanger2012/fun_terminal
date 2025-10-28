#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void magic8ball() { 
     std::vector<std::string> response ={
        "no",
        "yes",
        "ask again later",
        "never",
        "deffinatley",
        "fate forbids it",
        "death",
        "ask someone reliable im just an 8ball who pretends to be magic",
        "https://judeprivett2012.wixsite.com/my-site-1 has all your ansewrs",
    };
    int randomindex = std::rand() % response.size();
    std::cout<< response[randomindex] <<std::endl;
};
void jokes() { 
     std::vector<std::string> response ={
        "Did you hear the rumor about the butter? Never mind I shouldnt spread it!",
        "Why cant a bicycle stand on its own? It is two tired",
        "What does it make you if you see a robbery at an Apple Store? An iwitness",
        "What is an astronauts favorite key on a keyboard? The space bar",
        "Can February March? No but April May",
        "oh un lucky no joke for you",
        "did you know 10+10 and 11+11 are the same? 10+10=20 and 11+11=20 too",
        "ask someone else im all out",
        "https://judeprivett2012.wixsite.com/my-site-1 has all the jokes you need",
        "",
    };
    int randomindex = std::rand() % response.size();
    std::cout<< response[randomindex] <<std::endl;
};
int main(){
    string x;
    std::cout<<"fun terminal"<<std::endl;
    std::cout<<"input commands to see aplicable commands"<<std::endl;
    while (true)
    {
       
    
        getline(cin,x);
        if (x == "commands")
        {
            std::cout<<"sketch pad seds a link to a sketch pad"<<std::endl;
            std::cout<<"snake sends you a link to the snake game"<<std::endl;
            std::cout<<"magic aid ball is a built in feature type shake to shake the aid ball"<<std::endl;
            std::cout<<"tell a joke makes terminal tell a joke but if your unlucky you might get some ressistance"<<std::endl;
            std::cout<<"wisdom1 gives you a not so great qoute of wisdom"<<std::endl;
            std::cout<<"wisdom2 gives you a much better qoute of wisdom"<<std::endl;
            std::cout<<"terminal.kill will kill terminal ending the program"<<std::endl;
        }
        

        else if (x == "shake")
        {
            magic8ball();
            
        }
        
        else if (x == "snake game")
        {
           std::cout<<"https://snake-game.io/#google_vignette"<<std::endl;
        }
        else if (x == "sketch pad")
        {
            std::cout<<"https://sketch.io/sketchpad/"<<std::endl;
        
        }
        else if (x == "tell me a joke")
        {
           jokes();
        }
        
        else if (x == "wisdom1")
        {
           std::cout<<"its like a silver sandwich so when life gets hard take a bite out of the silver sandwitch"<<std::endl;
        }
        else if (x == "wisdom2")
        {
            std::cout<<"things arent always as they apear or sound to know this is to know true from false"<<std::endl;
        }
        else if (x == "terminal.kill")
        {
            break;
        }
        
        
    }

}
