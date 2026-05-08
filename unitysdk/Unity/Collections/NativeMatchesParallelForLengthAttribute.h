#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA3CF0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeMatchesParallelForLengthAttribute_TypeDefinitionIndex = 5083;

	class NativeMatchesParallelForLengthAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
