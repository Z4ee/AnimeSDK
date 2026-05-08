#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_HumanReadableStringOptions.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_COMPAREPATHELEMENTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1B9F29C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x99C980)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_ISDOUBLEWILDCARD_OFFSET UNITYSDK_OFFSET(0x99CA30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_ISWILDCARD_OFFSET UNITYSDK_OFFSET(0x99C9B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x970BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99C950)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x99C940)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_MATCHES_OFFSET UNITYSDK_OFFSET(0x99CAC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_1_OFFSET UNITYSDK_OFFSET(0x1B9F2510)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x99CAB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_ParsedPathComponent_TypeDefinitionIndex = 28964;

	struct alignas(8) InputControlPath_ParsedPathComponent
	{
		::UnityEngine::InputSystem::Utilities::Substring m_Layout; // 0x10
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages; // 0x20
		::UnityEngine::InputSystem::Utilities::Substring m_Name; // 0x40
		::UnityEngine::InputSystem::Utilities::Substring m_DisplayName; // 0x50

		::System::String* get_layout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_LAYOUT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_usages()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_USAGES_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean get_isWildcard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_ISWILDCARD_OFFSET))(this);
		}

		::System::Boolean get_isDoubleWildcard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_GET_ISDOUBLEWILDCARD_OFFSET))(this);
		}

		::System::String* ToHumanReadableString(::System::String* parentLayoutName, ::System::String* parentControlPath, ::System::String*& referencedLayoutName, ::System::String*& controlPath, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET))(this, parentLayoutName, parentControlPath, referencedLayoutName, controlPath, options);
		}

		static ::System::String* ToHumanReadableString_1(::UnityEngine::InputSystem::Utilities::Substring substring)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_1_OFFSET))(substring);
		}

		::System::Boolean Matches(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_MATCHES_OFFSET))(this, control);
		}

		static ::System::Boolean ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring pathElement, ::System::String* element)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT_COMPAREPATHELEMENTTOSTRING_OFFSET))(pathElement, element);
		}
	};
}
