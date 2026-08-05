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

#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_AUTOAPPLYDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA54FD0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0xA547D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0xA54880)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x3FDE90)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0xA54F30)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x453110)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x31D320)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0x325D00)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SRGB_OFFSET UNITYSDK_OFFSET(0xA54830)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA54FA0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x32E550)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SETORCLEARRENDERTEXTURECREATIONFLAG_OFFSET UNITYSDK_OFFSET(0xA54EF0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOAPPLYDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA54FE0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0xA54F20)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_BINDMS_OFFSET UNITYSDK_OFFSET(0xA54F60)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0xA547E0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0xA54F80)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0xA54920)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x86B770)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0xA54F40)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_FASTCLEAR_OFFSET UNITYSDK_OFFSET(0xA55040)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x59E650)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA547A0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x82B270)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_LOSSYCOMPRESSION_OFFSET UNITYSDK_OFFSET(0xA55000)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET UNITYSDK_OFFSET(0x59E670)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_PRIVATESTORAGE_OFFSET UNITYSDK_OFFSET(0xA55060)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0x32E5F0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SRGB_OFFSET UNITYSDK_OFFSET(0xA54840)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_UNIFORMGRIDSAMPLEPATTERN_OFFSET UNITYSDK_OFFSET(0xA55020)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA54FB0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0xA54F10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x599190)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x59E640)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA65290)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA54A20)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA54B10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA54C50)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA54D70)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_5_OFFSET UNITYSDK_OFFSET(0xA54E40)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA54950)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureDescriptor_TypeDefinitionIndex = 5276;

	struct alignas(4) RenderTextureDescriptor
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_depthFormatBits()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RenderTextureDescriptor_TypeDefinitionIndex)->GetStaticField(0x4F10);
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
		::System::UInt32 _lifeTime_k__BackingField; // 0x44

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_OFFSET))(this, width, height);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat colorFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_1_OFFSET))(this, width, height, colorFormat);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat colorFormat, ::System::Int32 depthBufferBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_2_OFFSET))(this, width, height, colorFormat, depthBufferBits);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::System::Int32 depthBufferBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_3_OFFSET))(this, width, height, colorFormat, depthBufferBits);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::UnityEngine::RenderTextureFormat colorFormat, ::System::Int32 depthBufferBits, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_4_OFFSET))(this, width, height, colorFormat, depthBufferBits, mipCount);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::System::Int32 depthBufferBits, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR__CTOR_5_OFFSET))(this, width, height, colorFormat, depthBufferBits, mipCount);
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

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_STENCILFORMAT_OFFSET))(this, value);
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

		::System::Void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowSamplingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET))(this, value);
		}

		::UnityEngine::VRTextureUsage get_vrUsage()
		{
			return ((::UnityEngine::VRTextureUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VRUSAGE_OFFSET))(this);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureCreationFlags get_flags()
		{
			return ((::UnityEngine::RenderTextureCreationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::RenderTextureCreationFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Void set_memoryless(::UnityEngine::RenderTextureMemoryless value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET))(this, value);
		}

		::System::Void set_lifeTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_LIFETIME_OFFSET))(this, value);
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

		::System::Boolean get_enableRandomWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_ENABLERANDOMWRITE_OFFSET))(this);
		}

		::System::Void set_enableRandomWrite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET))(this, value);
		}

		::System::Void set_bindMS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_BINDMS_OFFSET))(this, value);
		}

		::System::Void set_createdFromScript(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET))(this, value);
		}

		::System::Boolean get_useDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_USEDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_useDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_autoApplyDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_AUTOAPPLYDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_autoApplyDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOAPPLYDYNAMICSCALE_OFFSET))(this, value);
		}

		::System::Void set_lossyCompression(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_LOSSYCOMPRESSION_OFFSET))(this, value);
		}

		::System::Void set_uniformGridSamplePattern(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_UNIFORMGRIDSAMPLEPATTERN_OFFSET))(this, value);
		}

		::System::Void set_fastClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_FASTCLEAR_OFFSET))(this, value);
		}

		::System::Void set_privateStorage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_PRIVATESTORAGE_OFFSET))(this, value);
		}
	};
}
