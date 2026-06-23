#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BC172D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BC17470)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC17A50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AmplifyOcclusionPass_NotNative_HistoryBuffer_TypeDefinitionIndex = 26645;

	class AmplifyOcclusionPass_NotNative_HistoryBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::RenderTexture*>* rts; // 0x10
		::UnityEngine::Matrix4x4 previousVP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
