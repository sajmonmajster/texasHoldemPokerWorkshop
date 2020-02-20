#pragma once

#include <vector>

namespace texasHolderPoker
{

struct RoundResult
{
    int winningPlayer;
    std::vector<int> playerMoney; //ile kto ma kasy
};

} // namespace texasHolderPoker
