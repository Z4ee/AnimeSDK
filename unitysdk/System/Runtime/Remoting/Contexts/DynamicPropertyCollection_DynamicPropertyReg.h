#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Contexts { class IDynamicMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_DYNAMICPROPERTYREG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC93760)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int DynamicPropertyCollection_DynamicPropertyReg_TypeDefinitionIndex = 1284;

	class DynamicPropertyCollection_DynamicPropertyReg : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_DYNAMICPROPERTYREG__CTOR_OFFSET))(this);
		}
	};
}
