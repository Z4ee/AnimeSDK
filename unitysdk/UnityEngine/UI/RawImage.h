#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_RAWIMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A5874E0)
#define UNITYENGINE_UI_RAWIMAGE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1A587630)
#define UNITYENGINE_UI_RAWIMAGE_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1A587720)
#define UNITYENGINE_UI_RAWIMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A588060)
#define UNITYENGINE_UI_RAWIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1A587B70)
#define UNITYENGINE_UI_RAWIMAGE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1A5877B0)
#define UNITYENGINE_UI_RAWIMAGE_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1A587640)
#define UNITYENGINE_UI_RAWIMAGE_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1A587730)
#define UNITYENGINE_UI_RAWIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A587450)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RawImage_TypeDefinitionIndex = 5685;

	class RawImage : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF0
		::UnityEngine::Rect m_UVRect; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_SET_TEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_uvRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_GET_UVRECT_OFFSET))(this);
		}

		::System::Void set_uvRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_SET_UVRECT_OFFSET))(this, value);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}
	};
}
