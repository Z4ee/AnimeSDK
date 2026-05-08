#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF7FA350)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF7FA270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0xF7FA540)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SceneMovableObjectHolder_TypeDefinitionIndex = 30364;

	class SceneMovableObjectHolder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::DecalProjector*>* dynamicDecalList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEMOVABLEOBJECTHOLDER_LATEUPDATE_OFFSET))(this);
		}
	};
}
