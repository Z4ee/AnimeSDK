#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Stack.h"

#define UNITYENGINEINTERNAL_GENERICSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A63FF0)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int GenericStack_TypeDefinitionIndex = 3732;

	class GenericStack : public ::System::Collections::Stack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_GENERICSTACK__CTOR_OFFSET))(this);
		}
	};
}
