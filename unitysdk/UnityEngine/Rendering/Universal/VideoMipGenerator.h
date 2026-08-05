#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CHECKISFREEDRT_OFFSET UNITYSDK_OFFSET(0x1D6FC850)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CLEARUSEOFRTONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D6FAF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6FC8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1D6FB880)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D6FAEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6FADB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONPRERENDERTHIS_OFFSET UNITYSDK_OFFSET(0x1D6FB240)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D6FAF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6FC970)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FC910)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VideoMipGenerator_TypeDefinitionIndex = 27617;

	class VideoMipGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__MipScreenMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::System::Int32* StaticGet__FrameIsVideo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F44);
		}
		static ::System::Int32* StaticGet__ScreenMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F48);
		}
		::System::Single blurAmount; // 0x18
		::UnityEngine::Video::VideoClip* preVideoClip; // 0x20
		::UnityEngine::Video::VideoPlayer* m_VideoPlayer; // 0x28
		::System::Boolean bindSuccess; // 0x30
		::UnityEngine::MeshRenderer* renderer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ClearUseOfRTOnInstance(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CLEARUSEOFRTONINSTANCE_OFFSET))(this, tex);
		}

		::System::Void OnPreRenderThis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONPRERENDERTHIS_OFFSET))(this);
		}

		::UnityEngine::Texture* CheckIsFreedRT(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CHECKISFREEDRT_OFFSET))(this, tex);
		}

		::System::Boolean Init(::UnityEngine::Texture* srcVideo, ::UnityEngine::Material* material, ::UnityEngine::Video::VideoPlayer* videoPlayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Material*, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_INIT_OFFSET))(this, srcVideo, material, videoPlayer);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
