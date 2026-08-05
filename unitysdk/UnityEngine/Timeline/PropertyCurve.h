#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Timeline { class TimelineFrame; }

#define UNITYENGINE_TIMELINE_PROPERTYCURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1F1146D0)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_DELETEKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1F114260)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_GETKEYTIMES_OFFSET UNITYSDK_OFFSET(0x1F114720)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_GETKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1F1140C0)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_GETLASTKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1F114150)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_HASKEYATTIME_OFFSET UNITYSDK_OFFSET(0x1F1143B0)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_ISFIRSTKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1F114210)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1F1144F0)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F113F70)
#define UNITYENGINE_TIMELINE_PROPERTYCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F113F10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PropertyCurve_TypeDefinitionIndex = 32925;

	class PropertyCurve : public ::System::Object
	{
	public:
		// static const ::System::Single nullValue; // 0x0
		// static const ::System::Single timeDelta; // 0x0
		::UnityEngine::Timeline::KFrameFieldType fieldType; // 0x10
		::System::String* PropertyName; // 0x18
		::UnityEngine::AnimationCurve* propertyValueCurve; // 0x20

		::System::Void _ctor(::System::String* PropertyName, ::UnityEngine::Timeline::TimelineFrame* timelineFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TimelineFrame*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE__CTOR_OFFSET))(this, PropertyName, timelineFrame);
		}

		::System::Void _ctor_1(::System::String* propertyName, ::UnityEngine::Timeline::TimelineFrame* timelineFrame, ::System::Type* referenceType, ::UnityEngine::AnimationCurve* animationCurve, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TimelineFrame*, ::System::Type*, ::UnityEngine::AnimationCurve*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE__CTOR_1_OFFSET))(this, propertyName, timelineFrame, referenceType, animationCurve, fieldInfo);
		}

		::System::Single GetKeyValue(::System::Single keyTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_GETKEYVALUE_OFFSET))(this, keyTime);
		}

		::System::Single GetLastKeyValue(::System::Single keyTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_GETLASTKEYVALUE_OFFSET))(this, keyTime);
		}

		::System::Boolean IsFirstKeyFrame(::System::Single keyTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_ISFIRSTKEYFRAME_OFFSET))(this, keyTime);
		}

		::System::Void DeleteKeyValue(::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_DELETEKEYVALUE_OFFSET))(this, curTime);
		}

		::System::Boolean HasKeyAtTime(::System::Single curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_HASKEYATTIME_OFFSET))(this, curTime);
		}

		::System::Void RemoveKey(::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_REMOVEKEY_OFFSET))(this, curTime);
		}

		::System::Void AddKey(::System::Single curTime, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_ADDKEY_OFFSET))(this, curTime, value);
		}

		::System::Collections::Generic::List_1<::System::Single>* GetKeyTimes()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCURVE_GETKEYTIMES_OFFSET))(this);
		}
	};
}
