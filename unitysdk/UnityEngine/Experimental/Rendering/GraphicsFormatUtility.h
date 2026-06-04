#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x1B294910)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B294930)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1B294950)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B294940)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B294920)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B287020)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2949A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2949B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET UNITYSDK_OFFSET(0x1B287030)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET UNITYSDK_OFFSET(0x1B294990)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int GraphicsFormatUtility_TypeDefinitionIndex = 4922;

	class GraphicsFormatUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET))(a1);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::TextureFormat a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_1(::UnityEngine::RenderTextureFormat a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_2(::UnityEngine::RenderTextureFormat a1, ::UnityEngine::RenderTextureReadWrite a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTextureFormat GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET))(a1);
		}

		static ::System::Boolean IsCompressedTextureFormat(::UnityEngine::TextureFormat a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET))(a1);
		}

		static ::System::Boolean IsCrunchFormat(::UnityEngine::TextureFormat a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET))(a1);
		}
	};
}
