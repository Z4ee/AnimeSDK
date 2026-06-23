#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Playables/PlayableTraversalMode.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CANDESTROY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF389D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CANDESTROY_OFFSET UNITYSDK_OFFSET(0x9C81A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x9C7F90)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET UNITYSDK_OFFSET(0x9C7F70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0x1CF38380)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9C7DC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C7EF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C7E40)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38DE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x9C8520)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38F60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x9C86C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C7F60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38F70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x9C8730)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF393C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET UNITYSDK_OFFSET(0x9C7BD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF393F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0x9C8BC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x9C7D50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET UNITYSDK_OFFSET(0x9C7BD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39250)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_OFFSET UNITYSDK_OFFSET(0x9C89B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF388E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_OFFSET UNITYSDK_OFFSET(0x9C80D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETLEADTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39160)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETLEADTIME_OFFSET UNITYSDK_OFFSET(0x9C88E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF393D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET UNITYSDK_OFFSET(0x9C7C50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x9C7C50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38870)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0x9C8070)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38A40)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x9C8200)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF390F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET UNITYSDK_OFFSET(0x9C8880)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPROPAGATESETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38ED0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPROPAGATESETTIME_OFFSET UNITYSDK_OFFSET(0x9C85F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF393B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C8AE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38B90)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_OFFSET UNITYSDK_OFFSET(0x9C8320)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF392C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x9C8A10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38C80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET UNITYSDK_OFFSET(0x9C83F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1CF37E00)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38D70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET UNITYSDK_OFFSET(0x9C84C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38790)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_OFFSET UNITYSDK_OFFSET(0x9C7FB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38800)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9C8010)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CF38310)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38B20)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_OFFSET UNITYSDK_OFFSET(0x9C82C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38AB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_OFFSET UNITYSDK_OFFSET(0x9C8260)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38E60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET UNITYSDK_OFFSET(0x9C8580)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38FF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x9C8790)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF393E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0x9C8B40)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x9C8800)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39080)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x9C7CD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38F50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET UNITYSDK_OFFSET(0x9C8650)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38960)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C8130)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38C10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET UNITYSDK_OFFSET(0x9C8380)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39340)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x9C8A70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF38D00)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET UNITYSDK_OFFSET(0x9C8450)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF391E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET UNITYSDK_OFFSET(0x9C8940)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF39400)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableHandle_TypeDefinitionIndex = 6296;

	struct alignas(8) PlayableHandle
	{
		static ::UnityEngine::Playables::PlayableHandle* StaticGet_m_Null()
		{
			return (::UnityEngine::Playables::PlayableHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayableHandle_TypeDefinitionIndex)->GetStaticField(0x25F0);
		}
		::System::IntPtr m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::PlayableHandle get_Null()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GET_NULL_OFFSET))();
		}

		/*
		::UnityEngine::Playables::Playable GetInput(::System::Int32 inputPort)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET))(this, inputPort);
		}
		*/

		/*
		::UnityEngine::Playables::Playable GetOutput(::System::Int32 outputPort)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET))(this, outputPort);
		}
		*/

		::System::Boolean SetInputWeight(::System::Int32 inputIndex, ::System::Single weight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET))(this, inputIndex, weight);
		}

		::System::Single GetInputWeight(::System::Int32 inputIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET))(this, inputIndex);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Playables::PlayableHandle x, ::UnityEngine::Playables::PlayableHandle y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET))(x, y);
		}

		::System::Boolean Equals(::System::Object* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET))(this, p);
		}

		::System::Boolean Equals_1(::UnityEngine::Playables::PlayableHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableHandle lhs, ::UnityEngine::Playables::PlayableHandle rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET))(lhs, rhs);
		}

		::System::Boolean CheckInputBounds(::System::Int32 inputIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET))(this, inputIndex);
		}

		::System::Boolean CheckInputBounds_1(::System::Int32 inputIndex, ::System::Boolean acceptAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_1_OFFSET))(this, inputIndex, acceptAny);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Type* GetPlayableType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_OFFSET))(this);
		}

		::System::Type* GetJobType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_OFFSET))(this);
		}

		::System::Void SetScriptInstance(::System::Object* scriptInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET))(this, scriptInstance);
		}

		::System::Boolean CanDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CANDESTROY_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayState GetPlayState()
		{
			return ((::UnityEngine::Playables::PlayState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_OFFSET))(this);
		}

		::System::Double GetSpeed()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_OFFSET))(this);
		}

		::System::Void SetSpeed(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET))(this, value);
		}

		::System::Double GetTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET))(this);
		}

		::System::Void SetTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET))(this, value);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET))(this);
		}

		::System::Double GetDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET))(this);
		}

		::System::Void SetDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET))(this, value);
		}

		::System::Boolean GetPropagateSetTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPROPAGATESETTIME_OFFSET))(this);
		}

		::System::Void SetPropagateSetTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Playables::PlayableGraph GetGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_OFFSET))(this);
		}
		*/

		::System::Int32 GetInputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_OFFSET))(this);
		}

		::System::Void SetInputCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET))(this, value);
		}

		::System::Void SetInputWeight_1(::UnityEngine::Playables::PlayableHandle input, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_1_OFFSET))(this, input, weight);
		}

		::System::Double GetPreviousTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET))(this);
		}

		::System::Single GetLeadTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETLEADTIME_OFFSET))(this);
		}

		::System::Void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableTraversalMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET))(this, mode);
		}

		::System::IntPtr GetJobData()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_OFFSET))(this);
		}

		::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode()
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET))(this);
		}

		::System::Void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET))(this, mode);
		}

		::System::Object* GetScriptInstance()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableHandle GetInputHandle(::System::Int32 index)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET))(this, index);
		}

		::UnityEngine::Playables::PlayableHandle GetOutputHandle(::System::Int32 index)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET))(this, index);
		}

		::System::Void SetInputWeightFromIndex(::System::Int32 index, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET))(this, index, weight);
		}

		::System::Single GetInputWeightFromIndex(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET))(this, index);
		}

		static ::System::Boolean IsNull_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Type* GetPlayableType_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Type*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Type* GetJobType_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Type*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Object* scriptInstance)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET))(_unity_self, scriptInstance);
		}

		static ::System::Boolean CanDestroy_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CANDESTROY_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::Playables::PlayState GetPlayState_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::UnityEngine::Playables::PlayState(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Play_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void Pause_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Double GetSpeed_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetSpeed_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Double value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Double GetTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Double value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean IsDone_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Double GetDuration_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetDuration_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Double value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean GetPropagateSetTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPROPAGATESETTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetPropagateSetTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void GetGraph_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::UnityEngine::Playables::PlayableGraph& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Int32 GetInputCount_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetInputCount_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void SetInputWeight_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::UnityEngine::Playables::PlayableHandle& input, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET))(_unity_self, input, weight);
		}

		static ::System::Double GetPreviousTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Single GetLeadTime_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETLEADTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetTraversalMode_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::UnityEngine::Playables::PlayableTraversalMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableTraversalMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET))(_unity_self, mode);
		}

		static ::System::IntPtr GetJobData_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::UnityEngine::Playables::DirectorWrapMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET))(_unity_self, mode);
		}

		static ::System::Object* GetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self)
		{
			return ((::System::Object*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void GetInputHandle_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Int32 index, ::UnityEngine::Playables::PlayableHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET))(_unity_self, index, ret);
		}

		static ::System::Void GetOutputHandle_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Int32 index, ::UnityEngine::Playables::PlayableHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET))(_unity_self, index, ret);
		}

		static ::System::Void SetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Int32 index, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(_unity_self, index, weight);
		}

		static ::System::Single GetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle& _unity_self, ::System::Int32 index)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
