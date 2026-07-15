#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/DepthBits.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1C078AE0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x1C078C70)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_3_OFFSET UNITYSDK_OFFSET(0x1C078E60)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_4_OFFSET UNITYSDK_OFFSET(0x1C078FD0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x1C078950)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C078830)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1C0787B0)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C0788B0)
#define UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C079080)
#define UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C079120)
#define UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1C0791B0)
#define UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1C079230)
#define UNITYENGINE_RENDERING_RTHANDLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0792C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandles_TypeDefinitionIndex = 34150;

	class RTHandles : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RTHandleSystem** StaticGet_s_DefaultInstance()
		{
			return (::UnityEngine::Rendering::RTHandleSystem**)Il2CppClass::FromTypeDefinitionIndex(RTHandles_TypeDefinitionIndex)->GetStaticField(0x47500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_maxWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET))();
		}

		static ::System::Int32 get_maxHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::DepthBits a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::FilterMode a6, ::UnityEngine::TextureWrapMode a7, ::UnityEngine::Rendering::TextureDimension a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Int32 a13, ::System::Single a14, ::UnityEngine::Rendering::MSAASamples a15, ::System::Boolean a16, ::System::Boolean a17, ::UnityEngine::RenderTextureMemoryless a18, ::System::String* a19)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_1(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::UnityEngine::Rendering::DepthBits a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::FilterMode a5, ::UnityEngine::TextureWrapMode a6, ::UnityEngine::Rendering::TextureDimension a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::UnityEngine::RenderTextureMemoryless a17, ::System::String* a18)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_2(::UnityEngine::Rendering::ScaleFunc* a1, ::System::Int32 a2, ::UnityEngine::Rendering::DepthBits a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::FilterMode a5, ::UnityEngine::TextureWrapMode a6, ::UnityEngine::Rendering::TextureDimension a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::UnityEngine::RenderTextureMemoryless a17, ::System::String* a18)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_3(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_3_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_4(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_4_OFFSET))(a1);
		}

		static ::System::Void Initialize(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Rendering::MSAASamples a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Release(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET))(a1);
		}

		static ::System::Void SetHardwareDynamicResolutionState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(a1);
		}

		static ::System::Void SetReferenceSize(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::MSAASamples a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET))(a1, a2, a3);
		}
	};
}
