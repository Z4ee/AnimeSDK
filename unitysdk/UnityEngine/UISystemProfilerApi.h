#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UISystemProfilerApi_SampleType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET UNITYSDK_OFFSET(0x1EE05380)
#define UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EE05360)
#define UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1EE05370)

namespace UnityEngine
{
	inline static constexpr unsigned int UISystemProfilerApi_TypeDefinitionIndex = 6020;

	class UISystemProfilerApi : public ::System::Object
	{
	public:
		static ::System::Void BeginSample(::UnityEngine::UISystemProfilerApi_SampleType a1)
		{
			return ((::System::Void(*)(::UnityEngine::UISystemProfilerApi_SampleType))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET))(a1);
		}

		static ::System::Void EndSample(::UnityEngine::UISystemProfilerApi_SampleType a1)
		{
			return ((::System::Void(*)(::UnityEngine::UISystemProfilerApi_SampleType))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET))(a1);
		}

		static ::System::Void AddMarker(::System::String* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET))(a1, a2);
		}
	};
}
