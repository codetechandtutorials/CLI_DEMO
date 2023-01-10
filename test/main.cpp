#include <command.h>
#include <command_handler.h>
#include <iostream>

Command* a_cmd = nullptr;


int main() {
    std::function<void()> function_a = []() { std::cout << "function_a called\n"; };

    a_cmd = new CustomCallback(function_a);

    std::cout << "audsihdfiuasdhf\n";
    std::cout << "audsihdfiuasdhf\n";
    std::cout << "audsihdfiuasdhf\n";
    std::cout << "press any key to clear\n";
    char a;
    std::cin >> a;
    
    bool while_server_running = true;
    while(while_server_running) {

        handle_command(a_cmd);
        delete a_cmd;
        a_cmd = nullptr;
       
    }
}