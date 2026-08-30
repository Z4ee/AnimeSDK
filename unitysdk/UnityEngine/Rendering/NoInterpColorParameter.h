#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBFD6F0)
#define UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFD5A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpColorParameter_TypeDefinitionIndex = 34975;

	class NoInterpColorParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Color>
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void _ctor(::UnityEngine::Color a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
