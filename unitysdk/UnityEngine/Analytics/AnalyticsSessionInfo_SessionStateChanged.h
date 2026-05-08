#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Analytics/AnalyticsSessionState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C535CA0)
#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C535D70)
#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C535360)
#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C535C90)

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int AnalyticsSessionInfo_SessionStateChanged_TypeDefinitionIndex = 84227;

	class AnalyticsSessionInfo_SessionStateChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Analytics::AnalyticsSessionState sessionState, ::System::Int64 sessionId, ::System::Int64 sessionElapsedTime, ::System::Boolean sessionChanged)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Analytics::AnalyticsSessionState, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_INVOKE_OFFSET))(this, sessionState, sessionId, sessionElapsedTime, sessionChanged);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Analytics::AnalyticsSessionState sessionState, ::System::Int64 sessionId, ::System::Int64 sessionElapsedTime, ::System::Boolean sessionChanged, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Analytics::AnalyticsSessionState, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_BEGININVOKE_OFFSET))(this, sessionState, sessionId, sessionElapsedTime, sessionChanged, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_SESSIONSTATECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
