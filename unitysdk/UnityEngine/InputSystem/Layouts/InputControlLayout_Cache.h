#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x364380)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHE_FINDORLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0xA0C7B0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Cache_TypeDefinitionIndex = 31993;

	struct alignas(8) InputControlLayout_Cache
	{
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table; // 0x10

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHE_CLEAR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::System::String* name, ::System::Boolean throwIfNotFound)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHE_FINDORLOADLAYOUT_OFFSET))(this, name, throwIfNotFound);
		}
	};
}
