#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER_REGISTERUECATCHER_OFFSET UNITYSDK_OFFSET(0x1A492AA0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnhandledExceptionHandler_TypeDefinitionIndex = 4166;

	class UnhandledExceptionHandler : public ::System::Object
	{
	public:
		static ::System::Void RegisterUECatcher()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER_REGISTERUECATCHER_OFFSET))();
		}
	};
}
