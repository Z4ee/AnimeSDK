#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HeaderInfo_HeaderTypeInfo_2.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http::Headers { template <typename T> class TryParseListDelegate_1; }

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_CollectionHeaderTypeInfo_2_TypeDefinitionIndex = 3781;

	template <typename T, typename U>
	class HeaderInfo_CollectionHeaderTypeInfo_2 : public ::System::Net::Http::Headers::HeaderInfo_HeaderTypeInfo_2<T, U>
	{
	public:
		::System::Int32 minimalCount; // 0x0
		::System::String* separator; // 0x0
		::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser; // 0x0
	};
}
