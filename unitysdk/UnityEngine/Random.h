#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Random_State.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RANDOM_COLORHSV_1_OFFSET UNITYSDK_OFFSET(0x1B2BB430)
#define UNITYENGINE_RANDOM_COLORHSV_2_OFFSET UNITYSDK_OFFSET(0x1B2BB6C0)
#define UNITYENGINE_RANDOM_COLORHSV_3_OFFSET UNITYSDK_OFFSET(0x1B2BB960)
#define UNITYENGINE_RANDOM_COLORHSV_4_OFFSET UNITYSDK_OFFSET(0x1B2BB160)
#define UNITYENGINE_RANDOM_COLORHSV_OFFSET UNITYSDK_OFFSET(0x1B2BAF00)
#define UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x1B2BADD0)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x1B2BADE0)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BADC0)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1B2BAD80)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAE50)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1B2BAE10)
#define UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAED0)
#define UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_OFFSET UNITYSDK_OFFSET(0x1B2BAEA0)
#define UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAE90)
#define UNITYENGINE_RANDOM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B2BAE60)
#define UNITYENGINE_RANDOM_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1B2BACB0)
#define UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAD10)
#define UNITYENGINE_RANDOM_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B2BACE0)
#define UNITYENGINE_RANDOM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B2BAD70)
#define UNITYENGINE_RANDOM_INITSTATE_OFFSET UNITYSDK_OFFSET(0x1B2BACD0)
#define UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET UNITYSDK_OFFSET(0x1B2BAD60)
#define UNITYENGINE_RANDOM_RANDOMRANGE_1_OFFSET UNITYSDK_OFFSET(0x1B2BAEF0)
#define UNITYENGINE_RANDOM_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x1B2BAEE0)
#define UNITYENGINE_RANDOM_RANGE_1_OFFSET UNITYSDK_OFFSET(0x1B2BAD50)
#define UNITYENGINE_RANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0x1B2BAD40)
#define UNITYENGINE_RANDOM_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1B2BACC0)
#define UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAD30)
#define UNITYENGINE_RANDOM_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1B2BAD20)
#define UNITYENGINE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BBC20)

namespace UnityEngine
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 4232;

	class Random : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_seed()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_SEED_OFFSET))();
		}

		static ::System::Void set_seed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_SEED_OFFSET))(a1);
		}

		static ::System::Void InitState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_INITSTATE_OFFSET))(a1);
		}

		static ::UnityEngine::Random_State get_state()
		{
			return ((::UnityEngine::Random_State(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_OFFSET))();
		}

		static ::System::Void set_state(::UnityEngine::Random_State a1)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_OFFSET))(a1);
		}

		static ::System::Single Range(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Range_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 RandomRangeInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET))(a1, a2);
		}

		static ::System::Single get_value()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_VALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_insideUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET))();
		}

		static ::System::Void GetRandomUnitCircle(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 get_insideUnitCircle()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_onUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET))();
		}

		static ::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_OFFSET))();
		}

		static ::UnityEngine::Quaternion get_rotationUniform()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_OFFSET))();
		}

		static ::System::Single RandomRange(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGE_OFFSET))(a1, a2);
		}

		static ::System::Int32 RandomRange_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color ColorHSV()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_OFFSET))();
		}

		static ::UnityEngine::Color ColorHSV_1(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color ColorHSV_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Color ColorHSV_3(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Color ColorHSV_4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void get_state_Injected(::UnityEngine::Random_State& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_state_Injected(::UnityEngine::Random_State& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_insideUnitSphere_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_onUnitSphere_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_rotationUniform_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_INJECTED_OFFSET))(a1);
		}
	};
}
