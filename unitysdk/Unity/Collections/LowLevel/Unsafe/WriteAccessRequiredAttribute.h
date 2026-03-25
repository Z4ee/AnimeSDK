#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_WRITEACCESSREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189EA090)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int WriteAccessRequiredAttribute_TypeDefinitionIndex = 3810;

	class WriteAccessRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_WRITEACCESSREQUIREDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
