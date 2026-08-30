#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"

namespace System { class String; }

#define SYSTEM_WEB_HTTPUTILITY_HTTPQSCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182CA5B0)
#define SYSTEM_WEB_HTTPUTILITY_HTTPQSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x182CA2E0)

namespace System::Web
{
	inline static constexpr unsigned int HttpUtility_HttpQSCollection_TypeDefinitionIndex = 2664;

	class HttpUtility_HttpQSCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTTPQSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_HTTPUTILITY_HTTPQSCOLLECTION_TOSTRING_OFFSET))(this);
		}
	};
}
