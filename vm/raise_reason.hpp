#ifndef RBX_RAISE_REASON_HPP
#define RBX_RAISE_REASON_HPP

namespace rubinius {
  enum RaiseReason {
    cNone,
    cException,
    cReturn,
    cBreak
  };
}

#endif
