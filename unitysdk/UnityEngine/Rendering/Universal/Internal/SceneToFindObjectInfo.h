#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENETOFINDOBJECTINFO_GET_ENABLEPASS_OFFSET UNITYSDK_OFFSET(0x1BC26630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENETOFINDOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC26660)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SceneToFindObjectInfo_TypeDefinitionIndex = 26519;

	class SceneToFindObjectInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* renderersAndMaterials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENETOFINDOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enablePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENETOFINDOBJECTINFO_GET_ENABLEPASS_OFFSET))(this);
		}
	};
}
