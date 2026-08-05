#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"

namespace System { class String; }
namespace UnityEngine { class IExposedPropertyTable; }

#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953390)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x55EE30)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953330)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET UNITYSDK_OFFSET(0xA44650)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953350)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44680)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9531B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET UNITYSDK_OFFSET(0x1E953170)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9533D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x792C80)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9533F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_OFFSET UNITYSDK_OFFSET(0x792CB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9531D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET UNITYSDK_OFFSET(0xA445B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9533B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x792CE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0xA44600)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953260)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA44590)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953370)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44690)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0xA444B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9532C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0xA44630)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9532A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0xA44620)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9532E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0xA44640)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953360)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA44470)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA44470)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953210)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA445D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E9531F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0xA445C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953230)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET UNITYSDK_OFFSET(0xA445E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953280)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA44610)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E953250)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET UNITYSDK_OFFSET(0xA445F0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableGraph_TypeDefinitionIndex = 6298;

	struct alignas(8) PlayableGraph
	{
		::System::IntPtr m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18

		/*
		::UnityEngine::Playables::Playable GetRootPlayable(::System::Int32 index)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET))(this, index);
		}
		*/

		/*
		::UnityEngine::Playables::PlayableOutput GetOutput(::System::Int32 index)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET))(this, index);
		}
		*/

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET))(this);
		}

		static ::UnityEngine::Playables::PlayableGraph Create(::System::String* name)
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET))(name);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET))(this);
		}

		::System::Void Evaluate_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void SetTimeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET))(this, value);
		}

		::UnityEngine::IExposedPropertyTable* GetResolver()
		{
			return ((::UnityEngine::IExposedPropertyTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET))(this);
		}

		::System::Int32 GetPlayableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET))(this);
		}

		::System::Int32 GetRootPlayableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::Playables::PlayableHandle CreatePlayableHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean CreateScriptOutputInternal(::System::String* name, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET))(this, name, handle);
		}
		*/

		/*
		::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(::System::Int32 index)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET))(this, index);
		}
		*/

		/*
		::System::Boolean GetOutputInternal(::System::Int32 index, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET))(this, index, handle);
		}
		*/

		/*
		::System::Boolean ConnectInternal(::UnityEngine::Playables::PlayableHandle source, ::System::Int32 sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination, ::System::Int32 destinationInputPort)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET))(this, source, sourceOutputPort, destination, destinationInputPort);
		}
		*/

		/*
		::System::Void DisconnectInternal(::UnityEngine::Playables::PlayableHandle playable, ::System::Int32 inputPort)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET))(this, playable, inputPort);
		}
		*/

		/*
		::System::Void DestroyPlayableInternal(::UnityEngine::Playables::PlayableHandle playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET))(this, playable);
		}
		*/

		/*
		::System::Void DestroySubgraphInternal(::UnityEngine::Playables::PlayableHandle playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_OFFSET))(this, playable);
		}
		*/

		static ::System::Void Create_Injected(::System::String* name, ::UnityEngine::Playables::PlayableGraph& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void Destroy_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsPlaying_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Play_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Stop_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Evaluate_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET))(_unity_self, deltaTime);
		}

		static ::System::Void SetTimeUpdateMode_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::DirectorUpdateMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::IExposedPropertyTable* GetResolver_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::UnityEngine::IExposedPropertyTable*(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetRootPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void CreatePlayableHandle_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::PlayableHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Boolean CreateScriptOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::System::String* name, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET))(_unity_self, name, handle);
		}
		*/

		/*
		static ::System::Void GetRootPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::System::Int32 index, ::UnityEngine::Playables::PlayableHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET))(_unity_self, index, ret);
		}
		*/

		/*
		static ::System::Boolean GetOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::System::Int32 index, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET))(_unity_self, index, handle);
		}
		*/

		/*
		static ::System::Boolean ConnectInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::PlayableHandle& source, ::System::Int32 sourceOutputPort, ::UnityEngine::Playables::PlayableHandle& destination, ::System::Int32 destinationInputPort)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET))(_unity_self, source, sourceOutputPort, destination, destinationInputPort);
		}
		*/

		/*
		static ::System::Void DisconnectInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::PlayableHandle& playable, ::System::Int32 inputPort)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET))(_unity_self, playable, inputPort);
		}
		*/

		/*
		static ::System::Void DestroyPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::PlayableHandle& playable)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET))(_unity_self, playable);
		}
		*/

		/*
		static ::System::Void DestroySubgraphInternal_Injected(::UnityEngine::Playables::PlayableGraph& _unity_self, ::UnityEngine::Playables::PlayableHandle& playable)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_INJECTED_OFFSET))(_unity_self, playable);
		}
		*/
	};
}
