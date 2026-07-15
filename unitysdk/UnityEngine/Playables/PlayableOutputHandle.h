#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Playables { class INotificationReceiver; }

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D1202F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET UNITYSDK_OFFSET(0x3AD58C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0x1D11FF00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AD55F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AD5590)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AD4E00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D120040)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x3AD5680)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D1201E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x3AD57E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D120140)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x3AD5740)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1D11FEB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D120000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x3AD5640)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D11FE10)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D1202A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x3AD5870)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D120090)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x3AD56C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D1201A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x3AD5790)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D1200E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x3AD5700)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D120240)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x3AD5820)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D120300)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutputHandle_TypeDefinitionIndex = 4906;

	struct alignas(8) PlayableOutputHandle
	{
		static ::UnityEngine::Playables::PlayableOutputHandle* StaticGet_m_Null()
		{
			return (::UnityEngine::Playables::PlayableOutputHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayableOutputHandle_TypeDefinitionIndex)->GetStaticField(0x9780);
		}
		::System::IntPtr m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::PlayableOutputHandle get_Null()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Playables::PlayableOutputHandle a1, ::UnityEngine::Playables::PlayableOutputHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Playables::PlayableOutputHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableOutputHandle a1, ::UnityEngine::Playables::PlayableOutputHandle a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET))(a1, a2);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Type* GetPlayableOutputType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET))(this);
		}

		::System::Void SetReferenceObject(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET))(this, a1);
		}

		::System::Void SetUserData(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Playables::PlayableHandle GetSourcePlayable()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Int32 GetSourceOutputPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET))(this);
		}

		::System::Void SetWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET))(this, a1);
		}

		/*
		::System::Void PushNotification(::UnityEngine::Playables::PlayableHandle a1, ::UnityEngine::Playables::INotification* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET))(this, a1, a2, a3);
		}
		*/

		::System::Void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::INotificationReceiver*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET))(this, a1);
		}

		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET))(a1);
		}

		static ::System::Type* GetPlayableOutputType_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1)
		{
			return ((::System::Type*(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetReferenceObject_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetUserData_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void GetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Playables::PlayableHandle& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void SetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Playables::PlayableHandle& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Int32 GetSourceOutputPort_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetWeight_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void PushNotification_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Playables::PlayableHandle& a2, ::UnityEngine::Playables::INotification* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Void AddNotificationReceiver_Injected(::UnityEngine::Playables::PlayableOutputHandle& a1, ::UnityEngine::Playables::INotificationReceiver* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::INotificationReceiver*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET))(a1, a2);
		}
	};
}
