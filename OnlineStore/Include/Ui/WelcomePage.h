#pragma once

#include "Interfaces\Ui\IBrowsingArea.h"

#include <iostream>

class WelcomePage : public IBrowsingArea
{
  // Output operator; prints page data.
  friend std::ostream& operator<<(std::ostream& os, const WelcomePage* browsingArea);

public:
  WelcomePage();

  // Calls the element callback to process a command.
  // A command is a simple character input entered by the user while browsing the store.
  // Returns true if the given command could be processed, false otherwise.
  bool processCommand(const char* c) override;

  // Forbidden methods.
  WelcomePage(const WelcomePage& p) = delete;
  void operator=(const WelcomePage& p) = delete;
};