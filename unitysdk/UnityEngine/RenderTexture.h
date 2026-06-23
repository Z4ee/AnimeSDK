#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderBuffer.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/VRTextureUsage.h"

#define UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CF39720)
#define UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CF395C0)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39640)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF39600)
#define UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1CF3A580)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39690)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF39650)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF397F0)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF39790)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET UNITYSDK_OFFSET(0x1CF3A890)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET UNITYSDK_OFFSET(0x1CF3AA30)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET UNITYSDK_OFFSET(0x1CF3ABA0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET UNITYSDK_OFFSET(0x1CF3AD50)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET UNITYSDK_OFFSET(0x1CF3AEE0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET UNITYSDK_OFFSET(0x1CF3B050)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET UNITYSDK_OFFSET(0x1CF3B1C0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39810)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1CF39800)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1CF3A810)
#define UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1CF395E0)
#define UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1CF39550)
#define UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF396A0)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF396E0)
#define UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF3A0A0)
#define UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1CF39480)
#define UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1CF394F0)
#define UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1CF394A0)
#define UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1CF39460)
#define UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1CF39590)
#define UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1CF394C0)
#define UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1CF39530)
#define UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1CF39440)
#define UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1CF39760)
#define UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET UNITYSDK_OFFSET(0x1CF39740)
#define UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET UNITYSDK_OFFSET(0x1CF39820)
#define UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CF39730)
#define UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CF395D0)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CF39780)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF39770)
#define UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET UNITYSDK_OFFSET(0x1CF39750)
#define UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1CF395F0)
#define UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1CF39560)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOAPPLYDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1CF395B0)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1CF39520)
#define UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x1CF39570)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1CF39830)
#define UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF3A4C0)
#define UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1CF39490)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1CF39580)
#define UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1CF394B0)
#define UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1CF39470)
#define UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x1CF394E0)
#define UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x1CF39510)
#define UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1CF395A0)
#define UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1CF394D0)
#define UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1CF39540)
#define UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1CF39450)
#define UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1CF39A10)
#define UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF398E0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CF39DF0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CF3A100)
#define UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CF3A140)
#define UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CF3A280)
#define UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1CF3A540)
#define UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1CF3A740)
#define UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1CF3A780)
#define UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1CF3A7C0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF39840)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTexture_TypeDefinitionIndex = 5275;

	class RenderTexture : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET))(this, desc);
		}

		::System::Void _ctor_2(::UnityEngine::RenderTexture* textureToCopy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET))(this, textureToCopy);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET))(this, width, height, depth, format, mipCount);
		}

		::System::Void _ctor_6(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET))(this, width, height, depth, format, readWrite);
		}

		::System::Void _ctor_7(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_8(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET))(this, width, height, depth);
		}

		::System::Void _ctor_9(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET))(this, width, height, depth, format, mipCount);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET))(this);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_useMipMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET))(this);
		}

		::System::Void set_useMipMap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET))(this, value);
		}

		::System::Void set_memorylessMode(::UnityEngine::RenderTextureMemoryless value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureFormat get_format()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET))(this, value);
		}

		::System::Void set_autoGenerateMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET))(this, value);
		}

		::System::Int32 get_volumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET))(this);
		}

		::System::Void set_volumeDepth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET))(this, value);
		}

		::System::Int32 get_antiAliasing()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET))(this);
		}

		::System::Void set_antiAliasing(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET))(this, value);
		}

		::System::Void set_bindTextureMS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET))(this, value);
		}

		::System::Void set_enableRandomWrite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET))(this, value);
		}

		::System::Boolean get_useDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_useDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET))(this, value);
		}

		::System::Void set_autoApplyDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_AUTOAPPLYDYNAMICSCALE_OFFSET))(this, value);
		}

		static ::UnityEngine::RenderTexture* GetActive()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET))();
		}

		static ::System::Void SetActive(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET))(rt);
		}

		static ::UnityEngine::RenderTexture* get_active()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_active(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET))(value);
		}

		::UnityEngine::RenderBuffer GetColorBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer GetDepthBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer get_colorBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer get_depthBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET))(this);
		}

		::System::Boolean Create()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET))(this);
		}

		::System::Void SetSRGBReadWrite(::System::Boolean srgb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET))(this, srgb);
		}

		static ::System::Void Internal_Create(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET))(rt);
		}

		::System::Void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET))(this, desc);
		}

		::UnityEngine::RenderTextureDescriptor GetDescriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET))(desc);
		}

		static ::System::Void ReleaseTemporary(::UnityEngine::RenderTexture* temp)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET))(temp);
		}

		::System::Void set_depth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureDescriptor get_descriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Void set_descriptor(::UnityEngine::RenderTextureDescriptor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET))(this, value);
		}

		static ::System::Void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET))(desc);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET))(renderTextureFormat, readWrite);
		}

		static ::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(desc);
		}

		static ::UnityEngine::RenderTexture* GetTemporaryImpl(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET))(width, height, depthBuffer);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_6(::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET))(width, height);
		}

		::System::Void GetColorBuffer_Injected(::UnityEngine::RenderBuffer& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetDepthBuffer_Injected(::UnityEngine::RenderBuffer& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetRenderTextureDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET))(this, desc);
		}

		::System::Void GetDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET))(this, ret);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET))(desc);
		}
	};
}
