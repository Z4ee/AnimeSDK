#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ED0BF70)
#define UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BB6710)
#define UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_POP_OFFSET UNITYSDK_OFFSET(0x1ED0BFB0)
#define UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_PUSH_OFFSET UNITYSDK_OFFSET(0x1ED0BF90)

namespace UnityEngine
{
	inline static constexpr unsigned int AutoReleaseNativeStringScope_TypeDefinitionIndex = 4351;

	struct alignas(1) AutoReleaseNativeStringScope
	{
		static ::UnityEngine::AutoReleaseNativeStringScope Create()
		{
			return ((::UnityEngine::AutoReleaseNativeStringScope(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Push()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_PUSH_OFFSET))();
		}

		static ::System::Void Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AUTORELEASENATIVESTRINGSCOPE_POP_OFFSET))();
		}
	};
}
