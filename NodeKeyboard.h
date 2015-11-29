#ifndef NODE_KEYBOARD_H
#define NODE_KEYBOARD_H

#include "SDK.h"

// Example with node ObjectWrap
// Based on https://nodejs.org/api/addons.html#addons_wrapping_c_objects but using NAN
class NodeKeyboard{
  public:
    static void Init(v8::Local<v8::Object> target, SDK* instance);
  private:
    static NAN_METHOD(Set);
    static NAN_METHOD(SetCustom);
    static SDK* SDKInstance;
};


#endif