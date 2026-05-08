#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XftWeapon { class SplineControlPoint; }

#define XFTWEAPON_BSPLINE_EVALUATEINTERNAL_BONESHAPE_OFFSET UNITYSDK_OFFSET(0x1B16CDE0)
#define XFTWEAPON_BSPLINE_EVALUATEINTERNAL_CUSTOMSHAPE_OFFSET UNITYSDK_OFFSET(0x1B16C780)
#define XFTWEAPON_BSPLINE_EVALUATEINTERNAL_INNERGETINTPLUSONE_OFFSET UNITYSDK_OFFSET(0x1B16D710)
#define XFTWEAPON_BSPLINE_EVALUATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B16C2A0)
#define XFTWEAPON_BSPLINE_EVALUATE_BONESHAPE_OFFSET UNITYSDK_OFFSET(0x1B16CD20)
#define XFTWEAPON_BSPLINE_EVALUATE_CUSTOMSHAPE_OFFSET UNITYSDK_OFFSET(0x1B16C6C0)
#define XFTWEAPON_BSPLINE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B16C1E0)
#define XFTWEAPON_BSPLINE_SAMPLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B16BDC0)
#define XFTWEAPON_BSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16D730)

namespace XftWeapon
{
	inline static constexpr unsigned int BSpline_TypeDefinitionIndex = 37673;

	class BSpline : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>>* tempList_customShape; // 0x10
		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* _pointsCache; // 0x18
		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* tempList_boneShape; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* tempList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void SamplePoints(::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* points, ::System::Int32 maxPointCount, ::System::Single interval, ::System::Int32 k, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* outPositions, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* outNormals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_SAMPLEPOINTS_OFFSET))(this, points, maxPointCount, interval, k, outPositions, outNormals);
		}

		::System::Void Evaluate(::System::Single t, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& normal, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATE_OFFSET))(this, t, controlPoints, k, position, normal, controlPointsLen);
		}

		::System::Void Evaluate_CustomShape(::System::Single t, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& up, ::UnityEngine::Vector3& right, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATE_CUSTOMSHAPE_OFFSET))(this, t, controlPoints, k, position, forward, up, right, controlPointsLen);
		}

		::System::Void Evaluate_BoneShape(::System::Single t, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::UnityEngine::Vector3& position, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& points, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::UnityEngine::Vector3&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATE_BONESHAPE_OFFSET))(this, t, controlPoints, k, position, points, controlPointsLen);
		}

		::System::Void EvaluateInternal(::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::System::Single index, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& normal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATEINTERNAL_OFFSET))(this, controlPoints, k, index, position, normal);
		}

		::System::Void EvaluateInternal_CustomShape(::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::System::Single index, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& up, ::UnityEngine::Vector3& right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATEINTERNAL_CUSTOMSHAPE_OFFSET))(this, controlPoints, k, index, position, forward, up, right);
		}

		::System::Void EvaluateInternal_BoneShape(::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* controlPoints, ::System::Int32 k, ::System::Single index, ::UnityEngine::Vector3& position, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATEINTERNAL_BONESHAPE_OFFSET))(this, controlPoints, k, index, position, points);
		}

		::System::Single EvaluateInternal_InnerGetIntPlusOne(::System::Int32 v)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_BSPLINE_EVALUATEINTERNAL_INNERGETINTPLUSONE_OFFSET))(this, v);
		}
	};
}
