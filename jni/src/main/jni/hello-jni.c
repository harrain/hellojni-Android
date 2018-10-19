//
// Created by net on 2018/10/18.
//
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_example_jni_MainActivity_stringFromJNI(JNIEnv *env,jobject thiz){
    return (*env)->NewStringUTF(env,"hello jni");
}

