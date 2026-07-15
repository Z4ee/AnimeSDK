#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/ManifestEnvelope_ManifestFormats.h"
#include "unitysdk/System/ValueType.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestEnvelope_TypeDefinitionIndex = 1702;

	struct alignas(2) ManifestEnvelope
	{
		::System::Diagnostics::Tracing::ManifestEnvelope_ManifestFormats Format; // 0x10
		::System::Byte MajorVersion; // 0x11
		::System::Byte MinorVersion; // 0x12
		::System::Byte Magic; // 0x13
		::System::UInt16 TotalChunks; // 0x14
		::System::UInt16 ChunkNumber; // 0x16
	};
}
