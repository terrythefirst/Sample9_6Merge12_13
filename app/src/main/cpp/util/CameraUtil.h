#ifndef __CameraUtil_H__
#define __CameraUtil_H__
#define CAMERA_R 200
class CameraUtil
{
public:
	static float tx;
	static float ty;
	static float tz;
	static float cx;//摄像机位置（position）
	static float cy;
	static float cz;
	static float degree;
	static float yj;
	static float camera9Para[9];
	static void calCamera(float yjSpan, float cxSpan);
	static void cameraGo(float goBack, float leftRight);
	static void flushCameraToMatrix();
private:
	static void calCamera();
};
#endif
