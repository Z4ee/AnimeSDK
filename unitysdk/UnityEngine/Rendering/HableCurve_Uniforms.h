#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class HableCurve; }

#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1B17BF80)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B17C080)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_MIDSEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B17C0F0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B17C150)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_SHOSEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B17C1B0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B17BFC0)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS_GET_TOESEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B17C020)
#define UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17B630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_Uniforms_TypeDefinitionIndex = 33796;

	class HableCurve_Uniforms : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::HableCurve* parent; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::HableCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::HableCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_UNIFORMS__CTOR_OFFSET))(this, a1);
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
