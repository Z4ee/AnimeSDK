#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeElement.h"

#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1BF66C30)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x1BF66B80)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x1BF66B70)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1BF66BC0)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF66C80)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5AC40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int InfiniteRuntimeClip_TypeDefinitionIndex = 37520;

	class InfiniteRuntimeClip : public ::UnityEngine::Timeline::RuntimeElement
	{
	public:
		static ::System::Int64* StaticGet_kIntervalEnd()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(InfiniteRuntimeClip_TypeDefinitionIndex)->GetStaticField(0x10210);
		}
		::UnityEngine::Playables::Playable m_Playable; // 0x18

		::System::Void _ctor(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP__CCTOR_OFFSET))();
		}

		::System::Int64 get_intervalStart()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET))(this);
		}

		::System::Int64 get_intervalEnd()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET))(this);
		}

		::System::Void set_enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET))(this, a1);
		}

		::System::Void EvaluateAt(::System::Double a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET))(this, a1, a2);
		}
	};
}
