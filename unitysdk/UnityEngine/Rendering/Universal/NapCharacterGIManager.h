#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapCharacterGI; }
namespace UnityEngine::Rendering::Universal { class NapCharacterGIWeather; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF0AFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_ISVALIDGI_OFFSET UNITYSDK_OFFSET(0x1CF0A980)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_PREPAREGPUSAMPLECONTEXT_OFFSET UNITYSDK_OFFSET(0x1CF0A590)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETDUMMYBUFFERS_OFFSET UNITYSDK_OFFSET(0x1CF0A350)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETGLOBALBUFFERS_OFFSET UNITYSDK_OFFSET(0x1CF0AE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETUPEMPTYGI_OFFSET UNITYSDK_OFFSET(0x1CF0ACC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETUPVALIDGI_OFFSET UNITYSDK_OFFSET(0x1CF0AA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B070)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGIManager_TypeDefinitionIndex = 27173;

	class NapCharacterGIManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapCharacterGIManager** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapCharacterGIManager**)Il2CppClass::FromTypeDefinitionIndex(NapCharacterGIManager_TypeDefinitionIndex)->GetStaticField(0x21880);
		}
		static ::UnityEngine::Rendering::Universal::NapCharacterGI** StaticGet_lastCgi()
		{
			return (::UnityEngine::Rendering::Universal::NapCharacterGI**)Il2CppClass::FromTypeDefinitionIndex(NapCharacterGIManager_TypeDefinitionIndex)->GetStaticField(0x21888);
		}
		static ::System::Int32* StaticGet_lastWeatherIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapCharacterGIManager_TypeDefinitionIndex)->GetStaticField(0x65D0);
		}
		::UnityEngine::ComputeBuffer* giPositionBuffer; // 0x10
		::UnityEngine::ComputeBuffer* giIndexBuffer; // 0x18
		::UnityEngine::ComputeBuffer* giColorBuffer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetDummyBuffers(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETDUMMYBUFFERS_OFFSET))(cmd);
		}

		static ::System::Boolean PrepareGPUSampleContext(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset, ::UnityEngine::Rendering::Universal::NapCharacterGI*& cgi, ::UnityEngine::Rendering::Universal::NapCharacterGIWeather*& weather)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::Rendering::Universal::NapCharacterGI*&, ::UnityEngine::Rendering::Universal::NapCharacterGIWeather*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_PREPAREGPUSAMPLECONTEXT_OFFSET))(cmd, urpAsset, cgi, weather);
		}

		static ::System::Boolean IsValidGI(::UnityEngine::Rendering::Universal::NapCharacterGI* cgi, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::NapCharacterGI*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_ISVALIDGI_OFFSET))(cgi, urpAsset);
		}

		static ::System::Void SetupValidGI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::NapCharacterGI* cgi, ::UnityEngine::Rendering::Universal::NapCharacterGIWeather* weather, ::System::Boolean isDirty)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::NapCharacterGI*, ::UnityEngine::Rendering::Universal::NapCharacterGIWeather*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETUPVALIDGI_OFFSET))(cmd, cgi, weather, isDirty);
		}

		static ::System::Void SetupEmptyGI(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETUPEMPTYGI_OFFSET))(cmd);
		}

		static ::System::Void SetGlobalBuffers(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_SETGLOBALBUFFERS_OFFSET))(cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIMANAGER_DISPOSE_OFFSET))(this);
		}
	};
}
