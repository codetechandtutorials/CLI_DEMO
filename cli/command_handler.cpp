#include "command_handler.h"

void handle_command(const Command* cmd) noexcept {
    if (cmd) 
        cmd->execute();
}