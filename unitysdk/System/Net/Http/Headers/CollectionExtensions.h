#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD2670)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 3766;

	class CollectionExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetValue(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET))(a1, a2, a3);
		}
	};
}
