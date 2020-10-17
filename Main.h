#pragma once

#ifndef __CROSSBUFFER_H__
#define __CROSSBUFFER_H__
#include "CrossBuffer.h"
#endif

#ifndef __TEXTOUTPUT_H__
#define __TEXTOUTPUT_H__
#include "TextOutput.h"
#endif

#ifndef __INPUT_H__
#define __INPUT_H__
#include "Input.h"
#endif

#ifndef __JACKIE_ENGINE_H__
#define __JACKIE_ENGINE_H__
#include "JackieEngineLibraries/JackieEngine.h"
#endif

#ifndef __STDIO_H__
#define __STDIO_H__
#include <stdio.h>
#endif

#ifndef __FPS_H__
#define __FPS_H__
#include "FPS.h"
#endif


void OnCreate() {
	;
}

MeshList4D MeshList = CreateMeshList4D(MESHLIST4D_MAX_LENGTH);


void Setup(FrameBuffer fb, int width, int height, int deltaTime, Keyboard keyboard, Mouse mouse) {
	AddMesh4DArrayToMeshList4D(&MeshList, CubeMesh);
}


void Update(FrameBuffer fb, int width, int height, int deltaTime, Keyboard keyboard, Mouse mouse) {
	CalcFPS(fb, deltaTime);

	char* buffer;

	/*buffer = OutputVector4D(&Vector);
	DrawShadowString(fb, 10, 42, buffer);
	free(buffer);

	buffer = OutputMatrix4D(&Matrix);
	DrawShadowString(fb, 10, 74, buffer);
	free(buffer);

	buffer = OutputMesh4D(&Mesh);
	DrawShadowString(fb, 10, 154, buffer);
	free(buffer);*/

	/*buffer = OutputMeshList4D(&MeshList, 0, MeshList.next);
	DrawShadowString(fb, 10, 42, buffer);
	free(buffer);*/
}


void OnDestroy() {
	DestroyMeshList4D(&MeshList);
}
