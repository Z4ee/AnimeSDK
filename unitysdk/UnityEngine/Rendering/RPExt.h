#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Rendering/TextureColorSpace.h"

#define UNITYENGINE_RENDERING_RPEXT_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B166630)
#define UNITYENGINE_RENDERING_RPEXT_RESET_OFFSET UNITYSDK_OFFSET(0x1B17D240)
#define UNITYENGINE_RENDERING_RPEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B17D3E0)
#define UNITYENGINE_RENDERING_RPEXT__GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B17D2B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RPExt_TypeDefinitionIndex = 33763;

	class RPExt : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>** StaticGet__FormatTable()
		{
			return (::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>**)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0x4ACD0);
		}
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat* StaticGet__DefaultFormat()
		{
			return (::UnityEngine::Experimental::Rendering::GraphicsFormat*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0xE000);
		}
		static ::System::Boolean* StaticGet__IsDefaultSRGB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0xE004);
		}
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat* StaticGet__DefaultHDRFromat()
		{
			return (::UnityEngine::Experimental::Rendering::GraphicsFormat*)Il2CppClass::FromTypeDefinitionIndex(RPExt_TypeDefinitionIndex)->GetStaticField(0xE008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT_RESET_OFFSET))();
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat& a1, ::UnityEngine::RenderTextureReadWrite a2, ::System::Boolean& a3)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat&, ::UnityEngine::RenderTextureReadWrite, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT_GETGRAPHICSFORMAT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat _GetGraphicsFormat(::UnityEngine::RenderTextureFormat a1, ::UnityEngine::Rendering::TextureColorSpace& a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::Rendering::TextureColorSpace&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RPEXT__GETGRAPHICSFORMAT_OFFSET))(a1, a2);
		}
	};
}
