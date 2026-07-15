#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"

#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_GET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0x1A3BBDC0)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1A3BBDE0)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET UNITYSDK_OFFSET(0x1A3BBDD0)
#define UNITYENGINE_TIMELINE_RUNTIMEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B7420)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeElement_TypeDefinitionIndex = 36668;

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

		::System::Void set_intervalBit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_SET_INTERVALBIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMEELEMENT_RESET_OFFSET))(this);
		}
	};
}
