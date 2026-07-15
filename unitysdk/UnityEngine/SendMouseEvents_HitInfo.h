#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D2E6CA0)
#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D2E6C40)
#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x3B060C0)

namespace UnityEngine
{
	inline static constexpr unsigned int SendMouseEvents_HitInfo_TypeDefinitionIndex = 5267;

	struct alignas(8) SendMouseEvents_HitInfo
	{
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::Camera* camera; // 0x18

		::System::Void SendMessage_(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_SENDMESSAGE__OFFSET))(this, a1);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::SendMouseEvents_HitInfo a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::SendMouseEvents_HitInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean Compare(::UnityEngine::SendMouseEvents_HitInfo a1, ::UnityEngine::SendMouseEvents_HitInfo a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::SendMouseEvents_HitInfo, ::UnityEngine::SendMouseEvents_HitInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_COMPARE_OFFSET))(a1, a2);
		}
	};
}
