#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET UNITYSDK_OFFSET(0x1A463C60)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET UNITYSDK_OFFSET(0x1A463BE0)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1A463CE0)

namespace UnityEngine
{
	inline static constexpr unsigned int PerformanceSignificanceCallbacks_TypeDefinitionIndex = 4208;

	class PerformanceSignificanceCallbacks : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Double>** StaticGet_OnLargeObjectAllocedEvent()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x16000);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Double>** StaticGet_OnParticleSystemPrewarmHitchEvent()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x16008);
		}
		static ::System::Action** StaticGet_OnStatsCollectFrameInfoEvent()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x16010);
		}

		static ::System::Void OnParticleSystemPrewarmHitch(::UnityEngine::GameObject* go, ::System::Double msTime)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET))(go, msTime);
		}

		static ::System::Void OnLargeObjectAlloced(::UnityEngine::GameObject* go, ::System::Double msTime)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET))(go, msTime);
		}

		static ::System::Void OnStatsCollectFrameInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET))();
		}
	};
}
