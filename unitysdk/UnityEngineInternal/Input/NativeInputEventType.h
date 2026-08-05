#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEventType_TypeDefinitionIndex = 28025;

	enum class NativeInputEventType : ::System::Int32
	{
		DeviceRemoved = 1146242381,
		DeviceConfigChanged = 1145259591,
		Text = 1413830740,
		State = 1398030676,
		Delta = 1145852993,
	};
}
