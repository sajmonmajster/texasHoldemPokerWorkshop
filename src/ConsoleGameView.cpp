#include "ConsoleGameView.h"
#include "Decision.h"
#include <iostream>
#include "RoundSetup.h"
#include "RoundResult.h"

void texasHolderPoker::ConsoleGameView::onPlayerDecision(const texasHolderPoker::Decision &decision) {

    switch(decision.decisionKind)
    {
        case texasHolderPoker::DecisionKind ::Call:
            std::cout << "Player wszedl"<<std::endl;
            break;
        case texasHolderPoker::DecisionKind ::Fold:
            std::cout << "Player spasowal"<<std::endl;
            break;
        case texasHolderPoker::DecisionKind ::Raise:
            std::cout << "Player podniosl stawke"<<std::endl;
            break;
    }

}

void texasHolderPoker::ConsoleGameView::onCardsShow(const std::vector<Card> showCards) {

}

void texasHolderPoker::ConsoleGameView::onGameEnd(int winningPlayer) {
    std::cout << "Wygral player numer: " << winningPlayer;
}

void texasHolderPoker::ConsoleGameView::onRoundStart(const texasHolderPoker::RoundSetup &roundSetup) {
    std::cout << "Maly Blind wynosi:" << roundSetup.smallBlindMoney <<std::endl;
    std::cout << "Duzy Blind wynosi:" << roundSetup.bigBlindMoney <<std::endl;
    std::cout << "Zaczyna Player:" << roundSetup.smallBlindPlayerNumber <<std::endl;
}

void texasHolderPoker::ConsoleGameView::onRoundEnd(const texasHolderPoker::RoundResult &roundResult) {
    std::cout << "Wygral Player:" << roundResult.winningPlayer << " Tabela pieniedzy:" <<std::endl;
    for(int moneyCount : roundResult.playerMoney) {
        std::cout << ". Player: " << moneyCount << std::endl;
    }
}
