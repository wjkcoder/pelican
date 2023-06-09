/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <iostream>
#include "pthread.h"
#include "thread"
#include "unistd.h"
/* Header for class jni_thread_ThreadJNI */

#ifndef _Included_jni_thread_ThreadJNI
#define _Included_jni_thread_ThreadJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jni_thread_ThreadJNI
 * Method:    create
 * Signature: ()V
 */
 void *handle(void *ptr) {
     std::cout << "thread start" << std::endl;
     std::cout << "this is new thread id [" << std::this_thread::get_id() << "]" << std::endl;
     return NULL;
 }
JNIEXPORT void JNICALL Java_jni_thread_ThreadJNI_create
  (JNIEnv *, jobject){
      std::cout << "main thread id [" << std::this_thread::get_id() << "]" << std::endl;
      pthread_t ptr;
      int r = pthread_create(&ptr, NULL, handle, NULL);
      if (r != 0) throw "创建线程失败";
      std::cout << "pthread created id [" << ptr << "]" << std::endl;
      std::cout << "sleeping" << std::endl;
      sleep(3);
      r = pthread_join(ptr, NULL);
      if (r != 0) throw "等待线程结束异常";
  }

#ifdef __cplusplus
}
#endif
#endif
