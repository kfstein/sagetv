/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_FirewireCaptureDevice */

#ifndef _Included_sage_FirewireCaptureDevice
#define _Included_sage_FirewireCaptureDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_FirewireCaptureDevice_SM2210_ENCODER_MASK
#define sage_FirewireCaptureDevice_SM2210_ENCODER_MASK 1L
#undef sage_FirewireCaptureDevice_PYTHON2_ENCODER_MASK
#define sage_FirewireCaptureDevice_PYTHON2_ENCODER_MASK 2L
#undef sage_FirewireCaptureDevice_VBDVCR_ENCODER_MASK
#define sage_FirewireCaptureDevice_VBDVCR_ENCODER_MASK 4L
#undef sage_FirewireCaptureDevice_MICRONAS_AUDIO_MASK
#define sage_FirewireCaptureDevice_MICRONAS_AUDIO_MASK 8L
#undef sage_FirewireCaptureDevice_HCW_CAPTURE_MASK
#define sage_FirewireCaptureDevice_HCW_CAPTURE_MASK 16L
#undef sage_FirewireCaptureDevice_BLACKBIRD_CAPTURE_MASK
#define sage_FirewireCaptureDevice_BLACKBIRD_CAPTURE_MASK 32L
#undef sage_FirewireCaptureDevice_NEC61051_ENCODER_MASK
#define sage_FirewireCaptureDevice_NEC61051_ENCODER_MASK 64L
#undef sage_FirewireCaptureDevice_WISGO7007_ENCODER_MASK
#define sage_FirewireCaptureDevice_WISGO7007_ENCODER_MASK 128L
/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    createEncoder0
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_FirewireCaptureDevice_createEncoder0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    setupEncoding0
 * Signature: (JLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_setupEncoding0
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    switchEncoding0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_switchEncoding0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    closeEncoding0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_closeEncoding0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    destroyEncoder0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_FirewireCaptureDevice_destroyEncoder0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    eatEncoderData0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_FirewireCaptureDevice_eatEncoderData0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    setChannel0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_setChannel0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    setInput0
 * Signature: (JIILjava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_setInput0
  (JNIEnv *, jobject, jlong, jint, jint, jstring, jint, jint);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    setEncoding0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_FirewireCaptureDevice_setEncoding0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_FirewireCaptureDevice
 * Method:    updateColors0
 * Signature: (JIIIII)[I
 */
JNIEXPORT jintArray JNICALL Java_sage_FirewireCaptureDevice_updateColors0
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
