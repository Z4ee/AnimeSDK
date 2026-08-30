#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_MATERIALANIMATIONBINDING_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EDFFFE0)
#define UNITYENGINE_MATERIALANIMATIONBINDING_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDFFFB0)
#define UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EDFFFD0)
#define UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDFFFC0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialAnimationBinding_TypeDefinitionIndex = 4377;

	class MaterialAnimationBinding : public ::UnityEngine::Component
	{
	public:
		::System::Int32 get_materialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::System::Void set_materialCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SET_MATERIALCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_SETMATERIAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetMaterial(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALANIMATIONBINDING_GETMATERIAL_OFFSET))(this, a1);
		}
	};
}
