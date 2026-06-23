#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_PASSREFCOUNTDEBUGBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3A60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScriptableRenderPass_PassRefCountDebugBlock_TypeDefinitionIndex = 5959;

	class ScriptableRenderPass_PassRefCountDebugBlock : public ::System::Object
	{
	public:
		::System::Int32 Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_PASSREFCOUNTDEBUGBLOCK__CTOR_OFFSET))(this);
		}
	};
}
