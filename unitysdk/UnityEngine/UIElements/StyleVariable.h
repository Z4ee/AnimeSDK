#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class String; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define UNITYENGINE_UIELEMENTS_STYLEVARIABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8860E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleVariable_TypeDefinitionIndex = 25105;

	struct alignas(8) StyleVariable
	{
		::System::String* name; // 0x10
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>* handles; // 0x20

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
