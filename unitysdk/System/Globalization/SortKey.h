#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A3A35B0)
#define SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3A3760)
#define SYSTEM_GLOBALIZATION_SORTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3A37F0)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET UNITYSDK_OFFSET(0x1A3A3750)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1A3A3740)
#define SYSTEM_GLOBALIZATION_SORTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3A38C0)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3A3720)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3A3C30)
#define SYSTEM_GLOBALIZATION_SORTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A3710)

namespace System::Globalization
{
	inline static constexpr unsigned int SortKey_TypeDefinitionIndex = 768;

	class SortKey : public ::System::Object
	{
	public:
		::System::String* source; // 0x10
		::Il2CppArray<::System::Byte>* key; // 0x18
		::System::Globalization::CompareOptions options; // 0x20
		::System::Int32 lcid; // 0x24

		::System::Void _ctor(::System::Int32 lcid, ::System::String* source, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_OFFSET))(this, lcid, source, opt);
		}

		::System::Void _ctor_1(::System::Int32 lcid, ::System::String* source, ::Il2CppArray<::System::Byte>* buffer, ::System::Globalization::CompareOptions opt, ::System::Int32 lv1Length, ::System::Int32 lv2Length, ::System::Int32 lv3Length, ::System::Int32 kanaSmallLength, ::System::Int32 markTypeLength, ::System::Int32 katakanaLength, ::System::Int32 kanaWidthLength, ::System::Int32 identLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Globalization::CompareOptions, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_1_OFFSET))(this, lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength, katakanaLength, kanaWidthLength, identLength);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY__CTOR_2_OFFSET))(this);
		}

		static ::System::Int32 Compare(::System::Globalization::SortKey* sortkey1, ::System::Globalization::SortKey* sortkey2)
		{
			return ((::System::Int32(*)(::System::Globalization::SortKey*, ::System::Globalization::SortKey*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET))(sortkey1, sortkey2);
		}

		::System::String* get_OriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_KeyData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET))(this, value);
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
