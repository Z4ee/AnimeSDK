#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XftWeapon { class BSpline; }
namespace XftWeapon { class SplineControlPoint; }

#define XFTWEAPON_SPLINE_ADDCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1E91E960)
#define XFTWEAPON_SPLINE_CATMULROM_OFFSET UNITYSDK_OFFSET(0x1E91DB80)
#define XFTWEAPON_SPLINE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E91EA20)
#define XFTWEAPON_SPLINE_GET_BSPLINE_OFFSET UNITYSDK_OFFSET(0x1E91DD80)
#define XFTWEAPON_SPLINE_GET_CONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1E91D580)
#define XFTWEAPON_SPLINE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E91D510)
#define XFTWEAPON_SPLINE_GET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x1E91D570)
#define XFTWEAPON_SPLINE_INTERPOLATEBYLEN_OFFSET UNITYSDK_OFFSET(0x1E91E1C0)
#define XFTWEAPON_SPLINE_INTERPOLATENORMALBYLEN_OFFSET UNITYSDK_OFFSET(0x1E91E590)
#define XFTWEAPON_SPLINE_INTERPOLATE_BONESHAPE_OFFSET UNITYSDK_OFFSET(0x1E91E080)
#define XFTWEAPON_SPLINE_INTERPOLATE_CUSTOMSHAPE_OFFSET UNITYSDK_OFFSET(0x1E91DF20)
#define XFTWEAPON_SPLINE_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1E91DDE0)
#define XFTWEAPON_SPLINE_LENTOSEGMENT_FORBSPLINE_OFFSET UNITYSDK_OFFSET(0x1E91DA40)
#define XFTWEAPON_SPLINE_LENTOSEGMENT_OFFSET UNITYSDK_OFFSET(0x1E91D910)
#define XFTWEAPON_SPLINE_NEXTCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1E91D590)
#define XFTWEAPON_SPLINE_NEXTNORMAL_OFFSET UNITYSDK_OFFSET(0x1E91D870)
#define XFTWEAPON_SPLINE_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E91D690)
#define XFTWEAPON_SPLINE_PREVIOUSCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1E91D610)
#define XFTWEAPON_SPLINE_PREVIOUSNORMAL_OFFSET UNITYSDK_OFFSET(0x1E91D7D0)
#define XFTWEAPON_SPLINE_PREVIOUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1E91D730)
#define XFTWEAPON_SPLINE_REFRESHDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E91EA60)
#define XFTWEAPON_SPLINE_REFRESHSPLINE_OFFSET UNITYSDK_OFFSET(0x1E91EB70)
#define XFTWEAPON_SPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E91ED70)

namespace XftWeapon
{
	inline static constexpr unsigned int Spline_TypeDefinitionIndex = 39966;

	class Spline : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* mSegments; // 0x10
		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* mControlPoints; // 0x18
		::XftWeapon::BSpline* _BSpline; // 0x20
		::System::Int32 Granularity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE__CTOR_OFFSET))(this);
		}

		::XftWeapon::SplineControlPoint* get_Item(::System::Int32 index)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* get_Segments()
		{
			return ((::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_GET_SEGMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>* get_ControlPoints()
		{
			return ((::System::Collections::Generic::List_1<::XftWeapon::SplineControlPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_GET_CONTROLPOINTS_OFFSET))(this);
		}

		::XftWeapon::SplineControlPoint* NextControlPoint(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_NEXTCONTROLPOINT_OFFSET))(this, controlpoint);
		}

		::XftWeapon::SplineControlPoint* PreviousControlPoint(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_PREVIOUSCONTROLPOINT_OFFSET))(this, controlpoint);
		}

		::UnityEngine::Vector3 NextPosition(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_NEXTPOSITION_OFFSET))(this, controlpoint);
		}

		::UnityEngine::Vector3 PreviousPosition(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_PREVIOUSPOSITION_OFFSET))(this, controlpoint);
		}

		::UnityEngine::Vector3 PreviousNormal(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_PREVIOUSNORMAL_OFFSET))(this, controlpoint);
		}

		::UnityEngine::Vector3 NextNormal(::XftWeapon::SplineControlPoint* controlpoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::XftWeapon::SplineControlPoint*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_NEXTNORMAL_OFFSET))(this, controlpoint);
		}

		::XftWeapon::SplineControlPoint* LenToSegment(::System::Single t, ::System::Single& localF)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_LENTOSEGMENT_OFFSET))(this, t, localF);
		}

		::XftWeapon::SplineControlPoint* LenToSegment_ForBSpline(::System::Single t, ::System::Single& localF, ::System::Int32& outIdx)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_LENTOSEGMENT_FORBSPLINE_OFFSET))(this, t, localF, outIdx);
		}

		static ::UnityEngine::Vector3 CatmulRom(::UnityEngine::Vector3 T0, ::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 T1, ::System::Single f)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_CATMULROM_OFFSET))(T0, P0, P1, T1, f);
		}

		::XftWeapon::BSpline* get_BSpline()
		{
			return ((::XftWeapon::BSpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_GET_BSPLINE_OFFSET))(this);
		}

		::System::Void Interpolate(::System::Single tl, ::System::Int32 k, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& normal, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_INTERPOLATE_OFFSET))(this, tl, k, position, normal, controlPointsLen);
		}

		::System::Void Interpolate_CustomShape(::System::Single tl, ::System::Int32 k, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& up, ::UnityEngine::Vector3& right, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_INTERPOLATE_CUSTOMSHAPE_OFFSET))(this, tl, k, position, forward, up, right, controlPointsLen);
		}

		::System::Void Interpolate_BoneShape(::System::Single tl, ::System::Int32 k, ::UnityEngine::Vector3& position, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& points, ::System::Int32 controlPointsLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_INTERPOLATE_BONESHAPE_OFFSET))(this, tl, k, position, points, controlPointsLen);
		}

		::UnityEngine::Vector3 InterpolateByLen(::System::Single tl)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_INTERPOLATEBYLEN_OFFSET))(this, tl);
		}

		::UnityEngine::Vector3 InterpolateNormalByLen(::System::Single tl)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_INTERPOLATENORMALBYLEN_OFFSET))(this, tl);
		}

		::XftWeapon::SplineControlPoint* AddControlPoint(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 up)
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_ADDCONTROLPOINT_OFFSET))(this, pos, up);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_CLEAR_OFFSET))(this);
		}

		::System::Void RefreshDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_REFRESHDISTANCE_OFFSET))(this);
		}

		::System::Void RefreshSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINE_REFRESHSPLINE_OFFSET))(this);
		}
	};
}
