#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }

#define UNITYENGINE_CANVASEXTENSIONS_SAFESETWORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x1CC1BE30)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasExtensions_TypeDefinitionIndex = 48732;

	class CanvasExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetWorldCamera(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* camera, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASEXTENSIONS_SAFESETWORLDCAMERA_OFFSET))(canvas, camera, outputError);
		}
	};
}
