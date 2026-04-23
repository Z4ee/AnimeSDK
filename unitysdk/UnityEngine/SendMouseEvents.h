#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SendMouseEvents_HitInfo.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_SENDMOUSEEVENTS_DOSENDMOUSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A4C50B0)
#define UNITYENGINE_SENDMOUSEEVENTS_SENDEVENTS_OFFSET UNITYSDK_OFFSET(0x1A4C5D80)
#define UNITYENGINE_SENDMOUSEEVENTS_SETMOUSEMOVED_OFFSET UNITYSDK_OFFSET(0x1A4C5070)
#define UNITYENGINE_SENDMOUSEEVENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C6670)

namespace UnityEngine
{
	inline static constexpr unsigned int SendMouseEvents_TypeDefinitionIndex = 5167;

	class SendMouseEvents : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>** StaticGet_m_LastHit()
		{
			return (::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>**)Il2CppClass::FromTypeDefinitionIndex(SendMouseEvents_TypeDefinitionIndex)->GetStaticField(0x280);
		}
		static ::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>** StaticGet_m_CurrentHit()
		{
			return (::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>**)Il2CppClass::FromTypeDefinitionIndex(SendMouseEvents_TypeDefinitionIndex)->GetStaticField(0x288);
		}
		static ::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>** StaticGet_m_MouseDownHit()
		{
			return (::Il2CppArray<::UnityEngine::SendMouseEvents_HitInfo>**)Il2CppClass::FromTypeDefinitionIndex(SendMouseEvents_TypeDefinitionIndex)->GetStaticField(0x290);
		}
		static ::Il2CppArray<::UnityEngine::Camera*>** StaticGet_m_Cameras()
		{
			return (::Il2CppArray<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(SendMouseEvents_TypeDefinitionIndex)->GetStaticField(0x298);
		}
		static ::System::Boolean* StaticGet_s_MouseUsed()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SendMouseEvents_TypeDefinitionIndex)->GetStaticField(0x2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS__CCTOR_OFFSET))();
		}

		static ::System::Void SetMouseMoved()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_SETMOUSEMOVED_OFFSET))();
		}

		static ::System::Void DoSendMouseEvents(::System::Int32 skipRTCameras)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_DOSENDMOUSEEVENTS_OFFSET))(skipRTCameras);
		}

		static ::System::Void SendEvents(::System::Int32 i, ::UnityEngine::SendMouseEvents_HitInfo hit)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::SendMouseEvents_HitInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_SENDEVENTS_OFFSET))(i, hit);
		}
	};
}
