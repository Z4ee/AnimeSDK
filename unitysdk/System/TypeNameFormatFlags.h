#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int TypeNameFormatFlags_TypeDefinitionIndex = 317;

	enum class TypeNameFormatFlags : ::System::Int32
	{
		FormatBasic = 0,
		FormatNamespace = 1,
		FormatFullInst = 2,
		FormatAssembly = 4,
		FormatSignature = 8,
		FormatNoVersion = 16,
		FormatAngleBrackets = 64,
		FormatStubInfo = 128,
		FormatGenericParam = 256,
		FormatSerialization = 259,
	};
}
