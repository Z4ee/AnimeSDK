#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9C3E70)
#define UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1C171A20)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C3EE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x396BC0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_FLOATTODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1C171B90)
#define UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x1C171EB0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x815700)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET UNITYSDK_OFFSET(0x1C172570)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETTICK_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GET_TICKVALUE_OFFSET UNITYSDK_OFFSET(0x1C171910)
#define UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1C171C80)
#define UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET UNITYSDK_OFFSET(0x1C172310)
#define UNITYENGINE_TIMELINE_DISCRETETIME_MIN_OFFSET UNITYSDK_OFFSET(0x1C172300)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKAFTER_OFFSET UNITYSDK_OFFSET(0x9C3E60)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKBEFORE_OFFSET UNITYSDK_OFFSET(0x9C3E50)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C1722B0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C172200)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C172070)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1C172120)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1C172130)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1C172160)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1C1721F0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1C172010)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C1722A0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1C172270)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C172190)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C172210)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C172290)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1C172280)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C1722C0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_1_OFFSET UNITYSDK_OFFSET(0x1C172410)
#define UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_OFFSET UNITYSDK_OFFSET(0x1C172320)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C171FA0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1C171FB0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8959D0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C172650)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9C3DC0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9C3DD0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9C3DE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x9C3E40)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DiscreteTime_TypeDefinitionIndex = 30808;

	struct alignas(8) DiscreteTime
	{
		static ::UnityEngine::Timeline::DiscreteTime* StaticGet_kMaxTime()
		{
			return (::UnityEngine::Timeline::DiscreteTime*)Il2CppClass::FromTypeDefinitionIndex(DiscreteTime_TypeDefinitionIndex)->GetStaticField(0x7AE0);
		}
		// static const ::System::Double k_Tick; // 0x0
		::System::Int64 m_DiscreteTime; // 0x10

		::System::Void _ctor(::UnityEngine::Timeline::DiscreteTime time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_OFFSET))(this, time);
		}

		::System::Void _ctor_1(::System::Int64 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_1_OFFSET))(this, time);
		}

		::System::Void _ctor_2(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_2_OFFSET))(this, time);
		}

		::System::Void _ctor_3(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_3_OFFSET))(this, time);
		}

		::System::Void _ctor_4(::System::Int32 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_4_OFFSET))(this, time);
		}

		::System::Void _ctor_5(::System::Int32 frame, ::System::Double fps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_5_OFFSET))(this, frame, fps);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CCTOR_OFFSET))();
		}

		static ::System::Double get_tickValue()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GET_TICKVALUE_OFFSET))();
		}

		::UnityEngine::Timeline::DiscreteTime OneTickBefore()
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKBEFORE_OFFSET))(this);
		}

		::UnityEngine::Timeline::DiscreteTime OneTickAfter()
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKAFTER_OFFSET))(this);
		}

		::System::Int64 GetTick()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETTICK_OFFSET))(this);
		}

		static ::UnityEngine::Timeline::DiscreteTime FromTicks(::System::Int64 ticks)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET))(ticks);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET))(this, obj);
		}

		::System::Boolean Equals(::UnityEngine::Timeline::DiscreteTime other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Int64 DoubleToDiscreteTime(::System::Double time)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET))(time);
		}

		static ::System::Int64 FloatToDiscreteTime(::System::Single time)
		{
			return ((::System::Int64(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_FLOATTODISCRETETIME_OFFSET))(time);
		}

		static ::System::Int64 IntToDiscreteTime(::System::Int32 time)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET))(time);
		}

		static ::System::Double ToDouble(::System::Int64 time)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET))(time);
		}

		static ::System::Single ToFloat(::System::Int64 time)
		{
			return ((::System::Single(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TOFLOAT_OFFSET))(time);
		}

		static ::System::Double op_Explicit(::UnityEngine::Timeline::DiscreteTime b)
		{
			return ((::System::Double(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET))(b);
		}

		static ::System::Single op_Explicit_1(::UnityEngine::Timeline::DiscreteTime b)
		{
			return ((::System::Single(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_1_OFFSET))(b);
		}

		static ::System::Int64 op_Explicit_2(::UnityEngine::Timeline::DiscreteTime b)
		{
			return ((::System::Int64(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_2_OFFSET))(b);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_3(::System::Double time)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_3_OFFSET))(time);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_4(::System::Single time)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_4_OFFSET))(time);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Implicit(::System::Int32 time)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET))(time);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_5(::System::Int64 time)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_5_OFFSET))(time);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Addition(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Subtraction(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET))(this);
		}

		static ::UnityEngine::Timeline::DiscreteTime Min(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET))(lhs, rhs);
		}

		static ::System::Double SnapToNearestTick(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_OFFSET))(time);
		}

		static ::System::Single SnapToNearestTick_1(::System::Single time)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_1_OFFSET))(time);
		}

		static ::System::Int64 GetNearestTick(::System::Double time)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET))(time);
		}
	};
}
