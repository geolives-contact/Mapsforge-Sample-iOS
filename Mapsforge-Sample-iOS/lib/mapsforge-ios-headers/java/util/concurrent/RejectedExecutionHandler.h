//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/RejectedExecutionHandler.java
//

#ifndef _JavaUtilConcurrentRejectedExecutionHandler_H_
#define _JavaUtilConcurrentRejectedExecutionHandler_H_

#include "J2ObjC_header.h"

@class JavaUtilConcurrentThreadPoolExecutor;
@protocol JavaLangRunnable;

@protocol JavaUtilConcurrentRejectedExecutionHandler < NSObject, JavaObject >

- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRejectedExecutionHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRejectedExecutionHandler)

#endif // _JavaUtilConcurrentRejectedExecutionHandler_H_