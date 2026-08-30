#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CLEAR_OFFSET UNITYSDK_OFFSET(0x3BA4970)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CONCATNODELIMITER_OFFSET UNITYSDK_OFFSET(0x3BA4990)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BA4980)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2F26CE0)

namespace System::Xml::Xsl::Runtime
{
	inline static constexpr unsigned int StringConcat_TypeDefinitionIndex = 2242;

	struct alignas(8) StringConcat
	{
		::System::String* s1; // 0x10
		::System::String* s2; // 0x18
		::System::String* s3; // 0x20
		::System::String* s4; // 0x28
		::System::String* delimiter; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* strList; // 0x38
		::System::Int32 idxStr; // 0x40

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GET_COUNT_OFFSET))(this);
		}

		::System::String* GetResult()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GETRESULT_OFFSET))(this);
		}

		::System::Void ConcatNoDelimiter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CONCATNODELIMITER_OFFSET))(this, a1);
		}
	};
}
