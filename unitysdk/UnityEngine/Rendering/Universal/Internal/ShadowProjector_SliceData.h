#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ShadowProjector_SliceData_SliceDataPerFrame.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_SLICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F0CF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ShadowProjector_SliceData_TypeDefinitionIndex = 30366;

	class ShadowProjector_SliceData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x10
		::UnityEngine::Bounds customBoundOffset; // 0x18
		::System::Boolean useCustomBounds; // 0x30
		::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData_SliceDataPerFrame sliceDataPerFrame; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_SLICEDATA__CTOR_OFFSET))(this);
		}
	};
}
