#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { template <typename T> class ArrayPool_1; }

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int ArraySegmentFormatter_1_TypeDefinitionIndex = 91278;

	template <typename T>
	class ArraySegmentFormatter_1 : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::ArrayPool_1<T>** StaticGet_arrayPool()
		{
			return (::Utf8Json::Internal::ArrayPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArraySegmentFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
