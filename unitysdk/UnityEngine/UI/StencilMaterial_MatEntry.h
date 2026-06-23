#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_UI_STENCILMATERIAL_MATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E620C40)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int StencilMaterial_MatEntry_TypeDefinitionIndex = 18971;

	class StencilMaterial_MatEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMat; // 0x10
		::UnityEngine::Material* customMat; // 0x18
		::System::Int32 count; // 0x20
		::System::Int32 stencilId; // 0x24
		::UnityEngine::Rendering::StencilOp operation; // 0x28
		::UnityEngine::Rendering::CompareFunction compareFunction; // 0x2C
		::System::Int32 readMask; // 0x30
		::System::Int32 writeMask; // 0x34
		::System::Boolean useAlphaClip; // 0x38
		::UnityEngine::Rendering::ColorWriteMask colorMask; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_MATENTRY__CTOR_OFFSET))(this);
		}
	};
}
