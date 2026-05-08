#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0 { class HableCurve; }

#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1B3C4030)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_MIDSEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B3C4130)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_MIDSEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B3C4190)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_SHOSEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B3C41F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_SHOSEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B3C4250)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_TOESEGMENTA_OFFSET UNITYSDK_OFFSET(0x1B3C4070)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_TOESEGMENTB_OFFSET UNITYSDK_OFFSET(0x1B3C40D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C4020)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int HableCurve_Uniforms_TypeDefinitionIndex = 5954;

	class HableCurve_Uniforms : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::HableCurve* parent; // 0x10

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::HableCurve* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::HableCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS__CTOR_OFFSET))(this, parent);
		}

		::UnityEngine::Vector4 get_curve()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_CURVE_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_toeSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_TOESEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_toeSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_TOESEGMENTB_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_midSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_MIDSEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_midSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_MIDSEGMENTB_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_shoSegmentA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_SHOSEGMENTA_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_shoSegmentB()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_UNIFORMS_GET_SHOSEGMENTB_OFFSET))(this);
		}
	};
}
