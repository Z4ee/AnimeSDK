#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Index.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define ZLINQ_INTERNAL_ENUMERATORHELPER_TRYGETSLICERANGE_OFFSET UNITYSDK_OFFSET(0x1EFC8F70)

namespace ZLinq::Internal
{
	inline static constexpr unsigned int EnumeratorHelper_TypeDefinitionIndex = 6139;

	class EnumeratorHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetSliceRange(::System::Int32 a1, ::System::Index a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Index, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_ENUMERATORHELPER_TRYGETSLICERANGE_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
