#pragma once
#include "IGameView.h"

namespace texasHolderPoker {


    class ConsoleGameView : public IGameView {
        virtual void onGameStart(const GameSettings& gameSettings);

    public:
        void onPlayerDecision(const Decision &decision) override;

        void onCardsShow(const std::vector<Card> showCards) override;

        void onGameEnd(int winningPlayer) override;

        void onRoundStart(const RoundSetup &roundSetup) override;

        void onRoundEnd(const RoundResult &roundResult) override;

    };

}