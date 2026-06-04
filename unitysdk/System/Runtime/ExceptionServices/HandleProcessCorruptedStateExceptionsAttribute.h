#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18770610)

namespace System::Runtime::ExceptionServices
{
	inline static constexpr unsigned int HandleProcessCorruptedStateExceptionsAttribute_TypeDefinitionIndex = 1329;

	class HandleProcessCorruptedStateExceptionsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
