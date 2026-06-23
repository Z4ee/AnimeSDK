#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTINSTANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17FB40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextInstanceContext_TypeDefinitionIndex = 27151;

	class DamageTextSystem_DamageTextInstanceContext : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Matrix4x4>* matrices; // 0x10
		::System::Int32 instanceCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTINSTANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
