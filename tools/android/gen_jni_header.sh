cd ../../

basepath=$(cd `dirname $0`; pwd)
echo ${basepath}

echo 'ANDROID_HOME: '${ANDROID_HOME}
echo 'JAVA_HOME: '${JAVA_17_HOME}

#mkdir -p ${basepath}/src/EyerAndroidInterface

${JAVA_17_HOME}/bin/javac -h ./ ${basepath}/EyerPlayerAndroid/eyerplayer/src/main/java/com/zzsin/eyerplayer/jni/EyerPlayerJNI.java -classpath ${ANDROID_HOME}/platforms/android-27/android.jar:${basepath}/EyerPlayerAndroid/eyerplayer/src/main/java/:.

mv ${basepath}/com_zzsin_eyerplayer_jni_EyerPlayerJNI.h ${basepath}/src/EyerAndroidInterface/com_zzsin_eyerplayer_jni_EyerPlayerJNI.h