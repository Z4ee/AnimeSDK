#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }

#define UNITYENGINE_PHYSICSMATERIAL2D_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C4DB0)
#define UNITYENGINE_PHYSICSMATERIAL2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C4D50)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsMaterial2D_TypeDefinitionIndex = 18805;

	class PhysicsMaterial2D : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSMATERIAL2D__CTOR_OFFSET))(this);
		}

		static ::System::Void Create_Internal(::UnityEngine::PhysicsMaterial2D* scriptMaterial, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsMaterial2D*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSMATERIAL2D_CREATE_INTERNAL_OFFSET))(scriptMaterial, name);
		}
	};
}
