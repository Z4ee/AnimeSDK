#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalParseTypeE_TypeDefinitionIndex = 1163;

	enum class InternalParseTypeE : ::System::Int32
	{
		Empty = 0,
		SerializedStreamHeader = 1,
		Object = 2,
		Member = 3,
		ObjectEnd = 4,
		MemberEnd = 5,
		Headers = 6,
		HeadersEnd = 7,
		SerializedStreamHeaderEnd = 8,
		Envelope = 9,
		EnvelopeEnd = 10,
		Body = 11,
		BodyEnd = 12,
	};
}
