/**
 * JTouchBar
 *
 * Copyright (c) 2017 thizzer.com
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 * @author      M. ten Veldhuis
 */
#ifndef JNICONTEXT_H
#define JNICONTEXT_H

#include <jni.h>

#include <vector>
#include <string>

using namespace std;

struct color_t {
    float red, green, blue, alpha = 0.0f;
};

struct image_t {
    std::string name, path = "";
};


class JNIContext {
private:
    int _state;
    
    JNIContext(const JNIContext &);

public:
    JNIContext(JNIEnv **env);
    ~JNIContext();
    
    static void CacheClasses(JNIEnv* env, std::vector<std::string> classnames);
    static jclass GetOrFindClass(JNIEnv* env, std::string classname);
    
    static jobject CallObjectMethod(JNIEnv* env, jobject target, const std::string& method, const char* cls);
    static jobject CallObjectMethod(JNIEnv* env, jobject target, const std::string& method, const char* cls, const char* argsSig, ...);
    
    static void CallVoidMethod(JNIEnv* env, jobject target, const std::string& method);
    static void CallVoidMethod(JNIEnv* env, jobject target, const std::string& method, const char* argsSig, ...);
    
    static std::string CallStringMethod(JNIEnv* env, jobject target, const std::string& method);
    static bool CallBooleanMethod(JNIEnv* env, jobject target, const std::string& method);
    
    static int32_t CallIntMethod(JNIEnv* env, jobject target, const std::string& method);
    static int32_t CallIntMethod(JNIEnv* env, jobject target, const std::string& method, const char* argsSig, ...);
    
    static float CallFloatMethod(JNIEnv* env, jobject target, const std::string& method);
    
    static double CallDoubleMethod(JNIEnv* env, jobject target, const std::string& method);
    
    static long CallLongMethod(JNIEnv* env, jobject target, const std::string& method);
    
    static color_t CallColorMethod(JNIEnv* env, jobject target, const std::string& method);
    static image_t CallImageMethod(JNIEnv* env, jobject target, const std::string& method);
};

#endif // JNICONTEXT_H
