/*
  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
*/

#ifndef NLARGEJETSELECTOR_H_
#define NLARGEJETSELECTOR_H_

#include "TopEventSelectionTools/SignValueSelector.h"


class NLargeJetSelector : public top::SignValueSelector {
 public:
  explicit NLargeJetSelector(const std::string& params);

  bool apply(const top::Event& event) const override;
};

#endif
