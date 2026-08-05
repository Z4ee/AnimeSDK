#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Reflection::Emit { class LocalBuilder; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_DeserializeInfo_TypeDefinitionIndex = 95075;

	struct alignas(8) DynamicObjectTypeBuilder_DeserializeInfo
	{
		::Utf8Json::Internal::Emit::MetaMember* MemberInfo; // 0x10
		::System::Reflection::Emit::LocalBuilder* LocalField; // 0x18
		::System::Reflection::Emit::LocalBuilder* IsDeserializedField; // 0x20
	};
}
