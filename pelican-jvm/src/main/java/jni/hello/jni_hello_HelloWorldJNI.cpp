/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <iostream>
/* Header for class jni_hello_HelloWorldJNI */

#ifndef _Included_jni_hello_HelloWorldJNI
#define _Included_jni_hello_HelloWorldJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jni_hello_HelloWorldJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jni_hello_HelloWorldJNI_sayHello
  (JNIEnv *, jobject){
      std::cout << "Hello from C++ !!" << std::endl;
  }
}
#ifdef __cplusplus
}
#endif
#endif