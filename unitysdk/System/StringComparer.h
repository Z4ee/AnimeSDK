#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_STRINGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1782B7C0)
#define SYSTEM_STRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1782B940)
#define SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1782B9A0)
#define SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1782B690)
#define SYSTEM_STRINGCOMPARER_GET_INVARIANTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1782B660)
#define SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1782B790)
#define SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET UNITYSDK_OFFSET(0x1782B760)
#define SYSTEM_STRINGCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1782BA30)
#define SYSTEM_STRINGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1782BA20)

namespace System
{
	inline static constexpr unsigned int StringComparer_TypeDefinitionIndex = 330;

	class StringComparer : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet__ordinal()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x370);
		}
		static ::System::StringComparer** StaticGet__invariantCultureIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x378);
		}
		static ::System::StringComparer** StaticGet__invariantCulture()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		static ::System::StringComparer** StaticGet__ordinalIgnoreCase()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(StringComparer_TypeDefinitionIndex)->GetStaticField(0x388);
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
