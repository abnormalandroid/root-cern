// @(#)root/memstat:$Id$
// Author: Anar Manafov (A.Manafov@gsi.de) 2008-03-02

/*************************************************************************
* Copyright (C) 1995-2010, Rene Brun and Fons Rademakers.               *
* All rights reserved.                                                  *
*                                                                       *
* For the licensing terms see $ROOTSYS/LICENSE.                         *
* For the list of contributors see $ROOTSYS/README/CREDITS.             *
*************************************************************************/
#ifndef ROOT_TMemStat
#define ROOT_TMemStat

class TMemStat: public TObject {
private:
   Bool_t fIsActive;    // is object attached to MemStat

public:
   TMemStat(Option_t* option = "read");
   virtual ~TMemStat();
   virtual void Disable();
   virtual void Enable();
   static  void Show(Double_t update=0.01, const char* fname="*");

   ClassDef(TMemStat, 0) // a user interface class of MemStat
};

#endif
