#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Analytics/AnalyticsSessionState.h"

namespace System { class String; }
namespace UnityEngine::Analytics { class AnalyticsSessionInfo_IdentityTokenChanged; }
namespace UnityEngine::Analytics { class AnalyticsSessionInfo_SessionStateChanged; }

#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLIDENTITYTOKENCHANGED_OFFSET UNITYSDK_OFFSET(0x1E867AB0)
#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLSESSIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E8676B0)

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int AnalyticsSessionInfo_TypeDefinitionIndex = 89805;

	class AnalyticsSessionInfo : public ::System::Object
	{
	public:
		static ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged** StaticGet_identityTokenChanged()
		{
			return (::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged**)Il2CppClass::FromTypeDefinitionIndex(AnalyticsSessionInfo_TypeDefinitionIndex)->GetStaticField(0x4E260);
		}
		static ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged** StaticGet_sessionStateChanged()
		{
			return (::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged**)Il2CppClass::FromTypeDefinitionIndex(AnalyticsSessionInfo_TypeDefinitionIndex)->GetStaticField(0x4E268);
		}

		static ::System::Void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState sessionState, ::System::Int64 sessionId, ::System::Int64 sessionElapsedTime, ::System::Boolean sessionChanged)
		{
			return ((::System::Void(*)(::UnityEngine::Analytics::AnalyticsSessionState, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLSESSIONSTATECHANGED_OFFSET))(sessionState, sessionId, sessionElapsedTime, sessionChanged);
		}

		static ::System::Void CallIdentityTokenChanged(::System::String* token)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLIDENTITYTOKENCHANGED_OFFSET))(token);
		}
	};
}
