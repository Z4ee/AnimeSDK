#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ContextBoundObject.h"

namespace System::Runtime::Remoting::Contexts { class CrossContextDelegate; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A838DF0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A838DE0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int ContextCallbackObject_TypeDefinitionIndex = 1242;

	class ContextCallbackObject : public ::System::ContextBoundObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::CrossContextDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET))(this, a1);
		}
	};
}
