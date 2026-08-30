#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CullingGroup_StateChanged; }

#define UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET UNITYSDK_OFFSET(0x1ED15B70)

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroup_TypeDefinitionIndex = 4048;

	class CullingGroup : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::CullingGroup_StateChanged* m_OnStateChanged; // 0x18

		static ::System::Void SendEvents(::UnityEngine::CullingGroup* a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::CullingGroup*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET))(a1, a2, a3);
		}
	};
}
