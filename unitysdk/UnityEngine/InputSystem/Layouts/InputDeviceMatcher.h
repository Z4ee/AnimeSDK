#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9A1190)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A1180)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_FROMDEVICEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BA6E2C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3D9410)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETNUMPROPERTIESIN_OFFSET UNITYSDK_OFFSET(0x1BA6E210)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x396A90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_PATTERNS_OFFSET UNITYSDK_OFFSET(0x9A0DE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9A1130)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHSINGLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BA6E170)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA6E9C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA6E9E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A1170)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHDEVICECLASS_OFFSET UNITYSDK_OFFSET(0x9A0ED0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHINTERFACE_OFFSET UNITYSDK_OFFSET(0x9A0E40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHMANUFACTURER_OFFSET UNITYSDK_OFFSET(0x9A0F60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHPRODUCT_OFFSET UNITYSDK_OFFSET(0x9A0FF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHVERSION_OFFSET UNITYSDK_OFFSET(0x9A1080)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITH_OFFSET UNITYSDK_OFFSET(0x9A1110)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA6EA80)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher_TypeDefinitionIndex = 29345;

	struct alignas(8) InputDeviceMatcher
	{
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_kInterfaceKey()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher_TypeDefinitionIndex)->GetStaticField(0x22700);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_kVersionKey()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher_TypeDefinitionIndex)->GetStaticField(0x22710);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_kProductKey()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher_TypeDefinitionIndex)->GetStaticField(0x22720);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_kManufacturerKey()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher_TypeDefinitionIndex)->GetStaticField(0x22730);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_kDeviceClassKey()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher_TypeDefinitionIndex)->GetStaticField(0x22740);
		}
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>>* m_Patterns; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__CCTOR_OFFSET))();
		}

		::System::Boolean get_empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_EMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* get_patterns()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GET_PATTERNS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithInterface(::System::String* pattern, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHINTERFACE_OFFSET))(this, pattern, supportRegex);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithDeviceClass(::System::String* pattern, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHDEVICECLASS_OFFSET))(this, pattern, supportRegex);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithManufacturer(::System::String* pattern, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHMANUFACTURER_OFFSET))(this, pattern, supportRegex);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithProduct(::System::String* pattern, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHPRODUCT_OFFSET))(this, pattern, supportRegex);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithVersion(::System::String* pattern, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITHVERSION_OFFSET))(this, pattern, supportRegex);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher With(::UnityEngine::InputSystem::Utilities::InternedString key, ::System::Object* value, ::System::Boolean supportRegex)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_WITH_OFFSET))(this, key, value, supportRegex);
		}

		/*
		::System::Single MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHPERCENTAGE_OFFSET))(this, deviceDescription);
		}
		*/

		static ::System::Boolean MatchSingleProperty(::System::Object* pattern, ::System::String* value)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHSINGLEPROPERTY_OFFSET))(pattern, value);
		}

		/*
		static ::System::Int32 GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETNUMPROPERTIESIN_OFFSET))(description);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_FROMDEVICEDESCRIPTION_OFFSET))(deviceDescription);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_GETHASHCODE_OFFSET))(this);
		}
	};
}
