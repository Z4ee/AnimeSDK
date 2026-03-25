#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Rendering/TextureColorSpace.h"

#define UNITYENGINE_RENDERING_RPEXT_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x188CDC60)
#define UNITYENGINE_RENDERING_RPEXT_RESET_OFFSET UNITYSDK_OFFSET(0x188E8B40)
#define UNITYENGINE_RENDERING_RPEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x188E8CF0)
#define UNITYENGINE_RENDERING_RPEXT__GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x188E8BB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RPExt_TypeDefinitionIndex = 27857;

	class RPExt : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>** StaticGet__FormatTable()
		{
			return (::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>**)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0x1FAD0);
		}
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat* StaticGet__DefaultFormat()
		{
			return (::UnityEngine::Experimental::Rendering::GraphicsFormat*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0x8550);
		}
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat* StaticGet__DefaultHDRFromat()
		{
			return (::UnityEngine::Experimental::Rendering::GraphicsFormat*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0x8554);
		}
		static ::System::Boolean* StaticGet__IsDefaultSRGB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0x8558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT_RESET_OFFSET))();
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat& format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Boolean& isSRGB)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat&, ::UnityEngine::RenderTextureReadWrite, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT_GETGRAPHICSFORMAT_OFFSET))(format, readWrite, isSRGB);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat _GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, ::UnityEngine::Rendering::TextureColorSpace& colorSpace)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::Rendering::TextureColorSpace&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT__GETGRAPHICSFORMAT_OFFSET))(format, colorSpace);
		}
	};
}
