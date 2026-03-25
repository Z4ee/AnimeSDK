#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TEXT_ENCODINGINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x16214B00)
#define SYSTEM_TEXT_ENCODINGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16214B60)
#define SYSTEM_TEXT_ENCODINGINFO_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x16214AF0)
#define SYSTEM_TEXT_ENCODINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16214B70)
#define SYSTEM_TEXT_ENCODINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16214AE0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingInfo_TypeDefinitionIndex = 492;

	class EncodingInfo : public ::System::Object
	{
	public:
		::System::String* strEncodingName; // 0x10
		::System::String* strDisplayName; // 0x18
		::System::Int32 iCodePage; // 0x20

		::System::Void _ctor(::System::Int32 codePage, ::System::String* name, ::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO__CTOR_OFFSET))(this, codePage, name, displayName);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}
