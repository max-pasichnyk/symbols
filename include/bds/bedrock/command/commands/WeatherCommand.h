#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class WeatherCommand : Command {

public:
    virtual ~WeatherCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WeatherCommand();
};