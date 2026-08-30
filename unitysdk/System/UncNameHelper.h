#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EA13630)
#define SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1EA13620)

namespace System
{
	inline static constexpr unsigned int UncNameHelper_TypeDefinitionIndex = 2483;

	class UncNameHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsValid(::System::Char* a1, ::System::UInt16 a2, ::System::Int32& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET))(a1, a2, a3, a4);
		}
	};
}
