#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ContextBoundObject.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A7390)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int ContextCallbackObject_TypeDefinitionIndex = 1285;

	class ContextCallbackObject : public ::System::ContextBoundObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET))(this);
		}
	};
}
