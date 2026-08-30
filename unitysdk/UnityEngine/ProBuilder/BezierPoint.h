#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierTangentDirection.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierTangentMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define UNITYENGINE_PROBUILDER_BEZIERPOINT_CUBICPOSITION_OFFSET UNITYSDK_OFFSET(0x1EACB2A0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_ENFORCETANGENTMODE_OFFSET UNITYSDK_OFFSET(0x3BAD730)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_GETLOOKDIRECTION_OFFSET UNITYSDK_OFFSET(0x1EACB370)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_QUADRATICPOSITION_OFFSET UNITYSDK_OFFSET(0x1EACB220)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x3BAD740)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTIN_OFFSET UNITYSDK_OFFSET(0x3BAD790)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTOUT_OFFSET UNITYSDK_OFFSET(0x3BAD7B0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x3BAD6C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BezierPoint_TypeDefinitionIndex = 43145;

	struct alignas(4) BezierPoint
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 tangentIn; // 0x1C
		::UnityEngine::Vector3 tangentOut; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection a1, ::UnityEngine::ProBuilder::BezierTangentMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::BezierTangentDirection, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_ENFORCETANGENTMODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetTangentIn(::UnityEngine::Vector3 a1, ::UnityEngine::ProBuilder::BezierTangentMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTIN_OFFSET))(this, a1, a2);
		}

		::System::Void SetTangentOut(::UnityEngine::Vector3 a1, ::UnityEngine::ProBuilder::BezierTangentMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTOUT_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint a1, ::UnityEngine::ProBuilder::BezierPoint a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_QUADRATICPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 CubicPosition(::UnityEngine::ProBuilder::BezierPoint a1, ::UnityEngine::ProBuilder::BezierPoint a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_CUBICPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_GETLOOKDIRECTION_OFFSET))(a1, a2, a3, a4);
		}
	};
}
