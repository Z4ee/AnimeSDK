#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkStream_State_TypeDefinitionIndex = 2861;

	enum class MonoChunkStream_State : ::System::Int32
	{
		None = 0,
		PartialSize = 1,
		Body = 2,
		BodyFinished = 3,
		Trailer = 4,
	};
}
