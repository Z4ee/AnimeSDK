#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class AtlasAllocator; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14ECB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_1_OFFSET UNITYSDK_OFFSET(0x1C14E740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET UNITYSDK_OFFSET(0x1C14E6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14E460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_BLIT2DTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14E010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_BLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14E370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_CLEARTARGET_OFFSET UNITYSDK_OFFSET(0x1C14DC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_GETTEXTUREMIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C14DA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14D490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_IS2D_OFFSET UNITYSDK_OFFSET(0x1C14DF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ISCACHED_OFFSET UNITYSDK_OFFSET(0x1C14E900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_MARKGPUTEXTUREINVALID_OFFSET UNITYSDK_OFFSET(0x1C14E310)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_MARKGPUTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1C14E2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET UNITYSDK_OFFSET(0x1C14E9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C14DAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_RESETALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1C14DB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_UPDATETEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C14EFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1C14EDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14F0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14D4A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Texture2DAtlas_TypeDefinitionIndex = 26982;

	class Texture2DAtlas : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector4* StaticGet_fullScaleOffset()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Texture2DAtlas_TypeDefinitionIndex)->GetStaticField(0x7460);
		}
		static ::System::Int32* StaticGet_maxMipLevelPadding()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Texture2DAtlas_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		::UnityEngine::RenderTexture* m_AtlasTexture; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* m_IsGPUTextureUpToDate; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector4>* m_AllocationCache; // 0x20
		::UnityEngine::Rendering::Universal::Internal::AtlasAllocator* m_AtlasAllocator; // 0x28
		::System::Boolean m_UseMipMaps; // 0x30
		::System::Int32 m_Width; // 0x34
		::System::Int32 m_Height; // 0x38
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format; // 0x3C

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, ::System::Boolean powerOfTwoPadding, ::System::String* name, ::System::Boolean useMipMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS__CTOR_OFFSET))(this, width, height, format, filterMode, powerOfTwoPadding, name, useMipMap);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* get_AtlasTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_GET_ATLASTEXTURE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_RELEASE_OFFSET))(this);
		}

		::System::Void ResetAllocator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_RESETALLOCATOR_OFFSET))(this);
		}

		::System::Void ClearTarget(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_CLEARTARGET_OFFSET))(this, cmd);
		}

		::System::Int32 GetTextureMipmapCount(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_GETTEXTUREMIPMAPCOUNT_OFFSET))(this, width, height);
		}

		::System::Boolean Is2D(::UnityEngine::Texture* texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_IS2D_OFFSET))(this, texture);
		}

		::System::Void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, ::System::Boolean blitMips)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_BLIT2DTEXTURE_OFFSET))(this, cmd, scaleOffset, texture, sourceScaleOffset, blitMips);
		}

		::System::Void MarkGPUTextureValid(::System::Int32 instanceId, ::System::Boolean mipAreValid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_MARKGPUTEXTUREVALID_OFFSET))(this, instanceId, mipAreValid);
		}

		::System::Void MarkGPUTextureInvalid(::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_MARKGPUTEXTUREINVALID_OFFSET))(this, instanceId);
		}

		::System::Void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, ::System::Boolean blitMips, ::System::Int32 overrideInstanceID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_BLITTEXTURE_OFFSET))(this, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
		}

		::System::Boolean AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4& scaleOffset, ::UnityEngine::Texture* texture, ::System::Int32 width, ::System::Int32 height, ::System::Int32 overrideInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTURE_OFFSET))(this, cmd, scaleOffset, texture, width, height, overrideInstanceID);
		}

		::System::Boolean AllocateTextureWithoutBlit(::UnityEngine::Texture* texture, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Vector4& scaleOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET))(this, texture, width, height, scaleOffset);
		}

		::System::Boolean AllocateTextureWithoutBlit_1(::System::Int32 instanceId, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Vector4& scaleOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_1_OFFSET))(this, instanceId, width, height, scaleOffset);
		}

		::System::Boolean IsCached(::UnityEngine::Vector4& scaleOffset, ::UnityEngine::Texture* texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ISCACHED_OFFSET))(this, scaleOffset, texture);
		}

		::System::Boolean NeedsUpdate(::UnityEngine::Texture* texture, ::System::Boolean needMips)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET))(this, texture, needMips);
		}

		::System::Boolean AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4& scaleOffset, ::UnityEngine::Texture* texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_ADDTEXTURE_OFFSET))(this, cmd, scaleOffset, texture);
		}

		::System::Boolean UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture, ::UnityEngine::Vector4& scaleOffset, ::UnityEngine::Vector4 sourceScaleOffset, ::System::Boolean updateIfNeeded, ::System::Boolean blitMips)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4&, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET))(this, cmd, oldTexture, newTexture, scaleOffset, sourceScaleOffset, updateIfNeeded, blitMips);
		}

		::System::Boolean UpdateTexture_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4& scaleOffset, ::System::Boolean updateIfNeeded, ::System::Boolean blitMips)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_TEXTURE2DATLAS_UPDATETEXTURE_1_OFFSET))(this, cmd, texture, scaleOffset, updateIfNeeded, blitMips);
		}
	};
}
