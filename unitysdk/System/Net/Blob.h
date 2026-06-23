#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net
{
	inline static constexpr unsigned int Blob_TypeDefinitionIndex = 3327;

	struct alignas(4) Blob
	{
		::System::Int32 cbSize; // 0x10
		::System::Int32 pBlobData; // 0x14
	};
}
