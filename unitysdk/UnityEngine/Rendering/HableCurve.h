#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/HableCurve_DirectParams.h"

namespace UnityEngine::Rendering { class HableCurve_Segment; }
namespace UnityEngine::Rendering { class HableCurve_Uniforms; }

#define UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET UNITYSDK_OFFSET(0x1B17BE60)
#define UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET UNITYSDK_OFFSET(0x1B17BEB0)
#define UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET UNITYSDK_OFFSET(0x1B17B640)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1B17B440)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1B17B420)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET UNITYSDK_OFFSET(0x1B17B460)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET UNITYSDK_OFFSET(0x1B17B480)
#define UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1B17B960)
#define UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET UNITYSDK_OFFSET(0x1B17B750)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1B17B450)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1B17B430)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET UNITYSDK_OFFSET(0x1B17B470)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET UNITYSDK_OFFSET(0x1B17B490)
#define UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET UNITYSDK_OFFSET(0x1B17BF00)
#define UNITYENGINE_RENDERING_HABLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17B4A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_TypeDefinitionIndex = 33793;

	class HableCurve : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::HableCurve_Uniforms* uniforms; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::HableCurve_Segment*>* segments; // 0x18
		::System::Single _x1_k__BackingField; // 0x20
		::System::Single _whitePoint_k__BackingField; // 0x24
		::System::Single _inverseWhitePoint_k__BackingField; // 0x28
		::System::Single _x0_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE__CTOR_OFFSET))(this);
		}

		::System::Single get_whitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET))(this);
		}

		::System::Void set_whitePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET))(this, a1);
		}

		::System::Single get_inverseWhitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET))(this);
		}

		::System::Void set_inverseWhitePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET))(this, a1);
		}

		::System::Single get_x0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET))(this);
		}

		::System::Void set_x0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET))(this, a1);
		}

		::System::Single get_x1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET))(this);
		}

		::System::Void set_x1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET))(this, a1);
		}

		::System::Single Eval(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void InitSegments(::UnityEngine::Rendering::HableCurve_DirectParams a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::HableCurve_DirectParams))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET))(this, a1);
		}

		::System::Void SolveAB(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AsSlopeIntercept(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single EvalDerivativeLinearGamma(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
