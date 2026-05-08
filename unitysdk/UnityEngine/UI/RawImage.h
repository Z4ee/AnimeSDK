#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_RAWIMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C167AC0)
#define UNITYENGINE_UI_RAWIMAGE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C167F00)
#define UNITYENGINE_UI_RAWIMAGE_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1C167FD0)
#define UNITYENGINE_UI_RAWIMAGE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C168870)
#define UNITYENGINE_UI_RAWIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1C1683F0)
#define UNITYENGINE_UI_RAWIMAGE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1C168060)
#define UNITYENGINE_UI_RAWIMAGE_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C167F10)
#define UNITYENGINE_UI_RAWIMAGE_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1C167FE0)
#define UNITYENGINE_UI_RAWIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C167A90)
#define UNITYENGINE_UI_RAWIMAGE___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C1688C0)
#define UNITYENGINE_UI_RAWIMAGE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C168920)
#define UNITYENGINE_UI_RAWIMAGE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1C1689C0)
#define UNITYENGINE_UI_RAWIMAGE___BASE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1C1689D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RawImage_TypeDefinitionIndex = 8426;

	class RawImage : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::UnityEngine::Rect m_UVRect; // 0x100

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

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGE___BASE_SETNATIVESIZE_OFFSET))(this);
		}
	};
}
