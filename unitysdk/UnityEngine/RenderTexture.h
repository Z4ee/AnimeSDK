#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Camera_MonoOrStereoscopicEye.h"
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
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET UNITYSDK_OFFSET(0x1A470FD0)
#define UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A470F90)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_1_OFFSET UNITYSDK_OFFSET(0x1A470F30)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET UNITYSDK_OFFSET(0x1A470F10)
#define UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1A470FC0)
#define UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A470DA0)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A470E20)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1A470DE0)
#define UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1A471BC0)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A470E70)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1A470E30)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A471090)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A471030)
#define UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1A470D70)
#define UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET UNITYSDK_OFFSET(0x1A470F00)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET UNITYSDK_OFFSET(0x1A472030)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET UNITYSDK_OFFSET(0x1A472EF0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET UNITYSDK_OFFSET(0x1A473040)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET UNITYSDK_OFFSET(0x1A473180)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET UNITYSDK_OFFSET(0x1A4732C0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET UNITYSDK_OFFSET(0x1A4722A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET UNITYSDK_OFFSET(0x1A472410)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET UNITYSDK_OFFSET(0x1A472560)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET UNITYSDK_OFFSET(0x1A4726B0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET UNITYSDK_OFFSET(0x1A472800)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET UNITYSDK_OFFSET(0x1A472940)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET UNITYSDK_OFFSET(0x1A472AE0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET UNITYSDK_OFFSET(0x1A472C40)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET UNITYSDK_OFFSET(0x1A472DA0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4710B0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4710A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1A471F90)
#define UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET UNITYSDK_OFFSET(0x1A473490)
#define UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A470DC0)
#define UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1A470CF0)
#define UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1A470CB0)
#define UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x1A470D10)
#define UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1A470E80)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1A470EC0)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET UNITYSDK_OFFSET(0x1A470BC0)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1A4710D0)
#define UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A471660)
#define UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1A470B80)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A473470)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1A470D30)
#define UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1A470C40)
#define UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1A470BA0)
#define UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A470B60)
#define UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1A4733D0)
#define UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1A470D80)
#define UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x1A473420)
#define UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x1A470C20)
#define UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET UNITYSDK_OFFSET(0x1A470BF0)
#define UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x1A470C90)
#define UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A470D50)
#define UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1A470BD0)
#define UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1A470CD0)
#define UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x1A470C00)
#define UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1A470B40)
#define UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A470FF0)
#define UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET UNITYSDK_OFFSET(0x1A470FB0)
#define UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET UNITYSDK_OFFSET(0x1A470F20)
#define UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET UNITYSDK_OFFSET(0x1A4710C0)
#define UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A470FA0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET UNITYSDK_OFFSET(0x1A470F50)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET UNITYSDK_OFFSET(0x1A470F40)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET UNITYSDK_OFFSET(0x1A470F70)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET UNITYSDK_OFFSET(0x1A470F60)
#define UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A470DB0)
#define UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A470F80)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A471020)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A471010)
#define UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET UNITYSDK_OFFSET(0x1A470FE0)
#define UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A470DD0)
#define UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1A470D00)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1A470CC0)
#define UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x1A470D20)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1A4710E0)
#define UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A471A80)
#define UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1A470B90)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A473480)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1A470D40)
#define UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1A470C60)
#define UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1A470BB0)
#define UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A470B70)
#define UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1A4733F0)
#define UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1A470D90)
#define UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x1A473440)
#define UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x1A470C30)
#define UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x1A470CA0)
#define UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A470D60)
#define UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1A470BE0)
#define UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1A470CE0)
#define UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x1A470C10)
#define UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1A470B50)
#define UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET UNITYSDK_OFFSET(0x1A471000)
#define UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1A4711B0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A471110)
#define UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4714D0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A4716C0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A471770)
#define UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A471820)
#define UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1A471B00)
#define UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1A471D50)
#define UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1A471E00)
#define UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1A471EC0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4710F0)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTexture_TypeDefinitionIndex = 4012;

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

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET))(this);
		}

		::System::Boolean get_useMipMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET))(this);
		}

		::System::Void set_useMipMap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET))(this, value);
		}

		::System::Boolean get_sRGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET))(this);
		}

		::UnityEngine::VRTextureUsage get_vrUsage()
		{
			return ((::UnityEngine::VRTextureUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET))(this);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureMemoryless get_memorylessMode()
		{
			return ((::UnityEngine::RenderTextureMemoryless(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET))(this);
		}

		::System::Void set_memorylessMode(::UnityEngine::RenderTextureMemoryless value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureFormat get_format()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::RenderTextureFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_stencilFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET))(this);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_autoGenerateMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET))(this);
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

		::System::Boolean get_bindTextureMS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET))(this);
		}

		::System::Void set_bindTextureMS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET))(this, value);
		}

		::System::Boolean get_enableRandomWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET))(this);
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

		::System::Boolean GetIsPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET))(this);
		}

		::System::Boolean get_isPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET))(this);
		}

		::System::Void set_isPowerOfTwo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET))(this, value);
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

		::System::IntPtr GetNativeDepthBufferPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET))(this);
		}

		::System::Void DiscardContents(::System::Boolean discardColor, ::System::Boolean discardDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET))(this, discardColor, discardDepth);
		}

		::System::Void MarkRestoreExpected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET))(this);
		}

		::System::Void DiscardContents_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_1_OFFSET))(this);
		}

		::System::Void ResolveAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET))(this);
		}

		::System::Void ResolveAATo(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET))(this, rt);
		}

		::System::Void ResolveAntiAliasedSurface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET))(this);
		}

		::System::Void ResolveAntiAliasedSurface_1(::UnityEngine::RenderTexture* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET))(this, target);
		}

		::System::Void SetGlobalShaderProperty(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET))(this, propertyName);
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

		::System::Void GenerateMips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET))(this);
		}

		::System::Void ConvertToEquirect(::UnityEngine::RenderTexture* equirect, ::UnityEngine::Camera_MonoOrStereoscopicEye eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Camera_MonoOrStereoscopicEye))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET))(this, equirect, eye);
		}

		::System::Void SetSRGBReadWrite(::System::Boolean srgb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET))(this, srgb);
		}

		static ::System::Void Internal_Create(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET))(rt);
		}

		static ::System::Boolean SupportsStencil(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET))(rt);
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

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET))(this);
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

		static ::UnityEngine::RenderTexture* GetTemporary_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET))(width, height, depthBuffer, format, antiAliasing);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_6(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_7(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_8(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_9(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_10(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET))(width, height, depthBuffer, format, readWrite);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_11(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_12(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET))(width, height, depthBuffer);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_13(::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET))(width, height);
		}

		::System::Boolean get_isCubemap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET))(this);
		}

		::System::Void set_isCubemap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET))(this, value);
		}

		::System::Boolean get_isVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET))(this);
		}

		::System::Void set_isVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET))(value);
		}

		::UnityEngine::Vector2 GetTexelOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET))(this);
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
