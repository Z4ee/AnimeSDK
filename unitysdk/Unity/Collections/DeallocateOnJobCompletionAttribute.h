#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_DEALLOCATEONJOBCOMPLETIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11BE60)

namespace Unity::Collections
{
	inline static constexpr unsigned int DeallocateOnJobCompletionAttribute_TypeDefinitionIndex = 5080;

	class DeallocateOnJobCompletionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_DEALLOCATEONJOBCOMPLETIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
