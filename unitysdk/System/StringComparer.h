#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_STRINGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x185E5720)
#define SYSTEM_STRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x185E58B0)
#define SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185E5910)
#define SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x185E55F0)
#define SYSTEM_STRINGCOMPARER_GET_INVARIANTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x185E55C0)
#define SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x185E56F0)
#define SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET UNITYSDK_OFFSET(0x185E56C0)
#define SYSTEM_STRINGCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185E59A0)
#define SYSTEM_STRINGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x185E5990)

namespace System
{
	inline static constexpr unsigned int StringComparer_TypeDefinitionIndex = 329;

	class StringComparer : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet__ordinalIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x3B0);
		}
		static ::System::StringComparer** StaticGet__invariantCultureIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x3B8);
		}
		static ::System::StringComparer** StaticGet__invariantCulture()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x3C0);
		}
		static ::System::StringComparer** StaticGet__ordinal()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x3C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER__CCTOR_OFFSET))();
		}

		static ::System::StringComparer* get_InvariantCultureIgnoreCase()
		{
			return ((::System::StringComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_INVARIANTCULTUREIGNORECASE_OFFSET))();
		}

		static ::System::StringComparer* get_CurrentCultureIgnoreCase()
		{
			return ((::System::StringComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET))();
		}

		static ::System::StringComparer* get_Ordinal()
		{
			return ((::System::StringComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET))();
		}

		static ::System::StringComparer* get_OrdinalIgnoreCase()
		{
			return ((::System::StringComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
