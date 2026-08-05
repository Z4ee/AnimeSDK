#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DDF93C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1DDF9400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF9470)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_FSR3PersistentData_TypeDefinitionIndex = 26775;

	class PostProcessPass_FSR3PersistentData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FSR3PERSISTENTDATA_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
