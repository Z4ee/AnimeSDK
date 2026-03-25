#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09EA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_1_OFFSET UNITYSDK_OFFSET(0x18A09EC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_2_OFFSET UNITYSDK_OFFSET(0x18A09EE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09ED0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09EB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x189FB880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09F30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09F40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET UNITYSDK_OFFSET(0x189FB890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET UNITYSDK_OFFSET(0x18A09F20)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int GraphicsFormatUtility_TypeDefinitionIndex = 4740;

	class GraphicsFormatUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Texture* texture)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET))(texture);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::TextureFormat format, ::System::Boolean isSRGB)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET))(format, isSRGB);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat format, ::System::Boolean isSRGB)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET))(format, isSRGB);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_1(::UnityEngine::RenderTextureFormat format, ::System::Boolean isSRGB)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_1_OFFSET))(format, isSRGB);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat format, ::System::Boolean isSRGB)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET))(format, isSRGB);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_2(::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_2_OFFSET))(format, readWrite);
		}

		static ::System::Boolean IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET))(format);
		}

		static ::UnityEngine::RenderTextureFormat GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Boolean IsCompressedTextureFormat(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Boolean IsCrunchFormat(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET))(format);
		}
	};
}
