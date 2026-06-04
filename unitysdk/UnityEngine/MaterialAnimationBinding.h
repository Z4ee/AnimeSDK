#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2A28A0)
#define UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A2890)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialAnimationBinding_TypeDefinitionIndex = 4362;

	class MaterialAnimationBinding : public ::UnityEngine::Component
	{
	public:
		::System::Void set_materialCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET))(this, a1, a2);
		}
	};
}
