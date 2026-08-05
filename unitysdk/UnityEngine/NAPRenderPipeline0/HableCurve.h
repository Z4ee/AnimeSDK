#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/HableCurve_DirectParams.h"

namespace UnityEngine::NAPRenderPipeline0 { class HableCurve_Segment; }
namespace UnityEngine::NAPRenderPipeline0 { class HableCurve_Uniforms; }

#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_ASSLOPEINTERCEPT_OFFSET UNITYSDK_OFFSET(0x1E319990)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET UNITYSDK_OFFSET(0x1E3199E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E319060)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X0_OFFSET UNITYSDK_OFFSET(0x1E319080)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X1_OFFSET UNITYSDK_OFFSET(0x1E3190A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INITSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1E319480)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INIT_OFFSET UNITYSDK_OFFSET(0x1E319280)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E319070)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E319050)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X0_OFFSET UNITYSDK_OFFSET(0x1E319090)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X1_OFFSET UNITYSDK_OFFSET(0x1E3190B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SOLVEAB_OFFSET UNITYSDK_OFFSET(0x1E319A30)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3190C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int HableCurve_TypeDefinitionIndex = 5963;

	class HableCurve : public ::System::Object
	{
	public:
		::System::Single _whitePoint_k__BackingField; // 0x10
		::System::Single _inverseWhitePoint_k__BackingField; // 0x14
		::System::Single _x0_k__BackingField; // 0x18
		::System::Single _x1_k__BackingField; // 0x1C
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::HableCurve_Segment*>* m_Segments; // 0x20
		::UnityEngine::NAPRenderPipeline0::HableCurve_Uniforms* uniforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE__CTOR_OFFSET))(this);
		}

		::System::Void set_whitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_WHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_inverseWhitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET))(this);
		}

		::System::Void set_inverseWhitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_x0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X0_OFFSET))(this);
		}

		::System::Void set_x0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X0_OFFSET))(this, value);
		}

		::System::Single get_x1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X1_OFFSET))(this);
		}

		::System::Void set_x1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X1_OFFSET))(this, value);
		}

		::System::Void Init(::System::Single toeStrength, ::System::Single toeLength, ::System::Single shoulderStrength, ::System::Single shoulderLength, ::System::Single shoulderAngle, ::System::Single gamma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INIT_OFFSET))(this, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
		}

		::System::Void InitSegments(::UnityEngine::NAPRenderPipeline0::HableCurve_DirectParams srcParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::HableCurve_DirectParams))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INITSEGMENTS_OFFSET))(this, srcParams);
		}

		::System::Void SolveAB(::System::Single& lnA, ::System::Single& B, ::System::Single x0, ::System::Single y0, ::System::Single m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SOLVEAB_OFFSET))(this, lnA, B, x0, y0, m);
		}

		::System::Void AsSlopeIntercept(::System::Single& m, ::System::Single& b, ::System::Single x0, ::System::Single x1, ::System::Single y0, ::System::Single y1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_ASSLOPEINTERCEPT_OFFSET))(this, m, b, x0, x1, y0, y1);
		}

		::System::Single EvalDerivativeLinearGamma(::System::Single m, ::System::Single b, ::System::Single g, ::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET))(this, m, b, g, x);
		}
	};
}
