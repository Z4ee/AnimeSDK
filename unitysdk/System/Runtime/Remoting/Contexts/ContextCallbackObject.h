#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ContextBoundObject.h"

namespace System::Runtime::Remoting::Contexts { class CrossContextDelegate; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x163A30E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x163A30D0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int ContextCallbackObject_TypeDefinitionIndex = 1239;

	class ContextCallbackObject : public ::System::ContextBoundObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::CrossContextDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET))(this, deleg);
		}
	};
}
