#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapResourceFileType_TypeDefinitionIndex = 7677;

	enum class NapResourceFileType : ::System::Int32
	{
		None = 0,
		Res = 1,
		Silence = 2,
		Data = 3,
		Audio = 4,
	};
}
