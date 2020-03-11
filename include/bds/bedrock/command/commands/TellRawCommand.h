#pragma once

#include "./MessagingCommand.h"
#include "../CommandRegistry.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class TellRawCommand : MessagingCommand {

public:
    virtual ~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellRawCommand();
};