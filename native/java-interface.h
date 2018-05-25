/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jvnet_winp_Native */

#ifndef _Included_org_jvnet_winp_Native
#define _Included_org_jvnet_winp_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jvnet_winp_Native
 * Method:    kill
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jvnet_winp_Native_kill
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    sendCtrlC
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jvnet_winp_Native_sendCtrlC
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    isCriticalProcess
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jvnet_winp_Native_isCriticalProcess
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    setPriority
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_jvnet_winp_Native_setPriority
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    getProcessId
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jvnet_winp_Native_getProcessId
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    exitWindowsEx
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jvnet_winp_Native_exitWindowsEx
  (JNIEnv *, jclass, jint, jint);

/*
* Class:     org_jvnet_winp_Native
* Method:    getCmdLine
* Signature: (I)Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_org_jvnet_winp_Native_getCmdLine
(JNIEnv *, jclass, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    getCmdLineAndEnvVars
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jvnet_winp_Native_getCmdLineAndEnvVars
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    enumProcesses
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_org_jvnet_winp_Native_enumProcesses
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    enableDebugPrivilege
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jvnet_winp_Native_enableDebugPrivilege
  (JNIEnv *, jclass);

/*
 * Class:     org_jvnet_winp_Native
 * Method:    noop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jvnet_winp_Native_noop
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
