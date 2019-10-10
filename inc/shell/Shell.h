#ifndef FINMAN_SHELL_H
#define FINMAN_SHELL_H

#include <string>
#include <utility>
#include <vector>
#include <readline/readline.h>
#include <readline/history.h>
#include <iostream>


class Shell
{
public:
    explicit Shell(std::string username);

    /**
    * Shell main loop
    *
    * @param username The username to pass as an argument to commands requiring authentication
    */
    void loop();

private:
    // authenticated user's username
    std::string _username;
    std::string _prompt;


    /**
    * Read a line of input from console and split into string tokens to pass to execute
    *
    * @return Array of arguments
    */
    std::vector<std::string>* get_args();

    /**
     * Execute a command by checking the list of built in commands
     *
     * @param username  Username of logged in user
     * @param args      args[0] = the command. args[1:] = the parameters for the command
     * @return          Return status from the command
     */
    static int execute(std::string username, const std::vector<std::string>* args);

};

#endif //FINMAN_SHELL_H
