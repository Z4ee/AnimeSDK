#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_MIPISREADY_OFFSET UNITYSDK_OFFSET(0x1B661C80)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_MIPVIDEO_OFFSET UNITYSDK_OFFSET(0x1B661C40)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_S_RAWVIDEO_OFFSET UNITYSDK_OFFSET(0x1B661C20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_MIPISREADY_OFFSET UNITYSDK_OFFSET(0x1B661C90)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_MIPVIDEO_OFFSET UNITYSDK_OFFSET(0x1B661C50)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_S_BLURAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B661C10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_S_RAWVIDEO_OFFSET UNITYSDK_OFFSET(0x1B661C30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VideoMipGeneratorUtils_TypeDefinitionIndex = 5972;

	class VideoMipGeneratorUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_s_MipVideo()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(VideoMipGeneratorUtils_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}

		static ::System::Void set_s_blurAmount(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_S_BLURAMOUNT_OFFSET))(value);
		}

		static ::UnityEngine::Texture* get_s_RawVideo()
		{
			return ((::UnityEngine::Texture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_S_RAWVIDEO_OFFSET))();
		}

		static ::System::Void set_s_RawVideo(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_S_RAWVIDEO_OFFSET))(value);
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* get_mipVideo()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_MIPVIDEO_OFFSET))();
		}

		static ::System::Void set_mipVideo(::UnityEngine::NAPRenderPipeline0::RTHandle* value)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_MIPVIDEO_OFFSET))(value);
		}

		static ::System::Boolean get_mipIsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_GET_MIPISREADY_OFFSET))();
		}

		static ::System::Void set_mipIsReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIDEOMIPGENERATORUTILS_SET_MIPISREADY_OFFSET))(value);
		}
	};
}
