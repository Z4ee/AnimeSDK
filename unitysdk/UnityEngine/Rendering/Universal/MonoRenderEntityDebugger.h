#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NapRenderEntity;

#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYDEBUGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B36C650)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36C8E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoRenderEntityDebugger_TypeDefinitionIndex = 30070;

	class MonoRenderEntityDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 index; // 0x18
		::NapRenderEntity* napRenderEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYDEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYDEBUGGER_LATEUPDATE_OFFSET))(this);
		}
	};
}
