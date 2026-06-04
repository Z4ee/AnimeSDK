#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/PlayState.h"
#include "unitysdk/UnityEngine/Playables/PlayableTraversalMode.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x3882F00)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET UNITYSDK_OFFSET(0x3882EE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0x1B2B5700)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET UNITYSDK_OFFSET(0x3882DC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3882E80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3882E20)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5CB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x3883240)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5D70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x3883310)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3882ED0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5D80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x3883360)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5FA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET UNITYSDK_OFFSET(0x3882C50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5FD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0x38835C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x3882D70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET UNITYSDK_OFFSET(0x3882C50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5FB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET UNITYSDK_OFFSET(0x3882CB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x3882CB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B59E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0x3882FA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5A70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x3883020)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5E70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET UNITYSDK_OFFSET(0x3883430)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5F90)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x3883530)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5B30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_OFFSET UNITYSDK_OFFSET(0x38830E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5F00)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x38834B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5BD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET UNITYSDK_OFFSET(0x3883170)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1B2B49A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5C70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET UNITYSDK_OFFSET(0x3883200)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5990)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_OFFSET UNITYSDK_OFFSET(0x3882F20)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B59D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x3882F60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2B4900)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5AF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_OFFSET UNITYSDK_OFFSET(0x38830A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5AB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_OFFSET UNITYSDK_OFFSET(0x3883060)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5D10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET UNITYSDK_OFFSET(0x3883280)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5DD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x38833A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5FC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0x3883570)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x38833E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5E30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x3882D10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5D60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET UNITYSDK_OFFSET(0x38832D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5A30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x3882FE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5B90)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET UNITYSDK_OFFSET(0x3883120)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5F50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x38834F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5C30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET UNITYSDK_OFFSET(0x38831B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B5EC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET UNITYSDK_OFFSET(0x3883470)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2B5FE0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableHandle_TypeDefinitionIndex = 4898;

	struct alignas(8) PlayableHandle
	{
		static ::UnityEngine::Playables::PlayableHandle* StaticGet_m_Null()
		{
			return (::UnityEngine::Playables::PlayableHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayableHandle_TypeDefinitionIndex)->GetStaticField(0xA220);
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
		::UnityEngine::Playables::Playable GetInput(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Playables::Playable GetOutput(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET))(this, a1);
		}
		*/

		::System::Boolean SetInputWeight(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Single GetInputWeight(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Playables::PlayableHandle a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableHandle a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET))(a1, a2);
		}

		::System::Boolean CheckInputBounds(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET))(this, a1);
		}

		::System::Boolean CheckInputBounds_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_1_OFFSET))(this, a1, a2);
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

		::System::Void SetScriptInstance(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET))(this, a1);
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

		::System::Void SetSpeed(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET))(this, a1);
		}

		::System::Double GetTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET))(this);
		}

		::System::Void SetTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET))(this);
		}

		::System::Double GetDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET))(this);
		}

		::System::Void SetDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET))(this, a1);
		}

		::System::Void SetPropagateSetTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET))(this, a1);
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

		::System::Void SetInputCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetInputWeight_1(::UnityEngine::Playables::PlayableHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_1_OFFSET))(this, a1, a2);
		}

		::System::Double GetPreviousTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET))(this);
		}

		::System::Void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableTraversalMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode()
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET))(this);
		}

		::System::Void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET))(this, a1);
		}

		::System::Object* GetScriptInstance()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableHandle GetInputHandle(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayableHandle GetOutputHandle(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET))(this, a1);
		}

		::System::Void SetInputWeightFromIndex(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET))(this, a1, a2);
		}

		::System::Single GetInputWeightFromIndex(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET))(this, a1);
		}

		static ::System::Boolean IsNull_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISNULL_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET))(a1);
		}

		static ::System::Type* GetPlayableType_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Type*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Playables::PlayState GetPlayState_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::UnityEngine::Playables::PlayState(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void Play_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void Pause_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET))(a1);
		}

		static ::System::Double GetSpeed_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetSpeed_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Double GetTime_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetTime_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDone_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET))(a1);
		}

		static ::System::Double GetDuration_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetDuration_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetPropagateSetTime_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void GetGraph_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::UnityEngine::Playables::PlayableGraph& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Int32 GetInputCount_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetInputCount_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetInputWeight_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::UnityEngine::Playables::PlayableHandle& a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Double GetPreviousTime_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Double(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetTraversalMode_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::UnityEngine::Playables::PlayableTraversalMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::PlayableTraversalMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::UnityEngine::Playables::DirectorWrapMode(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::UnityEngine::Playables::DirectorWrapMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Object* GetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle& a1)
		{
			return ((::System::Object*(*)(::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void GetInputHandle_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Int32 a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetOutputHandle_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Int32 a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle& a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(a1, a2);
		}
	};
}
