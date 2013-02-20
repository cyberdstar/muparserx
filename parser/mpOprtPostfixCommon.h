#ifndef MP_OPRT_POSTFIX_COMMON_H
#define MP_OPRT_POSTFIX_COMMON_H

/** \file
    \brief Definitions of classes used as callbacks for standard postfix operators.
*/

/** \defgroup postop Postfix operator callbacks

  This group lists the objects representing the postfix operators of muParserX.
*/

#include "mpIOprt.h"
#include "mpValue.h"
#include "mpError.h"


MUP_NAMESPACE_START

  //------------------------------------------------------------------------------
  /** \brief Calculate factorial of a non-negative integer.
      \ingroup postop
  */
  class OprtFact : public IOprtPostfix
  {
  public:

    OprtFact();

    virtual void Eval(ptr_val_type& ret, const ptr_val_type *arg, int);
    virtual const char_type* GetDesc() const;
    virtual IToken* Clone() const;
  };
}  // namespace mu

#endif