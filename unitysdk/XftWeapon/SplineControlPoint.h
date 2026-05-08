#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XftWeapon { class Spline; }

#define XFTWEAPON_SPLINECONTROLPOINT_GETNEXT2NORMAL_OFFSET UNITYSDK_OFFSET(0x1B16F690)
#define XFTWEAPON_SPLINECONTROLPOINT_GETNEXT2POSITION_OFFSET UNITYSDK_OFFSET(0x1B16F560)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B16F0A0)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1B16F200)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTNORMAL_OFFSET UNITYSDK_OFFSET(0x1B16F430)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B16F300)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1B16F280)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSNORMAL_OFFSET UNITYSDK_OFFSET(0x1B16F4C0)
#define XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1B16F390)
#define XFTWEAPON_SPLINECONTROLPOINT_INIT_OFFSET UNITYSDK_OFFSET(0x1B16ED60)
#define XFTWEAPON_SPLINECONTROLPOINT_INTERPOLATENORMAL_OFFSET UNITYSDK_OFFSET(0x1B16E930)
#define XFTWEAPON_SPLINECONTROLPOINT_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1B16E550)
#define XFTWEAPON_SPLINECONTROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16D720)

namespace XftWeapon
{
	inline static constexpr unsigned int SplineControlPoint_TypeDefinitionIndex = 37675;

	class SplineControlPoint : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x10
		::XftWeapon::Spline* mSpline; // 0x18
		::UnityEngine::Vector3 Normal; // 0x20
		::System::Single Dist; // 0x2C
		::UnityEngine::Vector3 forward; // 0x30
		::UnityEngine::Vector3 right; // 0x3C
		::System::Int32 SegmentIndex; // 0x48
		::UnityEngine::Vector3 Position; // 0x4C
		::System::Int32 ControlPointIndex; // 0x58
		::UnityEngine::Vector3 up; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT__CTOR_OFFSET))(this);
		}

		::XftWeapon::SplineControlPoint* get_NextControlPoint()
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTCONTROLPOINT_OFFSET))(this);
		}

		::XftWeapon::SplineControlPoint* get_PreviousControlPoint()
		{
			return ((::XftWeapon::SplineControlPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSCONTROLPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_NextPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PreviousPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_NextNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_NEXTNORMAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PreviousNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_PREVIOUSNORMAL_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GET_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetNext2Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GETNEXT2POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetNext2Normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_GETNEXT2NORMAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 Interpolate(::System::Single localF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_INTERPOLATE_OFFSET))(this, localF);
		}

		::UnityEngine::Vector3 InterpolateNormal(::System::Single localF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_INTERPOLATENORMAL_OFFSET))(this, localF);
		}

		::System::Void Init(::XftWeapon::Spline* owner)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::Spline*))((::PBYTE)hIl2Cpp + XFTWEAPON_SPLINECONTROLPOINT_INIT_OFFSET))(this, owner);
		}
	};
}
