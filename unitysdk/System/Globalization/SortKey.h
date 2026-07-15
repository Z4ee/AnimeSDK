#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET UNITYSDK_OFFSET(0x172CE980)
#define SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x172CECF0)
#define SYSTEM_GLOBALIZATION_SORTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172ACBA0)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET UNITYSDK_OFFSET(0x172CECE0)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x172CECD0)
#define SYSTEM_GLOBALIZATION_SORTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172CED80)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172CECB0)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x172CF020)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x172ACD30)

namespace System::Globalization
{
	inline static constexpr unsigned int SortKey_TypeDefinitionIndex = 779;

	class SortKey : public ::System::Object
	{
	public:
		::System::String* source; // 0x10
		::Il2CppArray<::System::Byte>* key; // 0x18
		::System::Globalization::CompareOptions options; // 0x20
		::System::Int32 lcid; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Globalization::CompareOptions a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Globalization::CompareOptions, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_2_OFFSET))(this);
		}

		static ::System::Int32 Compare(::System::Globalization::SortKey* a1, ::System::Globalization::SortKey* a2)
		{
			return ((::System::Int32(*)(::System::Globalization::SortKey*, ::System::Globalization::SortKey*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET))(a1, a2);
		}

		::System::String* get_OriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_KeyData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_TOSTRING_OFFSET))(this);
		}
	};
}
