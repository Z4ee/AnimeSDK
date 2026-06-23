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

#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET UNITYSDK_OFFSET(0x1E87EE90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET UNITYSDK_OFFSET(0x1E87ED90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET UNITYSDK_OFFSET(0x1E87EF90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1E87ED30)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87ECB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1E87EC90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET UNITYSDK_OFFSET(0x1E87E890)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATENEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1E87E8A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1E87EC40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_FIXINVALIDSCENEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1E87ED70)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1E87ED20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87ED80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_OFFSET UNITYSDK_OFFSET(0x1E87E810)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E87E860)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1E87E6D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87ED10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1E87ECF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1E87E710)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1E87EC30)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E87E700)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0x1E87EC20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1E87E720)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1E87E7D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E87E850)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1E87E6C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1E87EBE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1E87EC00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1E87ED60)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1E87E7A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1E87EBC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E87EC60)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1E87EA20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1E87EBA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0x1E87E8B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET UNITYSDK_OFFSET(0x1E87ED50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET UNITYSDK_OFFSET(0x1E87ED40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0x1E87EC80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET UNITYSDK_OFFSET(0x1E87EF10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET UNITYSDK_OFFSET(0x1E87EE10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET UNITYSDK_OFFSET(0x1E87F010)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESETFRAMETIMING_OFFSET UNITYSDK_OFFSET(0x1E87F090)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESUME_OFFSET UNITYSDK_OFFSET(0x1E87EC70)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPAUSE_OFFSET UNITYSDK_OFFSET(0x1E87F0F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPLAY_OFFSET UNITYSDK_OFFSET(0x1E87F0A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORSTOP_OFFSET UNITYSDK_OFFSET(0x1E87F140)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0x1E87EBB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1E87E7C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E87E880)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87ECE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x1E87ECC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET UNITYSDK_OFFSET(0x1E87E6F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E87E6E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0x1E87EC10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1E87E7B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E87E870)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1E87EBD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1E87EBF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_STOP_OFFSET UNITYSDK_OFFSET(0x1E87EC50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87F190)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableDirector_TypeDefinitionIndex = 27420;

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

		::System::Void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode()
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableAsset* get_playableAsset()
		{
			return ((::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET))(this);
		}

		::System::Void set_playableAsset(::UnityEngine::Playables::PlayableAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET))(this, value);
		}

		::UnityEngine::Playables::PlayableGraph get_playableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Void DeferredEvaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(this, asset);
		}

		::System::Void Play_1(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::DirectorWrapMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_1_OFFSET))(this, asset, mode);
		}

		::System::Void SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET))(this, key, value);
		}

		::System::Void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode()
		{
			return ((::UnityEngine::Playables::DirectorUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET))(this, value);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET))(this);
		}

		::System::Void set_initialTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET))(this, value);
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

		::System::Void ClearReferenceValue(::UnityEngine::PropertyName id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET))(this, id);
		}

		::System::Void SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET))(this, id, value);
		}

		::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName id, ::System::Boolean& idValid)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::PropertyName, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET))(this, id, idValid);
		}

		::UnityEngine::Object* GetGenericBinding(::UnityEngine::Object* key)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET))(this, key);
		}

		::System::Void ClearGenericBinding(::UnityEngine::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET))(this, key);
		}

		::System::Void RebindPlayableGraphOutputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET))(this);
		}

		::System::Void ProcessPendingGraphChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET))(this);
		}

		::System::Boolean HasGenericBinding(::UnityEngine::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET))(this, key);
		}

		::System::Void FixInvalidSceneBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_FIXINVALIDSCENEBINDINGS_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayState GetPlayState()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET))(this);
		}

		::System::Void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET))(this, mode);
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

		::System::Void SetPlayOnAwake(::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET))(this, on);
		}

		::System::Boolean GetPlayOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET))(this);
		}

		::System::Void Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET))(this, key, value);
		}

		::System::Void SetPlayableAsset(::UnityEngine::ScriptableObject* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET))(this, asset);
		}

		::UnityEngine::ScriptableObject* Internal_GetPlayableAsset()
		{
			return ((::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET))(this);
		}

		::System::Void add_played(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET))(this, value);
		}

		::System::Void remove_played(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET))(this, value);
		}

		::System::Void add_paused(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET))(this, value);
		}

		::System::Void remove_paused(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET))(this, value);
		}

		::System::Void add_stopped(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET))(this, value);
		}

		::System::Void remove_stopped(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET))(this, value);
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

		::System::Void ClearReferenceValue_Injected(::UnityEngine::PropertyName& id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET))(this, id);
		}

		::System::Void SetReferenceValue_Injected(::UnityEngine::PropertyName& id, ::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET))(this, id, value);
		}

		::UnityEngine::Object* GetReferenceValue_Injected(::UnityEngine::PropertyName& id, ::System::Boolean& idValid)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::PropertyName&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET))(this, id, idValid);
		}

		::System::Void GetGraphHandle_Injected(::UnityEngine::Playables::PlayableGraph& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET))(this, ret);
		}
	};
}
