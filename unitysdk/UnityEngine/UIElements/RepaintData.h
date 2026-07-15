#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1BA424F0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET UNITYSDK_OFFSET(0x1BA42520)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RepaintData_TypeDefinitionIndex = 6146;

	class RepaintData : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 _currentOffset_k__BackingField; // 0x10
		::UnityEngine::Event* _repaintEvent_k__BackingField; // 0x50

		::UnityEngine::Matrix4x4 get_currentOffset()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET))(this);
		}

		::System::Void set_repaintEvent(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET))(this, a1);
		}
	};
}
