#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/WeightedMode.h"

#define UNITYENGINE_KEYFRAME_GET_INTANGENT_OFFSET UNITYSDK_OFFSET(0xCCA0)
#define UNITYENGINE_KEYFRAME_GET_INWEIGHT_OFFSET UNITYSDK_OFFSET(0x15D3500)
#define UNITYENGINE_KEYFRAME_GET_OUTTANGENT_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define UNITYENGINE_KEYFRAME_GET_OUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1639980)
#define UNITYENGINE_KEYFRAME_GET_TANGENTMODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x7BBA0)
#define UNITYENGINE_KEYFRAME_GET_TANGENTMODE_OFFSET UNITYSDK_OFFSET(0x7BBA0)
#define UNITYENGINE_KEYFRAME_GET_TIME_OFFSET UNITYSDK_OFFSET(0xCC60)
#define UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_KEYFRAME_GET_WEIGHTEDMODE_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define UNITYENGINE_KEYFRAME_SET_INWEIGHT_OFFSET UNITYSDK_OFFSET(0x2111E30)
#define UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET UNITYSDK_OFFSET(0xCCD0)
#define UNITYENGINE_KEYFRAME_SET_OUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x6E270)
#define UNITYENGINE_KEYFRAME_SET_TANGENTMODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_KEYFRAME_SET_TANGENTMODE_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_KEYFRAME_SET_TIME_OFFSET UNITYSDK_OFFSET(0xCC70)
#define UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xCC90)
#define UNITYENGINE_KEYFRAME_SET_WEIGHTEDMODE_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_KEYFRAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2111E00)
#define UNITYENGINE_KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x2111DE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Keyframe_TypeDefinitionIndex = 3834;

	struct alignas(4) Keyframe
	{
		::System::Single m_Time; // 0x10
		::System::Single m_Value; // 0x14
		::System::Single m_InTangent; // 0x18
		::System::Single m_OutTangent; // 0x1C
		::System::Int32 m_WeightedMode; // 0x20
		::System::Single m_InWeight; // 0x24
		::System::Single m_OutWeight; // 0x28

		::System::Void _ctor(::System::Single time, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME__CTOR_OFFSET))(this, time, value);
		}

		::System::Void _ctor_1(::System::Single time, ::System::Single value, ::System::Single inTangent, ::System::Single outTangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME__CTOR_1_OFFSET))(this, time, value, inTangent, outTangent);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET))(this, value);
		}

		::System::Single get_inTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_INTANGENT_OFFSET))(this);
		}

		::System::Void set_inTangent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET))(this, value);
		}

		::System::Single get_outTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_OUTTANGENT_OFFSET))(this);
		}

		::System::Void set_outTangent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET))(this, value);
		}

		::System::Single get_inWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_INWEIGHT_OFFSET))(this);
		}

		::System::Void set_inWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_INWEIGHT_OFFSET))(this, value);
		}

		::System::Single get_outWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_OUTWEIGHT_OFFSET))(this);
		}

		::System::Void set_outWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_OUTWEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::WeightedMode get_weightedMode()
		{
			return ((::UnityEngine::WeightedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_WEIGHTEDMODE_OFFSET))(this);
		}

		::System::Void set_weightedMode(::UnityEngine::WeightedMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WeightedMode))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_WEIGHTEDMODE_OFFSET))(this, value);
		}

		::System::Int32 get_tangentMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TANGENTMODE_OFFSET))(this);
		}

		::System::Void set_tangentMode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TANGENTMODE_OFFSET))(this, value);
		}

		::System::Int32 get_tangentModeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TANGENTMODEINTERNAL_OFFSET))(this);
		}

		::System::Void set_tangentModeInternal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TANGENTMODEINTERNAL_OFFSET))(this, value);
		}
	};
}
