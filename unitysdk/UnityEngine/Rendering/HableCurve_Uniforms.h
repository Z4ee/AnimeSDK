#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class HableCurve; }

#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x188E7880)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTA_OFFSET UNITYSDK_OFFSET(0x188E79A0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTB_OFFSET UNITYSDK_OFFSET(0x188E7A10)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTA_OFFSET UNITYSDK_OFFSET(0x188E7A80)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTB_OFFSET UNITYSDK_OFFSET(0x188E7AF0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTA_OFFSET UNITYSDK_OFFSET(0x188E78C0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTB_OFFSET UNITYSDK_OFFSET(0x188E7930)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x188E6ED0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_Uniforms_TypeDefinitionIndex = 27890;

	class HableCurve_Uniforms : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::HableCurve* parent; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::HableCurve* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::HableCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS__CTOR_OFFSET))(this, parent);
		}

		::UnityEngine::Vector4 get_curve()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_CURVE_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_toeSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_toeSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTB_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_midSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_midSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTB_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_shoSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_shoSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTB_OFFSET))(this);
		}
	};
}
