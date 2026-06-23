#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace UnityEngine::Rendering::Universal { class VisQueryManager; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C450630)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER___C__DISPLAYCLASS32_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C450640)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisQueryManager___c__DisplayClass32_0_TypeDefinitionIndex = 26652;

	class VisQueryManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::VisQueryManager* __4__this; // 0x10
		::System::Int32 slot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest req)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER___C__DISPLAYCLASS32_0___CTOR_B__0_OFFSET))(this, req);
		}
	};
}
