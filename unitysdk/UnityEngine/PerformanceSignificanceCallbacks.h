#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET UNITYSDK_OFFSET(0x1ECC5DF0)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET UNITYSDK_OFFSET(0x1ECC5DC0)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1ECC5E20)

namespace UnityEngine
{
	inline static constexpr unsigned int PerformanceSignificanceCallbacks_TypeDefinitionIndex = 4397;

	class PerformanceSignificanceCallbacks : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Double>** StaticGet_OnLargeObjectAllocedEvent()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x13500);
		}
		static ::System::Action** StaticGet_OnStatsCollectFrameInfoEvent()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x13508);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Double>** StaticGet_OnParticleSystemPrewarmHitchEvent()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSignificanceCallbacks_TypeDefinitionIndex)->GetStaticField(0x13510);
		}

		static ::System::Void OnParticleSystemPrewarmHitch(::UnityEngine::GameObject* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET))(a1, a2);
		}

		static ::System::Void OnLargeObjectAlloced(::UnityEngine::GameObject* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET))(a1, a2);
		}

		static ::System::Void OnStatsCollectFrameInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET))();
		}
	};
}
