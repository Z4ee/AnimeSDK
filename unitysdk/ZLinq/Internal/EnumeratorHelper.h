#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Index.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define ZLINQ_INTERNAL_ENUMERATORHELPER_TRYGETSLICERANGE_OFFSET UNITYSDK_OFFSET(0x18CEF8F0)

namespace ZLinq::Internal
{
	inline static constexpr unsigned int EnumeratorHelper_TypeDefinitionIndex = 6526;

	class EnumeratorHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetSliceRange(::System::Int32 sourceLength, ::System::Index offset, ::System::Int32 destinationLength, ::System::Int32& start, ::System::Int32& count)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Index, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_ENUMERATORHELPER_TRYGETSLICERANGE_OFFSET))(sourceLength, offset, destinationLength, start, count);
		}
	};
}
