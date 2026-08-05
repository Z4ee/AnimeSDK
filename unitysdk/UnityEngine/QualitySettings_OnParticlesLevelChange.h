#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EE2ADD0)
#define UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EE2AE60)
#define UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE2AAC0)
#define UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2AAA0)

namespace UnityEngine
{
	inline static constexpr unsigned int QualitySettings_OnParticlesLevelChange_TypeDefinitionIndex = 5192;

	class QualitySettings_OnParticlesLevelChange : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 qualitySettingLevel, ::System::Int32 particlesLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_INVOKE_OFFSET))(this, qualitySettingLevel, particlesLevel);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 qualitySettingLevel, ::System::Int32 particlesLevel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_BEGININVOKE_OFFSET))(this, qualitySettingLevel, particlesLevel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_ONPARTICLESLEVELCHANGE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
