#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HeaderInfo.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class HttpHeaders; }
namespace System::Net::Http::Headers { template <typename T> class TryParseDelegate_1; }

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_HeaderTypeInfo_2_TypeDefinitionIndex = 3780;

	template <typename T, typename U>
	class HeaderInfo_HeaderTypeInfo_2 : public ::System::Net::Http::Headers::HeaderInfo
	{
	public:
		::System::Net::Http::Headers::TryParseDelegate_1<T>* parser; // 0x0
	};
}
