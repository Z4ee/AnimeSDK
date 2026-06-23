#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine::Rendering { class DLSSViewPort; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AF59F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1AF5A0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5A2F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_DLSSPersistentData_TypeDefinitionIndex = 26702;

	class PostProcessPass_DLSSPersistentData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::DLSSViewPort* view; // 0x10
		::UnityEngine::Matrix4x4 prevVP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
