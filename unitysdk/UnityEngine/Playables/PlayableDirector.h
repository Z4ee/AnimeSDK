#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableAsset; }

#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET UNITYSDK_OFFSET(0x1F0100F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET UNITYSDK_OFFSET(0x1F010030)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET UNITYSDK_OFFSET(0x1F0101B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARALLGENERICBINDINGSEXCEPT_OFFSET UNITYSDK_OFFSET(0x1F00FFE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1F00FFD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F00FF50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1F00FF30)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET UNITYSDK_OFFSET(0x1F00FC80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATENEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1F00FC90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F00FEE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1F00FFC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F010020)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_OFFSET UNITYSDK_OFFSET(0x1F00FC00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F00FC50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1F00FAE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F00FFB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1F00FF90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1F00FB20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1F00FED0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1F00FB10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0x1F00FEC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1F00FB30)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1F00FBC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F00FC40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F00FAD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F00FE80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1F00FEA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1F010010)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1F00FB90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1F00FE60)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F00FF00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1F00FDA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1F00FE40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0x1F00FCA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET UNITYSDK_OFFSET(0x1F010000)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET UNITYSDK_OFFSET(0x1F00FFF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0x1F00FF20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET UNITYSDK_OFFSET(0x1F010150)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET UNITYSDK_OFFSET(0x1F010090)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET UNITYSDK_OFFSET(0x1F010210)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESETFRAMETIMING_OFFSET UNITYSDK_OFFSET(0x1F010270)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1F00FF10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPAUSE_OFFSET UNITYSDK_OFFSET(0x1F0102A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPLAY_OFFSET UNITYSDK_OFFSET(0x1F010280)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORSTOP_OFFSET UNITYSDK_OFFSET(0x1F0102C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1F00FE50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1F00FBB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F00FC70)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F00FF80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1F00FF60)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1F00FB00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1F00FAF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0x1F00FEB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1F00FBA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F00FC60)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F00FE70)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1F00FE90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_STOP_OFFSET UNITYSDK_OFFSET(0x1F00FEF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0102E0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableDirector_TypeDefinitionIndex = 5768;

	class PlayableDirector : public ::UnityEngine::Behaviour
	{
	public:
		::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* played; // 0x18
		::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* paused; // 0x20
		::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* stopped; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayState get_state()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_STATE_OFFSET))(this);
		}

		::System::Void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode()
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableAsset* get_playableAsset()
		{
			return ((::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET))(this);
		}

		::System::Void set_playableAsset(::UnityEngine::Playables::PlayableAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayableGraph get_playableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET))(this, a1);
		}

		::System::Void DeferredEvaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(this, a1);
		}

		::System::Void Play_1(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::DirectorWrapMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetGenericBinding(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET))(this, a1, a2);
		}

		::System::Void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode()
		{
			return ((::UnityEngine::Playables::DirectorUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_time(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET))(this, a1);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET))(this);
		}

		::System::Void set_initialTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET))(this, a1);
		}

		::System::Double get_initialTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_INITIALTIME_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_DURATION_OFFSET))(this);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATE_OFFSET))(this);
		}

		::System::Void Play_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_2_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESUME_OFFSET))(this);
		}

		::System::Void RebuildGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBUILDGRAPH_OFFSET))(this);
		}

		::System::Void ClearReferenceValue(::UnityEngine::PropertyName a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET))(this, a1);
		}

		::System::Void SetReferenceValue(::UnityEngine::PropertyName a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName a1, ::System::Boolean& a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::PropertyName, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* GetGenericBinding(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET))(this, a1);
		}

		::System::Void ClearGenericBinding(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET))(this, a1);
		}

		::System::Void ClearAllGenericBindingsExcept(::Il2CppArray<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARALLGENERICBINDINGSEXCEPT_OFFSET))(this, a1);
		}

		::System::Void RebindPlayableGraphOutputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET))(this);
		}

		::System::Void ProcessPendingGraphChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET))(this);
		}

		::System::Boolean HasGenericBinding(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayState GetPlayState()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET))(this);
		}

		::System::Void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::DirectorWrapMode GetWrapMode()
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETWRAPMODE_OFFSET))(this);
		}

		::System::Void EvaluateNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATENEXTFRAME_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableGraph GetGraphHandle()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_OFFSET))(this);
		}

		::System::Void SetPlayOnAwake(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET))(this, a1);
		}

		::System::Boolean GetPlayOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET))(this);
		}

		::System::Void Internal_SetGenericBinding(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET))(this, a1, a2);
		}

		::System::Void SetPlayableAsset(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::ScriptableObject* Internal_GetPlayableAsset()
		{
			return ((::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET))(this);
		}

		::System::Void add_played(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET))(this, a1);
		}

		::System::Void remove_played(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET))(this, a1);
		}

		::System::Void add_paused(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET))(this, a1);
		}

		::System::Void remove_paused(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET))(this, a1);
		}

		::System::Void add_stopped(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET))(this, a1);
		}

		::System::Void remove_stopped(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET))(this, a1);
		}

		static ::System::Void ResetFrameTiming()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESETFRAMETIMING_OFFSET))();
		}

		::System::Void SendOnPlayableDirectorPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPLAY_OFFSET))(this);
		}

		::System::Void SendOnPlayableDirectorPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPAUSE_OFFSET))(this);
		}

		::System::Void SendOnPlayableDirectorStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORSTOP_OFFSET))(this);
		}

		::System::Void ClearReferenceValue_Injected(::UnityEngine::PropertyName& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetReferenceValue_Injected(::UnityEngine::PropertyName& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* GetReferenceValue_Injected(::UnityEngine::PropertyName& a1, ::System::Boolean& a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::PropertyName&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetGraphHandle_Injected(::UnityEngine::Playables::PlayableGraph& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET))(this, a1);
		}
	};
}
