#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TEXT_ENCODINGINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1995E720)
#define SYSTEM_TEXT_ENCODINGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1995E780)
#define SYSTEM_TEXT_ENCODINGINFO_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x1995E710)
#define SYSTEM_TEXT_ENCODINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1995E790)
#define SYSTEM_TEXT_ENCODINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1995E700)

namespace System::Text
{
	inline static constexpr unsigned int EncodingInfo_TypeDefinitionIndex = 491;

	class EncodingInfo : public ::System::Object
	{
	public:
		::System::String* strDisplayName; // 0x10
		::System::String* strEncodingName; // 0x18
		::System::Int32 iCodePage; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}
