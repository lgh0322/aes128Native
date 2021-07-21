#include <jni.h>
#include <string>

extern "C" JNIEXPORT jbyteArray JNICALL
Java_com_vaca_aes128native_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    jbyte a[] = {1,2,3,4,5,6};
    jbyteArray ret = env->NewByteArray(6);
    env->SetByteArrayRegion (ret, 0, 6, a);
    return ret;
}