#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"

#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0x189B0780)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x189B07A0)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0x189B0790)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x189AC910)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeElement_TypeDefinitionIndex = 29866;

	class RuntimeElement : public ::System::Object
	{
	public:
		::System::Int32 _intervalBit_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_intervalBit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALBIT_OFFSET))(this);
		}

		::System::Void set_intervalBit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_RESET_OFFSET))(this);
		}
	};
}
