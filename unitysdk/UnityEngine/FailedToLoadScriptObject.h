#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_FAILEDTOLOADSCRIPTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B180EE0)

namespace UnityEngine
{
	inline static constexpr unsigned int FailedToLoadScriptObject_TypeDefinitionIndex = 5341;

	class FailedToLoadScriptObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FAILEDTOLOADSCRIPTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
