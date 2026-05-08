#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER_REGISTERUECATCHER_OFFSET UNITYSDK_OFFSET(0x1B4DF1F0)
#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DF3C0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnhandledExceptionHandler_TypeDefinitionIndex = 5365;

	class UnhandledExceptionHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterUECatcher()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER_REGISTERUECATCHER_OFFSET))();
		}
	};
}
