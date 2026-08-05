#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_STRINGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1DDEC4E0)
#define SYSTEM_STRINGCOMPARER_CREATE_OFFSET UNITYSDK_OFFSET(0x1DDEC400)
#define SYSTEM_STRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEC660)
#define SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEC6C0)
#define SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1DDEC290)
#define SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1DDEC3A0)
#define SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET UNITYSDK_OFFSET(0x1DDEC340)
#define SYSTEM_STRINGCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC780)
#define SYSTEM_STRINGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC770)

namespace System
{
	inline static constexpr unsigned int StringComparer_TypeDefinitionIndex = 320;

	class StringComparer : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet__invariantCultureIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::StringComparer** StaticGet__ordinalIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::System::StringComparer** StaticGet__invariantCulture()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::StringComparer** StaticGet__ordinal()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0xA58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER__CCTOR_OFFSET))();
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

		static ::System::StringComparer* Create(::System::Globalization::CultureInfo* culture, ::System::Boolean ignoreCase)
		{
			return ((::System::StringComparer*(*)(::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_CREATE_OFFSET))(culture, ignoreCase);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_COMPARE_OFFSET))(this, x, y);
		}

		::System::Boolean Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
