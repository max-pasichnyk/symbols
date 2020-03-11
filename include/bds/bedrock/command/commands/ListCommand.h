#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class ListCommand : ServerCommand {

public:
    virtual ~ListCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ListCommand();
};