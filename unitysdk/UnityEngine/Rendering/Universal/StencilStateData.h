#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_STENCILSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD1B2F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int StencilStateData_TypeDefinitionIndex = 29815;

	class StencilStateData : public ::System::Object
	{
	public:
		::System::Boolean overrideStencilState; // 0x10
		::System::Int32 stencilReference; // 0x14
		::UnityEngine::Rendering::CompareFunction stencilCompareFunction; // 0x18
		::UnityEngine::Rendering::StencilOp passOperation; // 0x1C
		::UnityEngine::Rendering::StencilOp failOperation; // 0x20
		::UnityEngine::Rendering::StencilOp zFailOperation; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STENCILSTATEDATA__CTOR_OFFSET))(this);
		}
	};
}
