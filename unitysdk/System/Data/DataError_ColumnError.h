#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Data { class DataColumn; }

namespace System::Data
{
	inline static constexpr unsigned int DataError_ColumnError_TypeDefinitionIndex = 36956;

	struct alignas(8) DataError_ColumnError
	{
		::System::Data::DataColumn* _column; // 0x10
		::System::String* _error; // 0x18
	};
}
