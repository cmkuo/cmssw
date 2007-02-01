#ifndef HLTEgammaL1MatchFilter_h
#define HLTEgammaL1MatchFilter_h

/** \class HLTEgammaL1MatchFilter
 *
 *  \author Monica Vazquez Acosta (CERN)
 *
 */

#include "HLTrigger/HLTcore/interface/HLTFilter.h"

//
// class decleration
//

class HLTEgammaL1MatchFilter : public HLTFilter {

   public:
      explicit HLTEgammaL1MatchFilter(const edm::ParameterSet&);
      ~HLTEgammaL1MatchFilter();
      virtual bool filter(edm::Event&, const edm::EventSetup&);

   private:
      edm::InputTag candTag_; // input tag identifying product contains egammas
      edm::InputTag l1Tag_; // input tag identifying product contains egammas
      int    ncandcut_;        // number of egammas required
      // L1 matching cuts
      double region_eta_size_;
      double region_eta_size_ecap_;
      double region_phi_size_;
      double barrel_end_;
      double endcap_end_;
};

#endif //HLTEgammaL1MatchFilter_h
