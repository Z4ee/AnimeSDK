#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class HeaderInfo; }
namespace System::Net::Http::Headers { class HttpHeaders; }

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaderValueCollection_1_TypeDefinitionIndex = 3784;

	template <typename T>
	class HttpHeaderValueCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* list; // 0x0
		::System::Net::Http::Headers::HttpHeaders* headers; // 0x0
		::System::Net::Http::Headers::HeaderInfo* headerInfo; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* invalidValues; // 0x0
	};
}
