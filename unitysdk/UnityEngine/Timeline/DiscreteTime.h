#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x387B810)
#define UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1B239620)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x387B840)
#define UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BFB070)
#define UNITYENGINE_TIMELINE_DISCRETETIME_FLOATTODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1B239750)
#define UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x1B2399D0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14A8F0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET UNITYSDK_OFFSET(0x1B239EC0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GETTICK_OFFSET UNITYSDK_OFFSET(0x5B60)
#define UNITYENGINE_TIMELINE_DISCRETETIME_GET_TICKVALUE_OFFSET UNITYSDK_OFFSET(0x1B239540)
#define UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET UNITYSDK_OFFSET(0x1B239880)
#define UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET UNITYSDK_OFFSET(0x1B239D30)
#define UNITYENGINE_TIMELINE_DISCRETETIME_MIN_OFFSET UNITYSDK_OFFSET(0x1B239D20)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKAFTER_OFFSET UNITYSDK_OFFSET(0x387B800)
#define UNITYENGINE_TIMELINE_DISCRETETIME_ONETICKBEFORE_OFFSET UNITYSDK_OFFSET(0x387B7F0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B239CD0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B239C50)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B239A90)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B239AE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B236BE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1B239AF0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1B239C40)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1B236C80)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B239CC0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B239C90)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B239BA0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B239C60)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B239CB0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B239CA0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B239CE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_1_OFFSET UNITYSDK_OFFSET(0x1B239DE0)
#define UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_OFFSET UNITYSDK_OFFSET(0x1B239D40)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1B239A40)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1B239A50)
#define UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14A900)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B239F50)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC630)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x387B540)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x387B5E0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x387B6A0)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x387B750)
#define UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DiscreteTime_TypeDefinitionIndex = 35878;

	struct alignas(8) DiscreteTime
	{
		static ::UnityEngine::Timeline::DiscreteTime* StaticGet_kMaxTime()
		{
			return (::UnityEngine::Timeline::DiscreteTime*)Il2CppClass::FromTypeDefinitionIndex(DiscreteTime_TypeDefinitionIndex)->GetStaticField(0x13B10);
		}
		// static const ::System::Double k_Tick; // 0x0
		::System::Int64 m_DiscreteTime; // 0x10

		::System::Void _ctor(::UnityEngine::Timeline::DiscreteTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME__CTOR_5_OFFSET))(this, a1, a2);
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

		static ::UnityEngine::Timeline::DiscreteTime FromTicks(::System::Int64 a1)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_FROMTICKS_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Timeline::DiscreteTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Int64 DoubleToDiscreteTime(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_DOUBLETODISCRETETIME_OFFSET))(a1);
		}

		static ::System::Int64 FloatToDiscreteTime(::System::Single a1)
		{
			return ((::System::Int64(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_FLOATTODISCRETETIME_OFFSET))(a1);
		}

		static ::System::Int64 IntToDiscreteTime(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_INTTODISCRETETIME_OFFSET))(a1);
		}

		static ::System::Double ToDouble(::System::Int64 a1)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TODOUBLE_OFFSET))(a1);
		}

		static ::System::Single ToFloat(::System::Int64 a1)
		{
			return ((::System::Single(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TOFLOAT_OFFSET))(a1);
		}

		static ::System::Double op_Explicit(::UnityEngine::Timeline::DiscreteTime a1)
		{
			return ((::System::Double(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_1(::UnityEngine::Timeline::DiscreteTime a1)
		{
			return ((::System::Single(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Int64 op_Explicit_2(::UnityEngine::Timeline::DiscreteTime a1)
		{
			return ((::System::Int64(*)(::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_2_OFFSET))(a1);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_3(::System::Double a1)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_3_OFFSET))(a1);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_4(::System::Single a1)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_4_OFFSET))(a1);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Implicit(::System::Int32 a1)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Explicit_5(::System::Int64 a1)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EXPLICIT_5_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Addition(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Timeline::DiscreteTime op_Subtraction(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETHASHCODE_OFFSET))(this);
		}

		static ::UnityEngine::Timeline::DiscreteTime Min(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_MIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime a1, ::UnityEngine::Timeline::DiscreteTime a2)
		{
			return ((::UnityEngine::Timeline::DiscreteTime(*)(::UnityEngine::Timeline::DiscreteTime, ::UnityEngine::Timeline::DiscreteTime))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_MAX_OFFSET))(a1, a2);
		}

		static ::System::Double SnapToNearestTick(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_OFFSET))(a1);
		}

		static ::System::Single SnapToNearestTick_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_SNAPTONEARESTTICK_1_OFFSET))(a1);
		}

		static ::System::Int64 GetNearestTick(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DISCRETETIME_GETNEARESTTICK_OFFSET))(a1);
		}
	};
}
