/*
  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
*/

#ifndef NeutrinoReconstruction_H_
#define NeutrinoReconstruction_H_

#include "TopEventSelectionTools/EventSelectorBase.h"
#include "TopConfiguration/TopConfig.h"
#include "TTHbbReconstruction/NeutrinoReconstructionTool.h"

class NeutrinoReconstruction:public top::EventSelectorBase {

 public:

  NeutrinoReconstruction(std::string params, std::shared_ptr<top::TopConfig> config);
  ~NeutrinoReconstruction();
  // void initialise(const top::Event& event) const;
  bool apply(const top::Event & event) const override;
  std::string name() const override;

 private:

  std::shared_ptr<top::TopConfig> m_config;

  std::string m_params;

  TTHbb::NeutrinoReconstructionTool* m_neuRecoTool;

};

#endif
