//
//                           SimuLTE
// Copyright (C) 2012 Antonio Virdis, Daniele Migliorini, Giovanni
// Accongiagioco, Generoso Pagano, Vincenzo Pii.
//
// This file is part of a software released under the license included in file
// "license.pdf". This license can be also found at http://www.ltesimulator.com/
// The above file and the present reference are part of the software itself,
// and cannot be removed from it.
//

#ifndef _LTE_LTEMACRELAYENB_H_
#define _LTE_LTEMACRELAYENB_H_

#include "LteMacEnb.h"

class LteAmc;

class LteMacRelayEnb : public LteMacEnb
{
  protected:
    virtual LteDeployer* getDeployer();
    virtual int getNumAntennas();

  public:
    LteMacRelayEnb();
    virtual ~LteMacRelayEnb();

};

#endif
