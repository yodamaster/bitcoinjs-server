#ifndef BITCOINJS_SERVER_INCLUDE_COMMON_H_
#define BITCOINJS_SERVER_INCLUDE_COMMON_H_

#include <v8.h>

#define REQ_FUN_ARG(I, VAR)                                                            \
  if (args.Length() <= (I) || !args[I]->IsFunction())                                  \
    return v8::ThrowException(v8::Exception::TypeError(                                \
                              v8::String::New("Argument " #I " must be a function"))); \
  v8::Local<v8::Function> VAR = v8::Local<v8::Function>::Cast(args[I]);

#endif
