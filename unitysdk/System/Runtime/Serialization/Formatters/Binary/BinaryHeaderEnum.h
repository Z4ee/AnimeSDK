#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryHeaderEnum_TypeDefinitionIndex = 1159;

	enum class BinaryHeaderEnum : ::System::Int32
	{
		SerializedStreamHeader = 0,
		Object = 1,
		ObjectWithMap = 2,
		ObjectWithMapAssemId = 3,
		ObjectWithMapTyped = 4,
		ObjectWithMapTypedAssemId = 5,
		ObjectString = 6,
		Array = 7,
		MemberPrimitiveTyped = 8,
		MemberReference = 9,
		ObjectNull = 10,
		MessageEnd = 11,
		Assembly = 12,
		ObjectNullMultiple256 = 13,
		ObjectNullMultiple = 14,
		ArraySinglePrimitive = 15,
		ArraySingleObject = 16,
		ArraySingleString = 17,
		CrossAppDomainMap = 18,
		CrossAppDomainString = 19,
		CrossAppDomainAssembly = 20,
		MethodCall = 21,
		MethodReturn = 22,
	};
}
