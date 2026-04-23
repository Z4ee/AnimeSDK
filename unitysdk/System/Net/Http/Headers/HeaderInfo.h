#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class HttpHeaders; }
namespace System::Net::Http::Headers { template <typename T> class TryParseDelegate_1; }
namespace System::Net::Http::Headers { template <typename T> class TryParseListDelegate_1; }

#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x19F5F660)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x19F5F680)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET UNITYSDK_OFFSET(0x19F5F6A0)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x19F5F690)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5F650)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 4808;

	class HeaderInfo : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Func_2<::System::Object*, ::System::String*>* _CustomToString_k__BackingField; // 0x18
		::System::Boolean AllowsMany; // 0x20
		::System::Net::Http::Headers::HttpHeaderKind HeaderKind; // 0x24

		::System::Void _ctor(::System::String* name, ::System::Net::Http::Headers::HttpHeaderKind headerKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::Headers::HttpHeaderKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO__CTOR_OFFSET))(this, name, headerKind);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Http::Headers::HttpHeaders*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET))(this, headers);
		}

		::System::Func_2<::System::Object*, ::System::String*>* get_CustomToString()
		{
			return ((::System::Func_2<::System::Object*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET))(this);
		}

		::System::Void set_CustomToString(::System::Func_2<::System::Object*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET))(this, value);
		}

		::System::String* get_Separator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET))(this);
		}
	};
}
