#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4F3950)
#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3940)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int VisibleToOtherModulesAttribute_TypeDefinitionIndex = 3699;

	class VisibleToOtherModulesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* modules)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE__CTOR_1_OFFSET))(this, modules);
		}
	};
}
