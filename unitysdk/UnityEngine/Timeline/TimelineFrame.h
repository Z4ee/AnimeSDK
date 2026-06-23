#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Timeline/TimelineFrame___c__DisplayClass43_0.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableBehaviour; }
namespace UnityEngine::Timeline { class Frame; }
namespace UnityEngine::Timeline { class PropertyConstant; }
namespace UnityEngine::Timeline { class PropertyCurve; }
namespace UnityEngine::Timeline::BaseFrame { class TimelineFrameBehaviour; }

#define UNITYENGINE_TIMELINE_TIMELINEFRAME_AFTERCREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1DE61DC0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DE61000)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1DE63620)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETFRAMETYPES_OFFSET UNITYSDK_OFFSET(0x1DE610F0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETFRAME_OFFSET UNITYSDK_OFFSET(0x1DE62070)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYINFOS_1_OFFSET UNITYSDK_OFFSET(0x1DE62930)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYINFOS_OFFSET UNITYSDK_OFFSET(0x1DE62230)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1DE65690)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DE65150)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GETREALPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DE63AC0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_EDITORFRAMETYPES_OFFSET UNITYSDK_OFFSET(0x1DE60CD0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1DE60210)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_FRAMETYPES_OFFSET UNITYSDK_OFFSET(0x1DE601F0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_ISFRAMETRACK_OFFSET UNITYSDK_OFFSET(0x1DE60200)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_TRACKNAME_OFFSET UNITYSDK_OFFSET(0x1DE60AD0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_HASH_OFFSET UNITYSDK_OFFSET(0x1DE60A60)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_INITFRAMEINFOS_OFFSET UNITYSDK_OFFSET(0x1DE61DB0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_INITPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DE63AB0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DE65720)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_RECORDERALTERPROPERTYINFOS_OFFSET UNITYSDK_OFFSET(0x1DE63FC0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DE64B40)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_REFRESHFRAMESANDPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1DE60270)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x1DE61510)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1DE65480)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_SETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1DE64B50)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_SETFRAMEINFOPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DE63BE0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_SETINITVALUE_OFFSET UNITYSDK_OFFSET(0x1DE65260)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_SETPROPERTYSHOWTIME_OFFSET UNITYSDK_OFFSET(0x1DE62130)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_SETVOLUMETYPE_OFFSET UNITYSDK_OFFSET(0x1DE61F80)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME_UNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DE64B30)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE65AF0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE65810)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME__RECORDERALTERPROPERTYINFOS_G__RECORDERINFOS_43_0_OFFSET UNITYSDK_OFFSET(0x1DE64140)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineFrame_TypeDefinitionIndex = 32295;

	class TimelineFrame : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Action_4<::UnityEngine::AnimationClip*, ::System::Single, ::System::String*, ::System::Single>** StaticGet_RecordKFrame()
		{
			return (::System::Action_4<::UnityEngine::AnimationClip*, ::System::Single, ::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame_TypeDefinitionIndex)->GetStaticField(0x267E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>** StaticGet_cachedFrameFields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame_TypeDefinitionIndex)->GetStaticField(0x267E8);
		}
		// static const ::System::Single mixDelta; // 0x0
		// static const ::System::String* RedundantPrefix; // 0x0
		::System::Boolean dontResetWhenDestroy; // 0xB0
		::System::Boolean dontResetActive; // 0xB1
		::System::Boolean isMultiType; // 0xB2
		::System::Int32 frameTypeIndex; // 0xB4
		::System::Collections::Generic::List_1<::System::Int32>* frameTypeIndexList; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyConstant*>* _properties; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>* frameInfos; // 0xC8
		::UnityEngine::AnimationClip* clipFrames; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* initInfos; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* AlterPropertyNames; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::Timeline::Frame*>* frames; // 0xE8
		::System::Double curTime; // 0xF0
		::UnityEngine::Playables::PlayableBehaviour* editorFrameTmplate; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableBehaviour*>* editorFrameTmplates; // 0x100
		::UnityEngine::Object* referenceObj; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>* _fieldInfoDic; // 0x110
		::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::BaseFrame::TimelineFrameBehaviour*> playable; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::Type*>* get_frameTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_FRAMETYPES_OFFSET))(this);
		}

		::System::Boolean get_isFrameTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_ISFRAMETRACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::Frame*>* get_Frames()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::Frame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_FRAMES_OFFSET))(this);
		}

		::System::Int32 Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_HASH_OFFSET))(this);
		}

		::System::String* get_trackName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_TRACKNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Type*>* get_EditorFrameTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GET_EDITORFRAMETYPES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_CLEAR_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetFrameTypes()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETFRAMETYPES_OFFSET))(this);
		}

		::System::Void RefreshValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_REFRESHVALUE_OFFSET))(this);
		}

		::System::Void InitFrameInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_INITFRAMEINFOS_OFFSET))(this);
		}

		::System::Void AfterCreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_AFTERCREATEPLAYABLEGRAPH_OFFSET))(this, graph, go);
		}

		::System::Boolean SetVolumeType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_SETVOLUMETYPE_OFFSET))(this, type);
		}

		::UnityEngine::Timeline::Frame* GetFrame(::System::Single time)
		{
			return ((::UnityEngine::Timeline::Frame*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETFRAME_OFFSET))(this, time);
		}

		::System::Void SetPropertyShowTime(::System::Double curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_SETPROPERTYSHOWTIME_OFFSET))(this, curTime);
		}

		::System::Void RefreshFramesAndPropertyNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_REFRESHFRAMESANDPROPERTYNAMES_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void InitProperties(::System::Int32 typeIndex, ::UnityEngine::Playables::PlayableBehaviour* frameInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableBehaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_INITPROPERTIES_OFFSET))(this, typeIndex, frameInfos);
		}

		static ::System::Void GetPropertyInfos(::System::Single frameTime, ::System::Boolean isMulti, ::UnityEngine::Playables::PlayableBehaviour* frameInfo, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>* frameInfos, ::System::Boolean dontResetWhenDestroy)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean, ::UnityEngine::Playables::PlayableBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYINFOS_OFFSET))(frameTime, isMulti, frameInfo, frameInfos, dontResetWhenDestroy);
		}

		static ::System::Void GetPropertyInfos_1(::System::Single frameTime, ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableBehaviour*>* frameInfoBehaviours, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>* frameInfos, ::System::Boolean dontResetWhenDestroy)
		{
			return ((::System::Void(*)(::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableBehaviour*>*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::PropertyCurve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYINFOS_1_OFFSET))(frameTime, frameInfoBehaviours, frameInfos, dontResetWhenDestroy);
		}

		static ::System::Void SetFrameInfoProperty(::UnityEngine::Playables::PlayableBehaviour* frameInfo, ::System::Reflection::FieldInfo* fieldInfo, ::UnityEngine::Timeline::KFrameFieldType fieldType, ::System::Single fieldValue)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableBehaviour*, ::System::Reflection::FieldInfo*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_SETFRAMEINFOPROPERTY_OFFSET))(frameInfo, fieldInfo, fieldType, fieldValue);
		}

		::System::Void RecorderAlterPropertyInfos(::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_RECORDERALTERPROPERTYINFOS_OFFSET))(this, curTime);
		}

		::System::Boolean UnKFrameProperty(::System::Type* editorType, ::System::String* name, ::System::Single propertyValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_UNKFRAMEPROPERTY_OFFSET))(this, editorType, name, propertyValue);
		}

		::System::Void RecorderUnKFrameProperty(::System::Type* editorType, ::System::String* name, ::UnityEngine::Timeline::KFrameFieldType frameFieldType, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET))(this, editorType, name, frameFieldType, value);
		}

		::System::Void SetCurveValue(::System::Single propertyValue, ::System::Reflection::FieldInfo* fieldInfo, ::System::Single floatCurTime, ::UnityEngine::Timeline::KFrameFieldType frameFieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Reflection::FieldInfo*, ::System::Single, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_SETCURVEVALUE_OFFSET))(this, propertyValue, fieldInfo, floatCurTime, frameFieldType);
		}

		::System::Void SetInitValue(::System::Type* editorType, ::System::Single propertyValue, ::System::Reflection::FieldInfo* fieldInfo, ::System::Single floatCurTime, ::UnityEngine::Timeline::KFrameFieldType frameFieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Single, ::System::Reflection::FieldInfo*, ::System::Single, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_SETINITVALUE_OFFSET))(this, editorType, propertyValue, fieldInfo, floatCurTime, frameFieldType);
		}

		::System::Void RevertAttr(::System::Type* editorType, ::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType frameFieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_REVERTATTR_OFFSET))(this, editorType, propertyName, frameFieldType);
		}

		static ::System::String* GetPropertyName(::System::Type* editorFrameType, ::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType frameFieldType, ::System::Boolean isMultiType)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYNAME_OFFSET))(editorFrameType, propertyName, frameFieldType, isMultiType);
		}

		static ::System::String* GetPropertyName_1(::System::String* editorFrameTypeName, ::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType frameFieldType)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETPROPERTYNAME_1_OFFSET))(editorFrameTypeName, propertyName, frameFieldType);
		}

		static ::System::String* GetRealPropertyName(::System::String* propertyName, ::System::String* editorTypeName, ::UnityEngine::Timeline::KFrameFieldType frameFieldType)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_GETREALPROPERTYNAME_OFFSET))(propertyName, editorTypeName, frameFieldType);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME_ONDESTROY_OFFSET))(this);
		}

		::System::Void _RecorderAlterPropertyInfos_g__RecorderInfos_43_0(::UnityEngine::Playables::PlayableBehaviour* _editorFrameTmplate, ::UnityEngine::Timeline::TimelineFrame___c__DisplayClass43_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableBehaviour*, ::UnityEngine::Timeline::TimelineFrame___c__DisplayClass43_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME__RECORDERALTERPROPERTYINFOS_G__RECORDERINFOS_43_0_OFFSET))(this, _editorFrameTmplate, a2);
		}
	};
}
