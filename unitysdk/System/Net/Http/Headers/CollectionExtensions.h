#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18522780)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 4791;

	class CollectionExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetValue(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters, ::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET))(parameters, key, value);
		}
	};
}
