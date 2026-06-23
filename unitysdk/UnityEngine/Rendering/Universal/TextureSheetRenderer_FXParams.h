#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET UNITYSDK_OFFSET(0x1D4E8350)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x1D4E7F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x1D4E7FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x1D4E7ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x1D4E8020)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x1D4E8090)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1D4E8140)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x1D4E81F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x1D4E82A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x1D4E7F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x1D4E7FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x1D4E7EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x1D4E8030)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x1D4E80A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1D4E8150)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x1D4E8200)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x1D4E82B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E8DC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_FXParams_TypeDefinitionIndex = 27230;

	class TextureSheetRenderer_FXParams : public ::System::Object
	{
	public:
		// static const ::System::String* S_FX_BACKLIGHT; // 0x0
		// static const ::System::String* S_FX_OUTLINE; // 0x0
		// static const ::System::String* S_FX_DESATURATE; // 0x0
		// static const ::System::String* S_FX_DESATURATE_MASK; // 0x0
		::UnityEngine::Texture* fxBackLightTex; // 0x10
		::UnityEngine::Texture* desaturateMask; // 0x18
		::UnityEngine::Texture* fxOverrideTex; // 0x20
		::UnityEngine::Texture* mainTex; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* _LocalVectorArrayParams; // 0x30
		::UnityEngine::Vector4 _FxOverrideTexScaleOffset; // 0x38
		::UnityEngine::Vector4 _FxOutlineColor; // 0x48
		::UnityEngine::Vector4 _FxBackLightColor; // 0x58
		::System::Boolean _FX_BACKLIGHT_Dirty; // 0x68
		::System::Boolean desaturateMaskDirty; // 0x69
		::System::Boolean _FX_OUTLINE; // 0x6A
		::System::Boolean fxBackLightTexDirty; // 0x6B
		::UnityEngine::Vector4 _TextureSheetPrams; // 0x6C
		::UnityEngine::Vector4 _ImageParamas; // 0x7C
		::UnityEngine::Vector4 _FxBackLightTexScaleOffset; // 0x8C
		::UnityEngine::Vector4 _ExtraParams; // 0x9C
		::UnityEngine::Vector4 _FxBackLightTexUVSpeed; // 0xAC
		::System::Boolean _FX_DESATURATE_MASK_Dirty; // 0xBC
		::System::Boolean _FX_DESATURATE_Dirty; // 0xBD
		::System::Boolean mainTexDirty; // 0xBE
		::System::Boolean _FX_DESATURATE; // 0xBF
		::UnityEngine::Vector4 _FxOverrideTexColor; // 0xC0
		::UnityEngine::Vector4 _FxOverrideColor; // 0xD0
		::System::Boolean _FX_BACKLIGHT; // 0xE0
		::System::Boolean fxOverrideTexDirty; // 0xE1
		::System::Boolean _FX_OUTLINE_Dirty; // 0xE2
		::System::Boolean _FX_DESATURATE_MASK; // 0xE3
		::UnityEngine::Vector4 _FxOverrideTexUVSpeed; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_KEYWORDS_FX_OUTLINE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_OUTLINE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_BACKLIGHT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_BACKLIGHT(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_DESATURATE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_DESATURATE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS__FX_DESATURATE_MASK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this);
		}

		::System::Void set_KEYWORDS__FX_DESATURATE_MASK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__DesaturateMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET))(this);
		}

		::System::Void set__DesaturateMask(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxBackLightTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET))(this);
		}

		::System::Void set__FxBackLightTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxOverrideTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET))(this);
		}

		::System::Void set__FxOverrideTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__MainTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET))(this);
		}

		::System::Void set__MainTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET))(this, value);
		}

		::System::Void FlushParams(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET))(this, renderer, block);
		}
	};
}
