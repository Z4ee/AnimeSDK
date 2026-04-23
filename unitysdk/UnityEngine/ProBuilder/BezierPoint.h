#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierTangentDirection.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierTangentMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define UNITYENGINE_PROBUILDER_BEZIERPOINT_CUBICPOSITION_OFFSET UNITYSDK_OFFSET(0x1A1F5BE0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_ENFORCETANGENTMODE_OFFSET UNITYSDK_OFFSET(0x22DA040)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_GETLOOKDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A1F5CB0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_QUADRATICPOSITION_OFFSET UNITYSDK_OFFSET(0x1A1F5B60)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x22DA050)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTIN_OFFSET UNITYSDK_OFFSET(0x22DA0A0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTOUT_OFFSET UNITYSDK_OFFSET(0x22DA0C0)
#define UNITYENGINE_PROBUILDER_BEZIERPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x22D9FD0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BezierPoint_TypeDefinitionIndex = 39892;

	struct alignas(4) BezierPoint
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 tangentIn; // 0x1C
		::UnityEngine::Vector3 tangentOut; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT__CTOR_OFFSET))(this, position, tangentIn, tangentOut, rotation);
		}

		::System::Void EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection master, ::UnityEngine::ProBuilder::BezierTangentMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::BezierTangentDirection, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_ENFORCETANGENTMODE_OFFSET))(this, master, mode);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETPOSITION_OFFSET))(this, position);
		}

		::System::Void SetTangentIn(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTIN_OFFSET))(this, tangent, mode);
		}

		::System::Void SetTangentOut(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_SETTANGENTOUT_OFFSET))(this, tangent, mode);
		}

		static ::UnityEngine::Vector3 QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_QUADRATICPOSITION_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 CubicPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_CUBICPOSITION_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points, ::System::Int32 index, ::System::Int32 previous, ::System::Int32 next)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERPOINT_GETLOOKDIRECTION_OFFSET))(points, index, previous, next);
		}
	};
}
