#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NamedValue.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x3A5430)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_1_OFFSET UNITYSDK_OFFSET(0x1BCC91C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1BCC47C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAMEANDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BCC9300)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAME_OFFSET UNITYSDK_OFFSET(0x1BCC9940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSE_OFFSET UNITYSDK_OFFSET(0x1BCC3870)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x96A490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B2B90)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NameAndParameters_TypeDefinitionIndex = 29404;

	struct alignas(8) NameAndParameters
	{
		::System::String* _name_k__BackingField; // 0x10
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField; // 0x18

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_SET_PARAMETERS_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_TOSTRING_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* ParseMultiple(::System::String* text)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_OFFSET))(text);
		}

		static ::System::Boolean ParseMultiple_1(::System::String* text, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*& list)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSEMULTIPLE_1_OFFSET))(text, list);
		}

		static ::System::String* ParseName(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAME_OFFSET))(text);
		}

		static ::UnityEngine::InputSystem::Utilities::NameAndParameters Parse(::System::String* text)
		{
			return ((::UnityEngine::InputSystem::Utilities::NameAndParameters(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSE_OFFSET))(text);
		}

		static ::UnityEngine::InputSystem::Utilities::NameAndParameters ParseNameAndParameters(::System::String* text, ::System::Int32& index, ::System::Boolean nameOnly)
		{
			return ((::UnityEngine::InputSystem::Utilities::NameAndParameters(*)(::System::String*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS_PARSENAMEANDPARAMETERS_OFFSET))(text, index, nameOnly);
		}
	};
}
