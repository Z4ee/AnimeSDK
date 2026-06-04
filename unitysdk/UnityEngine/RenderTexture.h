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

#define UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET UNITYSDK_OFFSET(0x1B2C0380)
#define UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2C0340)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_1_OFFSET UNITYSDK_OFFSET(0x1B2C02E0)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET UNITYSDK_OFFSET(0x1B2C02C0)
#define UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1B2C0370)
#define UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2C0150)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C01D0)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2C0190)
#define UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C0EC0)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C0220)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2C01E0)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C0430)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2C03E0)
#define UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1B2C0120)
#define UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET UNITYSDK_OFFSET(0x1B2C02B0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B2C1310)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET UNITYSDK_OFFSET(0x1B2C20D0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET UNITYSDK_OFFSET(0x1B2C2200)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET UNITYSDK_OFFSET(0x1B2C2330)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET UNITYSDK_OFFSET(0x1B2C2460)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET UNITYSDK_OFFSET(0x1B2C1550)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET UNITYSDK_OFFSET(0x1B2C16A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET UNITYSDK_OFFSET(0x1B2C17E0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET UNITYSDK_OFFSET(0x1B2C1920)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET UNITYSDK_OFFSET(0x1B2C1A50)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET UNITYSDK_OFFSET(0x1B2C1B70)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET UNITYSDK_OFFSET(0x1B2C1CF0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET UNITYSDK_OFFSET(0x1B2C1E40)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET UNITYSDK_OFFSET(0x1B2C1F90)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C0450)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2C0440)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1B2C1280)
#define UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2C2620)
#define UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2C0170)
#define UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1B2C00A0)
#define UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1B2C0060)
#define UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x1B2C00C0)
#define UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2C0230)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2C0270)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2BFF70)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B2C0470)
#define UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2C09B0)
#define UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1B2BFF30)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2C2600)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1B2C00E0)
#define UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B2BFFF0)
#define UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2BFF50)
#define UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2BFF10)
#define UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1B2C2560)
#define UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1B2C0130)
#define UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x1B2C25B0)
#define UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x1B2BFFD0)
#define UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET UNITYSDK_OFFSET(0x1B2BFFA0)
#define UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C0040)
#define UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1B2C0100)
#define UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1B2BFF80)
#define UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1B2C0080)
#define UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2BFFB0)
#define UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B2BFEF0)
#define UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2C03A0)
#define UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET UNITYSDK_OFFSET(0x1B2C0360)
#define UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET UNITYSDK_OFFSET(0x1B2C02D0)
#define UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET UNITYSDK_OFFSET(0x1B2C0460)
#define UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B2C0350)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET UNITYSDK_OFFSET(0x1B2C0300)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET UNITYSDK_OFFSET(0x1B2C02F0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET UNITYSDK_OFFSET(0x1B2C0320)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET UNITYSDK_OFFSET(0x1B2C0310)
#define UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2C0160)
#define UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B2C0330)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C03D0)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2C03C0)
#define UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET UNITYSDK_OFFSET(0x1B2C0390)
#define UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2C0180)
#define UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1B2C00B0)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x1B2C0070)
#define UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x1B2C00D0)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B2C0480)
#define UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2C0D90)
#define UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1B2BFF40)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2C2610)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1B2C00F0)
#define UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C0010)
#define UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2BFF60)
#define UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B2BFF20)
#define UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x1B2C2580)
#define UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1B2C0140)
#define UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x1B2C25D0)
#define UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x1B2BFFE0)
#define UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C0050)
#define UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1B2C0110)
#define UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x1B2BFF90)
#define UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1B2C0090)
#define UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x1B2BFFC0)
#define UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B2BFF00)
#define UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET UNITYSDK_OFFSET(0x1B2C03B0)
#define UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1B2C0540)
#define UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2C04B0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2C0840)
#define UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B2C0A00)
#define UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B2C0AB0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B2C0B60)
#define UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B2C0E00)
#define UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B2C1040)
#define UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B2C10F0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1B2C11B0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C0490)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTexture_TypeDefinitionIndex = 4186;

	class RenderTexture : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::DefaultFormat a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET))(this);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET))(this);
		}

		::System::Boolean get_useMipMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET))(this);
		}

		::System::Void set_useMipMap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET))(this, a1);
		}

		::System::Boolean get_sRGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET))(this);
		}

		::UnityEngine::VRTextureUsage get_vrUsage()
		{
			return ((::UnityEngine::VRTextureUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET))(this);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTextureMemoryless get_memorylessMode()
		{
			return ((::UnityEngine::RenderTextureMemoryless(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET))(this);
		}

		::System::Void set_memorylessMode(::UnityEngine::RenderTextureMemoryless a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTextureFormat get_format()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::RenderTextureFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_stencilFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET))(this);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET))(this, a1);
		}

		::System::Boolean get_autoGenerateMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET))(this);
		}

		::System::Void set_autoGenerateMips(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET))(this, a1);
		}

		::System::Int32 get_volumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET))(this);
		}

		::System::Void set_volumeDepth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET))(this, a1);
		}

		::System::Int32 get_antiAliasing()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET))(this);
		}

		::System::Void set_antiAliasing(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET))(this, a1);
		}

		::System::Boolean get_bindTextureMS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET))(this);
		}

		::System::Void set_bindTextureMS(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET))(this, a1);
		}

		::System::Boolean get_enableRandomWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET))(this);
		}

		::System::Void set_enableRandomWrite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET))(this, a1);
		}

		::System::Boolean get_useDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_useDynamicScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET))(this, a1);
		}

		::System::Boolean GetIsPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET))(this);
		}

		::System::Boolean get_isPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET))(this);
		}

		::System::Void set_isPowerOfTwo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET))(this, a1);
		}

		static ::UnityEngine::RenderTexture* GetActive()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET))();
		}

		static ::System::Void SetActive(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTexture* get_active()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_active(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET))(a1);
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

		::System::Void DiscardContents(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET))(this, a1, a2);
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

		::System::Void ResolveAATo(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET))(this, a1);
		}

		::System::Void ResolveAntiAliasedSurface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET))(this);
		}

		::System::Void ResolveAntiAliasedSurface_1(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET))(this, a1);
		}

		::System::Void SetGlobalShaderProperty(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET))(this, a1);
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

		::System::Void ConvertToEquirect(::UnityEngine::RenderTexture* a1, ::UnityEngine::Camera_MonoOrStereoscopicEye a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Camera_MonoOrStereoscopicEye))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetSRGBReadWrite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET))(a1);
		}

		static ::System::Boolean SupportsStencil(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET))(a1);
		}

		::System::Void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTextureDescriptor GetDescriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void ReleaseTemporary(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET))(a1);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_depth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTextureDescriptor get_descriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Void set_descriptor(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET))(this, a1);
		}

		static ::System::Void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET))(a1);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat a1, ::UnityEngine::RenderTextureReadWrite a2)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTexture* GetTemporaryImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5, ::UnityEngine::RenderTextureMemoryless a6, ::UnityEngine::VRTextureUsage a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5, ::UnityEngine::RenderTextureMemoryless a6, ::UnityEngine::VRTextureUsage a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5, ::UnityEngine::RenderTextureMemoryless a6, ::UnityEngine::VRTextureUsage a7)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5, ::UnityEngine::RenderTextureMemoryless a6)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::UnityEngine::RenderTextureMemoryless a7, ::UnityEngine::VRTextureUsage a8, ::System::Boolean a9)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::UnityEngine::RenderTextureMemoryless a7, ::UnityEngine::VRTextureUsage a8)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::UnityEngine::RenderTextureMemoryless a7)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_10(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_11(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_12(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_13(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET))(a1, a2);
		}

		::System::Boolean get_isCubemap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET))(this);
		}

		::System::Void set_isCubemap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET))(this, a1);
		}

		::System::Boolean get_isVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET))(this);
		}

		::System::Void set_isVolume(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET))(a1);
		}

		::UnityEngine::Vector2 GetTexelOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET))(this);
		}

		::System::Void GetColorBuffer_Injected(::UnityEngine::RenderBuffer& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetDepthBuffer_Injected(::UnityEngine::RenderBuffer& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetRenderTextureDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET))(this, a1);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(::UnityEngine::RenderTextureDescriptor& a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET))(a1);
		}
	};
}
