#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureCreationFlags.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSamplingMode.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/VRTextureUsage.h"

#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0x22E7DC0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0x22E7E70)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1CCB0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x22E7F10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x6900)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MEMORYLESS_OFFSET UNITYSDK_OFFSET(0x17108E0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0x58640)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SRGB_OFFSET UNITYSDK_OFFSET(0x22E7E20)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x5E00)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SETORCLEARRENDERTEXTURECREATIONFLAG_OFFSET UNITYSDK_OFFSET(0x22E8330)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x22E8360)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0x22E7DD0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x22E8390)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0x22E7EE0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xAC20)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x22E8370)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x22E7D90)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET UNITYSDK_OFFSET(0x673B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0x16FA4C0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SRGB_OFFSET UNITYSDK_OFFSET(0x22E7E30)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x22E83B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x22E8350)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x22D8250)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0xBA10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4739B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22E7FD0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22E80D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22E81B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22E8280)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x22E7F20)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureDescriptor_TypeDefinitionIndex = 4013;

	struct alignas(4) RenderTextureDescriptor
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_depthFormatBits()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RenderTextureDescriptor_TypeDefinitionIndex)->GetStaticField(0x14160);
		}
		::System::Int32 _width_k__BackingField; // 0x10
		::System::Int32 _height_k__BackingField; // 0x14
		::System::Int32 _msaaSamples_k__BackingField; // 0x18
		::System::Int32 _volumeDepth_k__BackingField; // 0x1C
		::System::Int32 _mipCount_k__BackingField; // 0x20
		::UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat; // 0x24
		::UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField; // 0x28
		::System::Int32 _depthBufferBits; // 0x2C
		::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField; // 0x30
		::UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField; // 0x34
		::UnityEngine::VRTextureUsage _vrUsage_k__BackingField; // 0x38
		::UnityEngine::RenderTextureCreationFlags _flags; // 0x3C
		::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField; // 0x40

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_OFFSET))(this, width, height);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat colorFormat, ::System::Int32 depthBufferBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_1_OFFSET))(this, width, height, colorFormat, depthBufferBits);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::System::Int32 depthBufferBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_2_OFFSET))(this, width, height, colorFormat, depthBufferBits);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat colorFormat, ::System::Int32 depthBufferBits, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_3_OFFSET))(this, width, height, colorFormat, depthBufferBits, mipCount);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::System::Int32 depthBufferBits, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_4_OFFSET))(this, width, height, colorFormat, depthBufferBits, mipCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CCTOR_OFFSET))();
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_msaaSamples()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MSAASAMPLES_OFFSET))(this);
		}

		::System::Void set_msaaSamples(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MSAASAMPLES_OFFSET))(this, value);
		}

		::System::Int32 get_volumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VOLUMEDEPTH_OFFSET))(this);
		}

		::System::Void set_volumeDepth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VOLUMEDEPTH_OFFSET))(this, value);
		}

		::System::Int32 get_mipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MIPCOUNT_OFFSET))(this);
		}

		::System::Void set_mipCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MIPCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET))(this);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_GRAPHICSFORMAT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_stencilFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_STENCILFORMAT_OFFSET))(this);
		}

		::UnityEngine::RenderTextureFormat get_colorFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_COLORFORMAT_OFFSET))(this);
		}

		::System::Void set_colorFormat(::UnityEngine::RenderTextureFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_COLORFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_sRGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SRGB_OFFSET))(this);
		}

		::System::Void set_sRGB(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SRGB_OFFSET))(this, value);
		}

		::System::Int32 get_depthBufferBits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHBUFFERBITS_OFFSET))(this);
		}

		::System::Void set_depthBufferBits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHBUFFERBITS_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DIMENSION_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ShadowSamplingMode get_shadowSamplingMode()
		{
			return ((::UnityEngine::Rendering::ShadowSamplingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SHADOWSAMPLINGMODE_OFFSET))(this);
		}

		::System::Void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowSamplingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET))(this, value);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureCreationFlags get_flags()
		{
			return ((::UnityEngine::RenderTextureCreationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_FLAGS_OFFSET))(this);
		}

		::UnityEngine::RenderTextureMemoryless get_memoryless()
		{
			return ((::UnityEngine::RenderTextureMemoryless(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MEMORYLESS_OFFSET))(this);
		}

		::System::Void set_memoryless(::UnityEngine::RenderTextureMemoryless value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET))(this, value);
		}

		::System::Void SetOrClearRenderTextureCreationFlag(::System::Boolean value, ::UnityEngine::RenderTextureCreationFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::RenderTextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SETORCLEARRENDERTEXTURECREATIONFLAG_OFFSET))(this, value, flag);
		}

		::System::Void set_useMipMap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEMIPMAP_OFFSET))(this, value);
		}

		::System::Void set_autoGenerateMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOGENERATEMIPS_OFFSET))(this, value);
		}

		::System::Void set_enableRandomWrite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET))(this, value);
		}

		::System::Void set_createdFromScript(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET))(this, value);
		}

		::System::Void set_useDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET))(this, value);
		}
	};
}
