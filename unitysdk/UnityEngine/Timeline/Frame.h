#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_FRAME_ADDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1FC17A80)
#define UNITYENGINE_TIMELINE_FRAME_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1FC17A40)
#define UNITYENGINE_TIMELINE_FRAME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1FC17A20)
#define UNITYENGINE_TIMELINE_FRAME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC17A70)
#define UNITYENGINE_TIMELINE_FRAME_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1FC17A50)
#define UNITYENGINE_TIMELINE_FRAME_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1FC17A30)
#define UNITYENGINE_TIMELINE_FRAME_UNITYENGINE_TIMELINE_IFRAME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC17A60)
#define UNITYENGINE_TIMELINE_FRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC17B00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Frame_TypeDefinitionIndex = 32921;

	class Frame : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* propertyNames; // 0x10
		::UnityEngine::Timeline::TrackAsset* _parent_k__BackingField; // 0x18
		::System::Single _time_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME__CTOR_OFFSET))(this);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_SET_TIME_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::TrackAsset* get_parent()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Timeline::TrackAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_SET_PARENT_OFFSET))(this, value);
		}

		::System::Void UnityEngine_Timeline_IFrame_Initialize(::UnityEngine::Timeline::TrackAsset* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_UNITYENGINE_TIMELINE_IFRAME_INITIALIZE_OFFSET))(this, parent);
		}

		::System::Void Initialize(::UnityEngine::Timeline::TrackAsset* parent, ::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_INITIALIZE_OFFSET))(this, parent, curTime);
		}

		::System::Void AddPropertyName(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_FRAME_ADDPROPERTYNAME_OFFSET))(this, propertyName);
		}
	};
}
