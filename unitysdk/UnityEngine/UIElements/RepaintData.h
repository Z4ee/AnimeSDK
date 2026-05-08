#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0x197B8860)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x197B8890)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_REPAINTEVENT_OFFSET UNITYSDK_OFFSET(0x197B88A0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET UNITYSDK_OFFSET(0x197B88B0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x197B88C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RepaintData_TypeDefinitionIndex = 24956;

	class RepaintData : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 _currentOffset_k__BackingField; // 0x10
		::UnityEngine::Rect _currentWorldClip_k__BackingField; // 0x50
		::UnityEngine::Event* _repaintEvent_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_currentOffset()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET))(this);
		}

		::UnityEngine::Rect get_currentWorldClip()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTWORLDCLIP_OFFSET))(this);
		}

		::UnityEngine::Event* get_repaintEvent()
		{
			return ((::UnityEngine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_REPAINTEVENT_OFFSET))(this);
		}

		::System::Void set_repaintEvent(::UnityEngine::Event* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET))(this, value);
		}
	};
}
