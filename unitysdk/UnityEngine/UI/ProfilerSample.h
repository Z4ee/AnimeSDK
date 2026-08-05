#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_PROFILERSAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB0F6C0)
#define UNITYENGINE_UI_PROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC80A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ProfilerSample_TypeDefinitionIndex = 19276;

	struct alignas(1) ProfilerSample
	{
		static ::UnityEngine::UI::ProfilerSample Create(::System::String* name, ::UnityEngine::Object* targetObject)
		{
			return ((::UnityEngine::UI::ProfilerSample(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_PROFILERSAMPLE_CREATE_OFFSET))(name, targetObject);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_PROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
