#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_REFLECTIONINFO_SETREFLECITONINFO_OFFSET UNITYSDK_OFFSET(0x1ED5C4D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionInfo_TypeDefinitionIndex = 4807;

	struct alignas(4) ReflectionInfo
	{
		::System::Int32 rtInstanceID; // 0x10
		::System::Int32 motionRTIID; // 0x14
		::System::Int32 mvMaskRTIID; // 0x18
		::System::Int32 mode; // 0x1C
		::System::Int32 PlaneReflectionMode; // 0x20
		::System::Single BlurScale; // 0x24
		::System::Single Brightness; // 0x28
		::System::Single PlaneReflectionScale; // 0x2C
		::UnityEngine::Rect ViewRect; // 0x30
		::UnityEngine::Vector4 ReflectionST; // 0x40
		::System::Boolean ReflectionCameraCmdBufferOnly; // 0x50

		static ::System::Void SetReflecitonInfo(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::ReflectionInfo& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::ReflectionInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_REFLECTIONINFO_SETREFLECITONINFO_OFFSET))(a1, a2);
		}
	};
}
