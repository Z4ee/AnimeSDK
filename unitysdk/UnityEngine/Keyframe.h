#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/WeightedMode.h"

#define UNITYENGINE_KEYFRAME_GET_INTANGENT_OFFSET UNITYSDK_OFFSET(0xA4BEB0)
#define UNITYENGINE_KEYFRAME_GET_INWEIGHT_OFFSET UNITYSDK_OFFSET(0x31B6600)
#define UNITYENGINE_KEYFRAME_GET_OUTTANGENT_OFFSET UNITYSDK_OFFSET(0xA4C4A0)
#define UNITYENGINE_KEYFRAME_GET_OUTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA4B370)
#define UNITYENGINE_KEYFRAME_GET_TANGENTMODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x7A9010)
#define UNITYENGINE_KEYFRAME_GET_TANGENTMODE_OFFSET UNITYSDK_OFFSET(0x7A9010)
#define UNITYENGINE_KEYFRAME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x167F50)
#define UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7A80F0)
#define UNITYENGINE_KEYFRAME_GET_WEIGHTEDMODE_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET UNITYSDK_OFFSET(0x38DAF30)
#define UNITYENGINE_KEYFRAME_SET_INWEIGHT_OFFSET UNITYSDK_OFFSET(0x3ACAE90)
#define UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET UNITYSDK_OFFSET(0x38DAF40)
#define UNITYENGINE_KEYFRAME_SET_OUTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA4B380)
#define UNITYENGINE_KEYFRAME_SET_TANGENTMODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x667A60)
#define UNITYENGINE_KEYFRAME_SET_TANGENTMODE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define UNITYENGINE_KEYFRAME_SET_TIME_OFFSET UNITYSDK_OFFSET(0x167DB0)
#define UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x38DAE60)
#define UNITYENGINE_KEYFRAME_SET_WEIGHTEDMODE_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define UNITYENGINE_KEYFRAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ACAE60)
#define UNITYENGINE_KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x3ACAE40)

namespace UnityEngine
{
	inline static constexpr unsigned int Keyframe_TypeDefinitionIndex = 4015;

	struct alignas(4) Keyframe
	{
		::System::Single m_Time; // 0x10
		::System::Single m_Value; // 0x14
		::System::Single m_InTangent; // 0x18
		::System::Single m_OutTangent; // 0x1C
		::System::Int32 m_WeightedMode; // 0x20
		::System::Single m_InWeight; // 0x24
		::System::Single m_OutWeight; // 0x28

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TIME_OFFSET))(this, a1);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Single get_inTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_INTANGENT_OFFSET))(this);
		}

		::System::Void set_inTangent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_INTANGENT_OFFSET))(this, a1);
		}

		::System::Single get_outTangent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_OUTTANGENT_OFFSET))(this);
		}

		::System::Void set_outTangent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_OUTTANGENT_OFFSET))(this, a1);
		}

		::System::Single get_inWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_INWEIGHT_OFFSET))(this);
		}

		::System::Void set_inWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_INWEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_outWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_OUTWEIGHT_OFFSET))(this);
		}

		::System::Void set_outWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_OUTWEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::WeightedMode get_weightedMode()
		{
			return ((::UnityEngine::WeightedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_WEIGHTEDMODE_OFFSET))(this);
		}

		::System::Void set_weightedMode(::UnityEngine::WeightedMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WeightedMode))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_WEIGHTEDMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_tangentMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TANGENTMODE_OFFSET))(this);
		}

		::System::Void set_tangentMode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TANGENTMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_tangentModeInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_GET_TANGENTMODEINTERNAL_OFFSET))(this);
		}

		::System::Void set_tangentModeInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_KEYFRAME_SET_TANGENTMODEINTERNAL_OFFSET))(this, a1);
		}
	};
}
