#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestEnvelope_ManifestFormats_TypeDefinitionIndex = 1701;

	enum class ManifestEnvelope_ManifestFormats : ::System::Byte
	{
		SimpleXmlFormat = 0x1,
	};
}
