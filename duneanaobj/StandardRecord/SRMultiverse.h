////////////////////////////////////////////////////////////////////////
/// \file    SRMultiverse.h
/// \brief   A vector of floats to hold reweights
/// \author  J. Kim <jae.sung.kim.3426@gmail.com> 

#ifndef DUNEANAOBJ_SRMULTIVERSE_H
#define DUNEANAOBJ_SRMULTIVERSE_H

#include <vector>

namespace caf
{

   // NB - 'wgt' below cannot be just vector<vector<float>> due to bugs in
   // SRProxy/FlatMaker.
   class SRMultiverse
   {
   public:
      std::vector<float> univ;
   };

} // caf

#endif //DUNEANAOBJ_SRMULTIVERSE_H
