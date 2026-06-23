#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchResultHandler_1.h"

namespace System { class String; }
namespace System::IO { class SearchResult; }

#define SYSTEM_IO_STRINGRESULTHANDLER_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D0B26B0)
#define SYSTEM_IO_STRINGRESULTHANDLER_ISRESULTINCLUDED_OFFSET UNITYSDK_OFFSET(0x1D0B2650)
#define SYSTEM_IO_STRINGRESULTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B2630)

namespace System::IO
{
	inline static constexpr unsigned int StringResultHandler_TypeDefinitionIndex = 642;

	class StringResultHandler : public ::System::IO::SearchResultHandler_1<::System::String*>
	{
	public:
		::System::Boolean _includeFiles; // 0x10
		::System::Boolean _includeDirs; // 0x11

		::System::Void _ctor(::System::Boolean includeFiles, ::System::Boolean includeDirs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGRESULTHANDLER__CTOR_OFFSET))(this, includeFiles, includeDirs);
		}

		::System::Boolean IsResultIncluded(::System::IO::SearchResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::SearchResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGRESULTHANDLER_ISRESULTINCLUDED_OFFSET))(this, result);
		}

		::System::String* CreateObject(::System::IO::SearchResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IO::SearchResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGRESULTHANDLER_CREATEOBJECT_OFFSET))(this, result);
		}
	};
}
