#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }

#define UNITYENGINE_CANVASGROUPEXTENSIONS_SAFESETALPHA_OFFSET UNITYSDK_OFFSET(0x1E5096C0)
#define UNITYENGINE_CANVASGROUPEXTENSIONS_SAFESETBLOCKRAYCAST_OFFSET UNITYSDK_OFFSET(0x1E509990)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasGroupExtensions_TypeDefinitionIndex = 63107;

	class CanvasGroupExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetAlpha(::UnityEngine::CanvasGroup* canvasGroup, ::System::Single alpha, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::CanvasGroup*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUPEXTENSIONS_SAFESETALPHA_OFFSET))(canvasGroup, alpha, outputError);
		}

		static ::System::Void SafeSetBlockRaycast(::UnityEngine::CanvasGroup* canvasGroup, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::CanvasGroup*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUPEXTENSIONS_SAFESETBLOCKRAYCAST_OFFSET))(canvasGroup, enable, outputError);
		}
	};
}
