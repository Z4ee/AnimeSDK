#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class DLSSViewPort; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_GETORALLOCCOLOROUT_OFFSET UNITYSDK_OFFSET(0x1BC60BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BC60950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BC61000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC61240)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_DLSSPersistentData_TypeDefinitionIndex = 26781;

	class PostProcessPass_DLSSPersistentData : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* colorOut; // 0x10
		::UnityEngine::Rendering::DLSSViewPort* view; // 0x18
		::UnityEngine::Matrix4x4 prevVP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELEASE_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* GetOrAllocColorOut(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_GETORALLOCCOLOROUT_OFFSET))(this, desc);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DLSSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
