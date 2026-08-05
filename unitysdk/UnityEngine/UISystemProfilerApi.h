#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UISystemProfilerApi_SampleType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET UNITYSDK_OFFSET(0x1FAFFE50)
#define UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1FAFFE30)
#define UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1FAFFE40)

namespace UnityEngine
{
	inline static constexpr unsigned int UISystemProfilerApi_TypeDefinitionIndex = 18815;

	class UISystemProfilerApi : public ::System::Object
	{
	public:
		static ::System::Void BeginSample(::UnityEngine::UISystemProfilerApi_SampleType type)
		{
			return ((::System::Void(*)(::UnityEngine::UISystemProfilerApi_SampleType))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET))(type);
		}

		static ::System::Void EndSample(::UnityEngine::UISystemProfilerApi_SampleType type)
		{
			return ((::System::Void(*)(::UnityEngine::UISystemProfilerApi_SampleType))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET))(type);
		}

		static ::System::Void AddMarker(::System::String* name, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET))(name, obj);
		}
	};
}
