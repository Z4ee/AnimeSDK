#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Uri_Offset.h"

namespace System { class String; }
namespace System { class Uri_MoreInfo; }

#define SYSTEM_URI_URIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1E870)

namespace System
{
	inline static constexpr unsigned int Uri_UriInfo_TypeDefinitionIndex = 2463;

	class Uri_UriInfo : public ::System::Object
	{
	public:
		::System::Uri_MoreInfo* MoreInfo; // 0x10
		::System::String* DnsSafeHost; // 0x18
		::System::String* ScopeId; // 0x20
		::System::String* String; // 0x28
		::System::String* Host; // 0x30
		::System::Uri_Offset Offset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_URIINFO__CTOR_OFFSET))(this);
		}
	};
}
