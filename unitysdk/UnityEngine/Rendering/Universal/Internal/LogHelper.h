#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_COMBINELOGINFO_1_OFFSET UNITYSDK_OFFSET(0x1C406970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_COMBINELOGINFO_OFFSET UNITYSDK_OFFSET(0x1C4068B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1C406E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1C406DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOG_1_OFFSET UNITYSDK_OFFSET(0x1C406D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOG_OFFSET UNITYSDK_OFFSET(0x1C406CA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LogHelper_TypeDefinitionIndex = 27260;

	class LogHelper : public ::System::Object
	{
	public:
		static ::System::String* CombineLogInfo(::System::String* header, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_COMBINELOGINFO_OFFSET))(header, content);
		}

		static ::System::String* CombineLogInfo_1(::System::String* header, ::System::String* stage, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_COMBINELOGINFO_1_OFFSET))(header, stage, content);
		}

		static ::System::Void Log(::System::String* header, ::System::String* stage, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOG_OFFSET))(header, stage, content);
		}

		static ::System::Void Log_1(::System::String* header, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOG_1_OFFSET))(header, content);
		}

		static ::System::Void LogWarning(::System::String* header, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOGWARNING_OFFSET))(header, content);
		}

		static ::System::Void LogError(::System::String* header, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LOGHELPER_LOGERROR_OFFSET))(header, content);
		}
	};
}
