#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_ADDTYPEREGISTRATION_OFFSET UNITYSDK_OFFSET(0xAB5500)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_FINDNAMEFORTYPE_OFFSET UNITYSDK_OFFSET(0xAB54E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_INTERNEDNAMES_OFFSET UNITYSDK_OFFSET(0xAB5400)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_NAMES_OFFSET UNITYSDK_OFFSET(0xAB53F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAB5450)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_LOOKUPTYPEREGISTRATION_OFFSET UNITYSDK_OFFSET(0xAB5510)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TypeTable_TypeDefinitionIndex = 32709;

	struct alignas(8) TypeTable
	{
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* table; // 0x10

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_names()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_NAMES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_internedNames()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_INTERNEDNAMES_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_INITIALIZE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString FindNameForType(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_FINDNAMEFORTYPE_OFFSET))(this, type);
		}

		::System::Void AddTypeRegistration(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_ADDTYPEREGISTRATION_OFFSET))(this, name, type);
		}

		::System::Type* LookupTypeRegistration(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_LOOKUPTYPEREGISTRATION_OFFSET))(this, name);
		}
	};
}
